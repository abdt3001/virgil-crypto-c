#   @license
#   -------------------------------------------------------------------------
#   Copyright (C) 2015-2020 Virgil Security, Inc.
#
#   All rights reserved.
#
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions are
#   met:
#
#       (1) Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#
#       (2) Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in
#       the documentation and/or other materials provided with the
#       distribution.
#
#       (3) Neither the name of the copyright holder nor the names of its
#       contributors may be used to endorse or promote products derived from
#       this software without specific prior written permission.
#
#   THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
#   IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#   DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
#   INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
#   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#   SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
#   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
#   STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
#   IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#   POSSIBILITY OF SUCH DAMAGE.
#
#   Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
#   -------------------------------------------------------------------------

#   @warning
#   -------------------------------------------------------------------------
#   This file is fully generated by script 'cmake_files_codegen.gsl'.
#   It can be changed temporary for debug purposes only.
#   -------------------------------------------------------------------------
#   @end


include_guard()

if(NOT TARGET comm_kit)
    message(FATAL_ERROR "Expected target 'comm_kit' to be defined first.")
endif()

include(CheckIncludeFiles)
check_include_files(assert.h VSSQ_HAVE_ASSERT_H)
check_include_files(stdatomic.h VSSQ_HAVE_STDATOMIC_H)

configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_platform.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/sdk/comm-kit/vssq_platform.h"
        )

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_assert.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_library.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_memory.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/sdk/comm-kit/vssq_platform.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_contact_utils.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_ejabberd_jwt.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_error.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_error_message.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_auth.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_cipher.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_created_file.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_download_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_info_list.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder_info.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder_info_list.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_user_permission.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_user_permission_list.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_config.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_creds.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_file_cipher.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_group.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_group_epoch_list.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_user.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_user_list.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_status.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_permission.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_comm_kit_public.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

target_sources(comm_kit
    PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_assert.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_library.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_memory.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_atomic.h"
            "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/sdk/comm-kit/vssq_platform.h"
            "$<$<BOOL:${VSSQ_CLOUD_FILE_SYSTEM_PB}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_cloud_file_system_pb.h>"
            "$<$<BOOL:${VSSQ_CONTACT_UTILS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_contact_utils.h>"
            "$<$<BOOL:${VSSQ_EJABBERD_JWT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_ejabberd_jwt.h>"
            "$<$<BOOL:${VSSQ_EJABBERD_JWT}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_ejabberd_jwt_defs.h>"
            "$<$<BOOL:${VSSQ_ERROR}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_error.h>"
            "$<$<BOOL:${VSSQ_ERROR_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_error_message.h>"
            "$<$<BOOL:${VSSQ_MESSENGER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger.h>"
            "$<$<BOOL:${VSSQ_MESSENGER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_auth.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_auth_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_cipher.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_cipher_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CREATED_FILE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_created_file.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_created_file_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CREATED_FILE}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_created_file_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_DOWNLOAD_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_download_info.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_DOWNLOAD_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_file_download_info_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_info.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_file_info_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_file_info_list.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_file_info_list_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_file_info_list_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_folder_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_folder_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder_info.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_folder_info_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_folder_info_list.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_folder_info_list_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_folder_info_list_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_user_permission.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_user_permission_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_user_permission_list.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_user_permission_list_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_cloud_fs_user_permission_list_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONFIG}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_config.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONFIG}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_config_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONTACTS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_contacts.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONTACTS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_contacts_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_CREDS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_creds.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_creds_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_CREDS}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_creds_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_FILE_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_file_cipher.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_FILE_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_file_cipher_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_group.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_group_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_group_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_KEYKNOX_STORAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_keyknox_storage.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_KEYKNOX_STORAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_keyknox_storage_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_group_epoch_list.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_group_epoch_list_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_group_epoch_list_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_user.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_user_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_USER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_user_defs.h>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_user_list.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_user_list_private.h"
            "$<$<BOOL:${VSSQ_MESSENGER_USER_LIST}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_messenger_user_list_defs.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_status.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_messenger_cloud_fs_permission.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/vssq_comm_kit_public.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private/vssq_comm_kit_private.h"

            "${CMAKE_CURRENT_LIST_DIR}/src/vssq_assert.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vssq_library.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vssq_memory.c"
            "$<$<BOOL:${VSSQ_CLOUD_FILE_SYSTEM_PB}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_cloud_file_system_pb.c>"
            "$<$<BOOL:${VSSQ_CONTACT_UTILS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_contact_utils.c>"
            "$<$<BOOL:${VSSQ_EJABBERD_JWT}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_ejabberd_jwt.c>"
            "$<$<BOOL:${VSSQ_EJABBERD_JWT}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_ejabberd_jwt_defs.c>"
            "$<$<BOOL:${VSSQ_ERROR}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_error.c>"
            "$<$<BOOL:${VSSQ_ERROR_MESSAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_error_message.c>"
            "$<$<BOOL:${VSSQ_MESSENGER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger.c>"
            "$<$<BOOL:${VSSQ_MESSENGER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_auth.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_AUTH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_auth_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_cipher.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_cipher_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CREATED_FILE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_created_file.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_CREATED_FILE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_created_file_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_DOWNLOAD_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_download_info.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_DOWNLOAD_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_download_info_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_info.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_info_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_info_list.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FILE_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_file_info_list_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder_info.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder_info_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder_info_list.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_FOLDER_INFO_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_folder_info_list_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_user_permission.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_user_permission_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_user_permission_list.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CLOUD_FS_USER_PERMISSION_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_user_permission_list_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONFIG}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_config.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONFIG}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_config_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONTACTS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_contacts.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CONTACTS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_contacts_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CREDS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_creds.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_CREDS}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_creds_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_FILE_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_file_cipher.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_FILE_CIPHER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_file_cipher_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_KEYKNOX_STORAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_keyknox_storage.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_KEYKNOX_STORAGE}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_keyknox_storage_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_list.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_GROUP_EPOCH_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_group_epoch_list_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_user.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_user_defs.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_user_list.c>"
            "$<$<BOOL:${VSSQ_MESSENGER_USER_LIST}>:${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_user_list_defs.c>"
            "${CMAKE_CURRENT_LIST_DIR}/src/vssq_status.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vssq_messenger_cloud_fs_permission.c"
        )

target_include_directories(comm_kit
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/sdk/comm-kit/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/sdk/comm-kit>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/sdk/comm-kit/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/src>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        )
