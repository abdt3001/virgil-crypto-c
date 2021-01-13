//  @license
// --------------------------------------------------------------------------
//  Copyright (C) 2015-2020 Virgil Security, Inc.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//      (1) Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//      (2) Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in
//      the documentation and/or other materials provided with the
//      distribution.
//
//      (3) Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
//  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
//  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
//  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
//  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
//  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
//
//  Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
// --------------------------------------------------------------------------
// clang-format off


//  @description
// --------------------------------------------------------------------------
//  This class provides access to the messenger Cloud File System,
//  that is used to store attachments and share them among users and chats.
// --------------------------------------------------------------------------


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------

#include "vssq_messenger_cloud_fs.h"
#include "vssq_memory.h"
#include "vssq_assert.h"
#include "vssq_messenger_cloud_fs_defs.h"
#include "vssq_messenger_cloud_fs_created_file_private.h"
#include "vssq_messenger_cloud_fs_file_info_list_private.h"
#include "vssq_messenger_cloud_fs_folder_info_list_private.h"
#include "vssq_messenger_cloud_fs_folder_private.h"
#include "vssq_messenger_cloud_fs_file_info.h"

#include <vssq_CloudFileSystem.pb.h>
#include <pb_decode.h>
#include <pb_encode.h>
#include <virgil/crypto/common/vsc_str_mutable.h>
#include <virgil/sdk/core/vssc_unix_time.h>
#include <virgil/sdk/core/vssc_virgil_http_client.h>
#include <virgil/sdk/core/vssc_http_request.h>
#include <virgil/sdk/core/vssc_http_response.h>

// clang-format on
//  @end


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vssq_messenger_cloud_fs_init() is called.
//  Note, that context is already zeroed.
//
static void
vssq_messenger_cloud_fs_init_ctx(vssq_messenger_cloud_fs_t *self);

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssq_messenger_cloud_fs_cleanup_ctx(vssq_messenger_cloud_fs_t *self);

//
//  Return request based on the given endpoint and body.
//
static vssc_http_request_t *
vssq_messenger_cloud_fs_create_request(const vssq_messenger_cloud_fs_t *self, vsc_str_t endpoint, vsc_data_t body);

//
//  Check given response for errors and return true if success.
//  If error then convert error and return false.
//
static bool
vssq_messenger_cloud_fs_check_response(const vssc_http_response_t *http_response, vssq_error_t *error);

//
//  Parse protobuf structure "vssq_pb.File"
//
static vssq_messenger_cloud_fs_file_info_t *
vssq_messenger_cloud_fs_parse_file_info(const vssq_pb_File *pb_file, vssq_error_t *error);

//
//  Parse protobuf structure "vssq_pb.Folder"
//
static vssq_messenger_cloud_fs_folder_info_t *
vssq_messenger_cloud_fs_parse_folder_info(const vssq_pb_Folder *pb_folder, vssq_error_t *error);

static const char k_header_value_content_type_protobuf_chars[] = "application/protobuf";

static const vsc_str_t k_header_value_content_type_protobuf = {
    k_header_value_content_type_protobuf_chars,
    sizeof(k_header_value_content_type_protobuf_chars) - 1
};

static const char k_url_path_file_create_chars[] = "/file/create";

static const vsc_str_t k_url_path_file_create = {
    k_url_path_file_create_chars,
    sizeof(k_url_path_file_create_chars) - 1
};

static const char k_url_path_file_get_download_link_chars[] = "/file/get-download-link";

static const vsc_str_t k_url_path_file_get_download_link = {
    k_url_path_file_get_download_link_chars,
    sizeof(k_url_path_file_get_download_link_chars) - 1
};

static const char k_url_path_file_delete_chars[] = "/file/delete";

static const vsc_str_t k_url_path_file_delete = {
    k_url_path_file_delete_chars,
    sizeof(k_url_path_file_delete_chars) - 1
};

static const char k_url_path_folder_create_chars[] = "/folder/create";

static const vsc_str_t k_url_path_folder_create = {
    k_url_path_folder_create_chars,
    sizeof(k_url_path_folder_create_chars) - 1
};

static const char k_url_path_folder_list_chars[] = "/folder/list";

static const vsc_str_t k_url_path_folder_list = {
    k_url_path_folder_list_chars,
    sizeof(k_url_path_folder_list_chars) - 1
};

static const char k_url_path_folder_delete_chars[] = "/folder/delete";

static const vsc_str_t k_url_path_folder_delete = {
    k_url_path_folder_delete_chars,
    sizeof(k_url_path_folder_delete_chars) - 1
};

//
//  Return size of 'vssq_messenger_cloud_fs_t'.
//
VSSQ_PUBLIC size_t
vssq_messenger_cloud_fs_ctx_size(void) {

    return sizeof(vssq_messenger_cloud_fs_t);
}

//
//  Perform initialization of pre-allocated context.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_init(vssq_messenger_cloud_fs_t *self) {

    VSSQ_ASSERT_PTR(self);

    vssq_zeroize(self, sizeof(vssq_messenger_cloud_fs_t));

    self->refcnt = 1;

    vssq_messenger_cloud_fs_init_ctx(self);
}

//
//  Release all inner resources including class dependencies.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_cleanup(vssq_messenger_cloud_fs_t *self) {

    if (self == NULL) {
        return;
    }

    vssq_messenger_cloud_fs_release_auth(self);

    vssq_messenger_cloud_fs_cleanup_ctx(self);

    vssq_zeroize(self, sizeof(vssq_messenger_cloud_fs_t));
}

//
//  Allocate context and perform it's initialization.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_t *
vssq_messenger_cloud_fs_new(void) {

    vssq_messenger_cloud_fs_t *self = (vssq_messenger_cloud_fs_t *) vssq_alloc(sizeof (vssq_messenger_cloud_fs_t));
    VSSQ_ASSERT_ALLOC(self);

    vssq_messenger_cloud_fs_init(self);

    self->self_dealloc_cb = vssq_dealloc;

    return self;
}

//
//  Release all inner resources and deallocate context if needed.
//  It is safe to call this method even if the context was statically allocated.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_delete(const vssq_messenger_cloud_fs_t *self) {

    vssq_messenger_cloud_fs_t *local_self = (vssq_messenger_cloud_fs_t *)self;

    if (local_self == NULL) {
        return;
    }

    size_t old_counter = local_self->refcnt;
    VSSQ_ASSERT(old_counter != 0);
    size_t new_counter = old_counter - 1;

    #if defined(VSSQ_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    while (!VSSQ_ATOMIC_COMPARE_EXCHANGE_WEAK(&local_self->refcnt, &old_counter, new_counter)) {
        old_counter = local_self->refcnt;
        VSSQ_ASSERT(old_counter != 0);
        new_counter = old_counter - 1;
    }
    #else
    local_self->refcnt = new_counter;
    #endif

    if (new_counter > 0) {
        return;
    }

    vssq_dealloc_fn self_dealloc_cb = local_self->self_dealloc_cb;

    vssq_messenger_cloud_fs_cleanup(local_self);

    if (self_dealloc_cb != NULL) {
        self_dealloc_cb(local_self);
    }
}

//
//  Delete given context and nullifies reference.
//  This is a reverse action of the function 'vssq_messenger_cloud_fs_new ()'.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_destroy(vssq_messenger_cloud_fs_t **self_ref) {

    VSSQ_ASSERT_PTR(self_ref);

    vssq_messenger_cloud_fs_t *self = *self_ref;
    *self_ref = NULL;

    vssq_messenger_cloud_fs_delete(self);
}

//
//  Copy given class context by increasing reference counter.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_t *
vssq_messenger_cloud_fs_shallow_copy(vssq_messenger_cloud_fs_t *self) {

    VSSQ_ASSERT_PTR(self);

    #if defined(VSSQ_ATOMIC_COMPARE_EXCHANGE_WEAK)
    //  CAS loop
    size_t old_counter;
    size_t new_counter;
    do {
        old_counter = self->refcnt;
        new_counter = old_counter + 1;
    } while (!VSSQ_ATOMIC_COMPARE_EXCHANGE_WEAK(&self->refcnt, &old_counter, new_counter));
    #else
    ++self->refcnt;
    #endif

    return self;
}

//
//  Copy given class context by increasing reference counter.
//  Reference counter is internally synchronized, so constness is presumed.
//
VSSQ_PUBLIC const vssq_messenger_cloud_fs_t *
vssq_messenger_cloud_fs_shallow_copy_const(const vssq_messenger_cloud_fs_t *self) {

    return vssq_messenger_cloud_fs_shallow_copy((vssq_messenger_cloud_fs_t *)self);
}

//
//  Setup dependency to the class 'messenger auth' with shared ownership.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_use_auth(vssq_messenger_cloud_fs_t *self, vssq_messenger_auth_t *auth) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(auth);
    VSSQ_ASSERT(self->auth == NULL);

    self->auth = vssq_messenger_auth_shallow_copy(auth);
}

//
//  Setup dependency to the class 'messenger auth' and transfer ownership.
//  Note, transfer ownership does not mean that object is uniquely owned by the target object.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_take_auth(vssq_messenger_cloud_fs_t *self, vssq_messenger_auth_t *auth) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(auth);
    VSSQ_ASSERT(self->auth == NULL);

    self->auth = auth;
}

//
//  Release dependency to the class 'messenger auth'.
//
VSSQ_PUBLIC void
vssq_messenger_cloud_fs_release_auth(vssq_messenger_cloud_fs_t *self) {

    VSSQ_ASSERT_PTR(self);

    vssq_messenger_auth_destroy(&self->auth);
}


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


//
//  Perform context specific initialization.
//  Note, this method is called automatically when method vssq_messenger_cloud_fs_init() is called.
//  Note, that context is already zeroed.
//
static void
vssq_messenger_cloud_fs_init_ctx(vssq_messenger_cloud_fs_t *self) {

    VSSQ_ASSERT_PTR(self);
}

//
//  Release all inner resources.
//  Note, this method is called automatically once when class is completely cleaning up.
//  Note, that context will be zeroed automatically next this method.
//
static void
vssq_messenger_cloud_fs_cleanup_ctx(vssq_messenger_cloud_fs_t *self) {

    VSSQ_ASSERT_PTR(self);
}

//
//  Create a new file within the Cloud FS.
//  Note, if folder id is empty then file created in a root folder.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_created_file_t *
vssq_messenger_cloud_fs_create_file(const vssq_messenger_cloud_fs_t *self, vsc_str_t name, vsc_str_t type, size_t size,
        vsc_str_t folder_id, vsc_data_t file_encrypted_key, vssq_error_t *error) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(name));
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(type));
    VSSQ_ASSERT(vsc_str_is_valid(folder_id));
    VSSQ_ASSERT(vsc_data_is_valid_and_non_empty(file_encrypted_key));

    //
    //  Declare vars.
    //
    vssq_pb_CreateFileReq request_body = vssq_pb_CreateFileReq_init_zero;
    vssq_pb_CreateFileResp response_body = vssq_pb_CreateFileResp_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;
    vssq_messenger_cloud_fs_created_file_t *created_file = NULL;
    vssq_messenger_cloud_fs_file_info_t *file_info = NULL;

    //
    //  Create request body.
    //

    //
    //  Fulfill File info.
    //
    VSSQ_ASSERT(name.len < sizeof(request_body.name));
    memcpy(request_body.name, name.chars, name.len);

    VSSQ_ASSERT(type.len < sizeof(request_body.type));
    memcpy(request_body.type, type.chars, type.len);

    //
    //  Fulfill file info.
    //
    request_body.size = size;

    //
    //  Fulfill parent folder info.
    //
    VSSQ_ASSERT(folder_id.len < sizeof(request_body.folder_id));
    memcpy(request_body.folder_id, folder_id.chars, folder_id.len);

    //
    //  Fulfill Decryption info.
    //
    request_body.file_encrypted_key = vssq_alloc(PB_BYTES_ARRAY_T_ALLOCSIZE(file_encrypted_key.len));
    request_body.file_encrypted_key->size = file_encrypted_key.len;
    memcpy(request_body.file_encrypted_key->bytes, file_encrypted_key.bytes, file_encrypted_key.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_CreateFileReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_CreateFileReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request =
            vssq_messenger_cloud_fs_create_request(self, k_url_path_file_create, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, error)) {
        goto cleanup;
    }

    //
    //  Parse response.
    //
    vsc_data_t body = vsc_str_as_data(vssc_http_response_body(response));
    if (vsc_data_is_empty(body)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    pb_istream_t istream = pb_istream_from_buffer(body.bytes, body.len);

    is_pb_success = pb_decode(&istream, vssq_pb_CreateFileResp_fields, &response_body);
    if (!is_pb_success) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    vsc_str_t upload_link_str = vsc_str_from_str(response_body.upload_link);
    if (vsc_str_is_empty(upload_link_str)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    file_info = vssq_messenger_cloud_fs_parse_file_info(&response_body.file, error);
    if (NULL == file_info) {
        goto cleanup;
    }

    created_file = vssq_messenger_cloud_fs_created_file_new_with_disown(upload_link_str, &file_info);

cleanup:
    vssq_dealloc(request_body.file_encrypted_key);
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);

    return created_file;
}

//
//  Get a file download link.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_file_download_info_t *
vssq_messenger_cloud_fs_get_download_link(const vssq_messenger_cloud_fs_t *self, vsc_str_t id, vssq_error_t *error) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(id));

    //
    //  Declare vars.
    //
    vssq_pb_GetFileLinkReq request_body = vssq_pb_GetFileLinkReq_init_zero;
    vssq_pb_GetFileLinkResp response_body = vssq_pb_GetFileLinkResp_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;
    vssq_messenger_cloud_fs_file_download_info_t *download_info = NULL;

    //
    //  Create request body.
    //
    VSSQ_ASSERT(id.len < sizeof(request_body.id));
    memcpy(request_body.id, id.chars, id.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_GetFileLinkReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_DeleteFileReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request = vssq_messenger_cloud_fs_create_request(
            self, k_url_path_file_get_download_link, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, error)) {
        goto cleanup;
    }

    //
    //  Parse response.
    //
    vsc_data_t body = vsc_str_as_data(vssc_http_response_body(response));
    if (vsc_data_is_empty(body)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    pb_istream_t istream = pb_istream_from_buffer(body.bytes, body.len);

    is_pb_success = pb_decode(&istream, vssq_pb_GetFileLinkResp_fields, &response_body);
    if (!is_pb_success) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    vsc_str_t download_link = vsc_str_from_str(response_body.download_link);
    if (vsc_str_is_empty(download_link)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    vsc_data_t file_encrypted_key =
            vsc_data(response_body.file_encrypted_key->bytes, response_body.file_encrypted_key->size);
    if (vsc_data_is_empty(file_encrypted_key)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    download_info = vssq_messenger_cloud_fs_file_download_info_new_with(download_link, file_encrypted_key);

cleanup:
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);

    return download_info;
}

//
//  Delete existing file.
//
VSSQ_PUBLIC vssq_status_t
vssq_messenger_cloud_fs_delete_file(const vssq_messenger_cloud_fs_t *self, vsc_str_t id) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(id));

    //
    //  Declare vars.
    //
    vssq_pb_DeleteFileReq request_body = vssq_pb_DeleteFileReq_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;

    vssq_error_t error;
    vssq_error_reset(&error);

    //
    //  Create request body.
    //
    VSSQ_ASSERT(id.len < sizeof(request_body.id));
    memcpy(request_body.id, id.chars, id.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_DeleteFileReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_DeleteFileReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request =
            vssq_messenger_cloud_fs_create_request(self, k_url_path_file_delete, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, &error)) {
        goto cleanup;
    }

cleanup:
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);

    return vssq_error_status(&error);
}

//
//  Create a new folder within the Cloud FS.
//  Note, if parent folder id is empty then folder created in a root folder.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_folder_info_t *
vssq_messenger_cloud_fs_create_folder(const vssq_messenger_cloud_fs_t *self, vsc_str_t name,
        vsc_data_t folder_encrypted_key, vsc_data_t folder_public_key, vsc_str_t parent_folder_id,
        vssq_error_t *error) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid(parent_folder_id));
    VSSQ_ASSERT(vsc_data_is_valid_and_non_empty(folder_encrypted_key));
    VSSQ_ASSERT(vsc_data_is_valid_and_non_empty(folder_public_key));

    //
    //  Declare vars.
    //
    vssq_pb_CreateFolderReq request_body = vssq_pb_CreateFolderReq_init_zero;
    vssq_pb_CreateFolderResp response_body = vssq_pb_CreateFolderResp_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;
    vssq_messenger_cloud_fs_folder_info_t *folder_info = NULL;

    //
    //  Create request body.
    //

    //
    //  Fulfill generic info.
    //
    VSSQ_ASSERT(name.len < sizeof(request_body.name));
    memcpy(request_body.name, name.chars, name.len);

    VSSQ_ASSERT(parent_folder_id.len < sizeof(request_body.parent_folder_id));
    memcpy(request_body.parent_folder_id, parent_folder_id.chars, parent_folder_id.len);

    //
    //  Fulfill decryption info.
    //
    request_body.folder_encrypted_key = vssq_alloc(PB_BYTES_ARRAY_T_ALLOCSIZE(folder_encrypted_key.len));
    request_body.folder_encrypted_key->size = folder_encrypted_key.len;
    memcpy(request_body.folder_encrypted_key->bytes, folder_encrypted_key.bytes, folder_encrypted_key.len);

    request_body.folder_public_key = vssq_alloc(PB_BYTES_ARRAY_T_ALLOCSIZE(folder_public_key.len));
    request_body.folder_public_key->size = folder_public_key.len;
    memcpy(request_body.folder_public_key->bytes, folder_public_key.bytes, folder_public_key.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_CreateFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_CreateFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request = vssq_messenger_cloud_fs_create_request(
            self, k_url_path_folder_create, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, error)) {
        goto cleanup;
    }

    //
    //  Parse response.
    //
    vsc_data_t body = vsc_str_as_data(vssc_http_response_body(response));
    if (vsc_data_is_empty(body)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    pb_istream_t istream = pb_istream_from_buffer(body.bytes, body.len);

    is_pb_success = pb_decode(&istream, vssq_pb_CreateFolderResp_fields, &response_body);
    if (!is_pb_success) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    folder_info = vssq_messenger_cloud_fs_parse_folder_info(&response_body.folder, error);
    if (NULL == folder_info) {
        goto cleanup;
    }

cleanup:
    vssq_dealloc(request_body.folder_encrypted_key);
    vssq_dealloc(request_body.folder_public_key);
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);

    return folder_info;
}

//
//  List content of requested folder.
//  Note, if folder id is empty then a root folder will be listed.
//
VSSQ_PUBLIC vssq_messenger_cloud_fs_folder_t *
vssq_messenger_cloud_fs_list_folder(const vssq_messenger_cloud_fs_t *self, vsc_str_t id, vssq_error_t *error) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(id));

    //
    //  Declare vars.
    //
    vssq_pb_ListFolderReq request_body = vssq_pb_ListFolderReq_init_zero;
    vssq_pb_ListFolderResp response_body = vssq_pb_ListFolderResp_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;
    vssq_messenger_cloud_fs_folder_info_list_t *folders = NULL;
    vssq_messenger_cloud_fs_file_info_list_t *files = NULL;
    vssq_messenger_cloud_fs_folder_info_t *info = NULL;
    vssq_messenger_cloud_fs_folder_t *folder = NULL;

    //
    //  Create request body.
    //
    VSSQ_ASSERT(id.len < sizeof(request_body.folder_id));
    memcpy(request_body.folder_id, id.chars, id.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_ListFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_ListFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request =
            vssq_messenger_cloud_fs_create_request(self, k_url_path_folder_list, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, error)) {
        goto cleanup;
    }

    //
    //  Parse response.
    //
    vsc_data_t body = vsc_str_as_data(vssc_http_response_body(response));
    if (vsc_data_is_empty(body)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    pb_istream_t istream = pb_istream_from_buffer(body.bytes, body.len);

    is_pb_success = pb_decode(&istream, vssq_pb_ListFolderResp_fields, &response_body);
    if (!is_pb_success) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    //
    //  Parse folder info.
    //
    info = vssq_messenger_cloud_fs_parse_folder_info(&response_body.current_folder, error);
    if (NULL == info) {
        goto cleanup;
    }

    //
    //  Parse folder sub-folders.
    //
    files = vssq_messenger_cloud_fs_file_info_list_new();
    for (size_t pos = 0; pos < response_body.files_count; ++pos) {
        vssq_messenger_cloud_fs_file_info_t *file_info =
                vssq_messenger_cloud_fs_parse_file_info(&response_body.files[pos], error);
        if (NULL == file_info) {
            goto cleanup;
        }

        vssq_messenger_cloud_fs_file_info_list_add_disown(files, &file_info);
    }

    //
    //  Parse folder files.
    //
    folders = vssq_messenger_cloud_fs_folder_info_list_new();
    for (size_t pos = 0; pos < response_body.folders_count; ++pos) {
        vssq_messenger_cloud_fs_folder_info_t *folder_info =
                vssq_messenger_cloud_fs_parse_folder_info(&response_body.folders[pos], error);
        if (NULL == folder_info) {
            goto cleanup;
        }

        vssq_messenger_cloud_fs_folder_info_list_add_disown(folders, &folder_info);
    }

    //
    //  Parse keys.
    //
    vsc_data_t folder_encrypted_key =
            vsc_data(response_body.folder_encrypted_key->bytes, response_body.folder_encrypted_key->size);
    if (vsc_data_is_empty(folder_encrypted_key)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    vsc_data_t folder_public_key =
            vsc_data(response_body.folder_public_key->bytes, response_body.folder_public_key->size);
    if (vsc_data_is_empty(folder_public_key)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        goto cleanup;
    }

    folder = vssq_messenger_cloud_fs_folder_new_with_disown(response_body.total_folder_count,
            response_body.total_file_count, folder_encrypted_key, folder_public_key, &folders, &files, &info);

cleanup:
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);
    vssq_messenger_cloud_fs_folder_info_list_destroy(&folders);
    vssq_messenger_cloud_fs_file_info_list_destroy(&files);
    vssq_messenger_cloud_fs_folder_info_destroy(&info);

    return folder;
}

//
//  Delete existing folder.
//
VSSQ_PUBLIC vssq_status_t
vssq_messenger_cloud_fs_delete_folder(const vssq_messenger_cloud_fs_t *self, vsc_str_t id) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT_PTR(self->auth);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(id));

    //
    //  Declare vars.
    //
    vssq_pb_DeleteFolderReq request_body = vssq_pb_DeleteFolderReq_init_zero;
    vsc_buffer_t *request_body_buffer = NULL;
    vssc_http_request_t *request = NULL;
    vssc_http_response_t *response = NULL;

    vssq_error_t error;
    vssq_error_reset(&error);

    //
    //  Create request body.
    //
    VSSQ_ASSERT(id.len < sizeof(request_body.id));
    memcpy(request_body.id, id.chars, id.len);

    //
    //  Serialize request body
    //
    size_t request_body_buffer_len = 0;
    bool is_pb_success = pb_get_encoded_size(&request_body_buffer_len, vssq_pb_DeleteFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);

    request_body_buffer = vsc_buffer_new_with_capacity(request_body_buffer_len);

    pb_ostream_t ostream = pb_ostream_from_buffer(
            vsc_buffer_unused_bytes(request_body_buffer), vsc_buffer_unused_len(request_body_buffer));

    is_pb_success = pb_encode(&ostream, vssq_pb_DeleteFolderReq_fields, &request_body);
    VSSQ_ASSERT(is_pb_success);
    vsc_buffer_inc_used(request_body_buffer, ostream.bytes_written);

    //
    //  Create request.
    //
    request = vssq_messenger_cloud_fs_create_request(
            self, k_url_path_folder_delete, vsc_buffer_data(request_body_buffer));
    //
    //  Send request.
    //
    response = vssq_messenger_auth_send_messenger_request(self->auth, request, true, NULL);

    if (!vssq_messenger_cloud_fs_check_response(response, &error)) {
        goto cleanup;
    }

cleanup:
    vsc_buffer_destroy(&request_body_buffer);
    vssc_http_request_destroy(&request);
    vssc_http_response_destroy(&response);

    return vssq_error_status(&error);
}

//
//  Return request based on the given endpoint and body.
//
static vssc_http_request_t *
vssq_messenger_cloud_fs_create_request(const vssq_messenger_cloud_fs_t *self, vsc_str_t endpoint, vsc_data_t body) {

    VSSQ_ASSERT_PTR(self);
    VSSQ_ASSERT(vsc_str_is_valid_and_non_empty(endpoint));
    VSSQ_ASSERT(vsc_data_is_valid_and_non_empty(body));

    vsc_str_t base_url = vssq_messenger_config_messenger_url(vssq_messenger_auth_config(self->auth));
    vsc_str_mutable_t url = vsc_str_mutable_concat(base_url, endpoint);

    vssc_http_request_t *request = vssc_http_request_new_with_body(
            vssc_http_request_method_post, vsc_str_mutable_as_str(url), vsc_str_from_data(body));

    vssc_http_request_add_header(request, vssc_http_header_name_content_type, k_header_value_content_type_protobuf);

    vsc_str_mutable_release(&url);

    return request;
}

//
//  Check given response for errors and return true if success.
//  If error then convert error and return false.
//
static bool
vssq_messenger_cloud_fs_check_response(const vssc_http_response_t *http_response, vssq_error_t *error) {

    if (NULL == http_response) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_SEND_REQUEST_FAILED);
        return false;
    }

    if (!vssc_http_response_is_success(http_response)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_RESPONSE_WITH_ERROR);
        return false;
    }

    vsc_data_t body = vsc_str_as_data(vssc_http_response_body(http_response));

    if (!vsc_data_is_empty(body)) {
        const vsc_str_t content_type =
                vssc_http_response_find_header(http_response, vssc_http_header_name_content_type, NULL);

        if (!vsc_str_equal(content_type, k_header_value_content_type_protobuf)) {
            VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_UNEXPECTED_CONTENT_TYPE);
            return false;
        }
    }

    return true;
}

//
//  Parse protobuf structure "vssq_pb.File"
//
static vssq_messenger_cloud_fs_file_info_t *
vssq_messenger_cloud_fs_parse_file_info(const vssq_pb_File *pb_file, vssq_error_t *error) {

    VSSQ_ASSERT_PTR(pb_file);

    vsc_str_t id = vsc_str_from_str(pb_file->id);
    vsc_str_t name = vsc_str_from_str(pb_file->name);
    vsc_str_t type = vsc_str_from_str(pb_file->type);

    if (vsc_str_is_empty(id) || vsc_str_is_empty(name) || vsc_str_is_empty(type)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        return NULL;
    }

    return vssq_messenger_cloud_fs_file_info_new_with(
            id, name, type, pb_file->size, pb_file->created_at.seconds, pb_file->updated_at.seconds);
}

//
//  Parse protobuf structure "vssq_pb.Folder"
//
static vssq_messenger_cloud_fs_folder_info_t *
vssq_messenger_cloud_fs_parse_folder_info(const vssq_pb_Folder *pb_folder, vssq_error_t *error) {

    VSSQ_ASSERT_PTR(pb_folder);

    vsc_str_t id = vsc_str_from_str(pb_folder->id);
    vsc_str_t name = vsc_str_from_str(pb_folder->name);

    if (vsc_str_is_empty(id) || vsc_str_is_empty(name)) {
        VSSQ_ERROR_SAFE_UPDATE(error, vssq_status_CLOUD_FS_FAILED_PARSE_RESPONSE_FAILED);
        return NULL;
    }

    return vssq_messenger_cloud_fs_folder_info_new_with(
            id, name, pb_folder->created_at.seconds, pb_folder->updated_at.seconds);
}
