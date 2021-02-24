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


//  @warning
// --------------------------------------------------------------------------
//  This file is partially generated.
//  Generated blocks are enclosed between tags [@<tag>, @end].
//  User's code can be added between tags [@end, @<tag>].
// --------------------------------------------------------------------------


//  @description
// --------------------------------------------------------------------------
//  Helper to cleanup protobuf structures.
// --------------------------------------------------------------------------

#ifndef VSSQ_CLOUD_FILE_SYSTEM_PB_H_INCLUDED
#define VSSQ_CLOUD_FILE_SYSTEM_PB_H_INCLUDED

#include "vssq_library.h"

#include <vssq_CloudFileSystem.pb.h>

// clang-format on
//  @end


#ifdef __cplusplus
extern "C" {
#endif


//  @generated
// --------------------------------------------------------------------------
// clang-format off
//  Generated section start.
// --------------------------------------------------------------------------

//
//  Cleanup memory for the type vssq_pb_CreateFileReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_create_file_req(vssq_pb_CreateFileReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_CreateFolderReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_create_folder_req(vssq_pb_CreateFolderReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_DeleteFileReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_delete_file_req(vssq_pb_DeleteFileReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_DeleteFolderReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_delete_folder_req(vssq_pb_DeleteFolderReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_File.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_file(vssq_pb_File *pb_obj);

//
//  Cleanup memory for the type vssq_pb_Folder.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_folder(vssq_pb_Folder *pb_obj);

//
//  Cleanup memory for the type vssq_pb_GetFileLinkReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_get_file_link_req(vssq_pb_GetFileLinkReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_GetFileLinkResp.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_get_file_link_resp(vssq_pb_GetFileLinkResp *pb_obj);

//
//  Cleanup memory for the type vssq_pb_Pagination.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_pagination(vssq_pb_Pagination *pb_obj);

//
//  Cleanup memory for the type vssq_pb_ShareFolderReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_share_folder_req(vssq_pb_ShareFolderReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_UnshareFolderReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_unshare_folder_req(vssq_pb_UnshareFolderReq *pb_obj);

//
//  Cleanup memory for the typvssq_pb_Usere .
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_user(vssq_pb_User *pb_obj);

//
//  Cleanup memory for the type vssq_pb_CreateFileResp.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_create_file_resp(vssq_pb_CreateFileResp *pb_obj);

//
//  Cleanup memory for the type vssq_pb_CreateFolderResp.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_create_folder_resp(vssq_pb_CreateFolderResp *pb_obj);

//
//  Cleanup memory for the type vssq_pb_ListFolderReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_list_folder_req(vssq_pb_ListFolderReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_ListFolderResp.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_list_folder_resp(vssq_pb_ListFolderResp *pb_obj);

//
//  Cleanup memory for the type vssq_pb_SharedGroup.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_shared_group(vssq_pb_SharedGroup *pb_obj);

//
//  Cleanup memory for the type vssq_pb_GetSharedGroupReq.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_get_shared_group_req(vssq_pb_GetSharedGroupReq *pb_obj);

//
//  Cleanup memory for the type vssq_pb_GetSharedGroupResp.
//
VSSQ_PRIVATE void
vssq_cloud_file_system_pb_cleanup_pb_get_shared_group_resp(vssq_pb_GetSharedGroupResp *pb_obj);


// --------------------------------------------------------------------------
//  Generated section end.
// clang-format on
// --------------------------------------------------------------------------
//  @end


#ifdef __cplusplus
}
#endif


//  @footer
#endif // VSSQ_CLOUD_FILE_SYSTEM_PB_H_INCLUDED
//  @end
