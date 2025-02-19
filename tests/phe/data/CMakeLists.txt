#   Copyright (C) 2015-2021 Virgil Security, Inc.
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

cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(test_data_phe VERSION ${virgil_crypto_c_phe_tests_VERSION} LANGUAGES C)

add_library(test_data_phe "")
target_sources(test_data_phe
        PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/include/test_data_phe_hash.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/test_data_phe_server_client.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/test_data_phe_cipher.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/test_data_uokms_server_client.h"

        PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/src/test_data_phe_hash.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/test_data_phe_server_client.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/test_data_phe_cipher.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/test_data_uokms_server_client.c"
        )

target_include_directories(test_data_phe
        PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        )

target_link_libraries(test_data_phe vsc::common)
