#   @license
#   -------------------------------------------------------------------------
#   Copyright (C) 2015-2019 Virgil Security, Inc.
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

if(NOT TARGET common)
    message(FATAL_ERROR "Expected target 'common' to be defined first.")
endif()

include(CheckIncludeFiles)
check_include_files(assert.h VSC_HAVE_ASSERT_H)
check_include_files(stdatomic.h VSC_HAVE_STDATOMIC_H)

configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_platform.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/common/vsc_platform.h"
        )

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_assert.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_library.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_memory.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/common/vsc_platform.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_buffer.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_data.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

set_property(
    SOURCE "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_common_public.h"
    PROPERTY MACOSX_PACKAGE_LOCATION "Headers"
)

target_sources(common
    PRIVATE
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_assert.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_library.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_memory.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/private/vsc_atomic.h"
            "${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/common/vsc_platform.h"
            "$<$<BOOL:${VSC_BUFFER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_buffer.h>"
            "$<$<BOOL:${VSC_BUFFER}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/private/vsc_buffer_defs.h>"
            "$<$<BOOL:${VSC_DATA}>:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_data.h>"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/vsc_common_public.h"
            "${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/private/vsc_common_private.h"

            "${CMAKE_CURRENT_LIST_DIR}/src/vsc_assert.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vsc_library.c"
            "${CMAKE_CURRENT_LIST_DIR}/src/vsc_memory.c"
            "$<$<BOOL:${VSC_BUFFER}>:${CMAKE_CURRENT_LIST_DIR}/src/vsc_buffer.c>"
            "$<$<BOOL:${VSC_BUFFER}>:${CMAKE_CURRENT_LIST_DIR}/src/vsc_buffer_defs.c>"
            "$<$<BOOL:${VSC_DATA}>:${CMAKE_CURRENT_LIST_DIR}/src/vsc_data.c>"
        )

target_include_directories(common
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/virgil/crypto/common/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/common>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include/virgil/crypto/common/private>
            $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/src>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        )
