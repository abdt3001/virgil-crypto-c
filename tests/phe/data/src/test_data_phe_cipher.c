//  Copyright (C) 2015-2021 Virgil Security, Inc.
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

#include "test_data_phe_cipher.h"

const byte test_phe_cipher_rnd_BYTES[] = {
        0x2b, 0x1a, 0x49, 0xe2, 0x6c, 0xcc, 0x33, 0xfe,
        0x5e, 0x7d, 0x0e, 0x57, 0x3b, 0xc4, 0x02, 0xf0,
        0x04, 0xa0, 0x1c, 0x60, 0x35, 0xaf, 0x42, 0x16,
        0xcb, 0xd0, 0x1f, 0x1a, 0x98, 0x24, 0x7a, 0xaa,
};

const byte test_phe_cipher_account_key_BYTES[] = {
        0x87, 0xeb, 0x2b, 0xc9, 0x09, 0xac, 0x86, 0x9a,
        0xdc, 0xb2, 0x17, 0x72, 0x2f, 0x3f, 0x56, 0xa6,
        0xf7, 0x0f, 0xb7, 0x47, 0x3b, 0x1b, 0x6b, 0x36,
        0xf0, 0xae, 0x0a, 0x14, 0x5b, 0x45, 0xae, 0xe2,
};

const byte test_phe_cipher_plain_text_BYTES[] = {
        0x05, 0xa1, 0x06, 0x74, 0xa5, 0xba, 0xd0, 0x38,
        0x50, 0x7b, 0x2d, 0x9f, 0x80, 0x06, 0x45, 0x4b,
        0x0f, 0xbe, 0xf0, 0xd4, 0x0f, 0x62, 0x1b, 0x3c,
        0x35, 0x16, 0xef, 0xdd, 0x70, 0xd1, 0xef, 0x1d,
        0x3a, 0x6b, 0x8d, 0x50, 0xbe, 0xdb, 0x25, 0x57,
        0x3c, 0x26, 0x86, 0x43, 0x86, 0xa1, 0x39, 0x69,
        0xf7, 0xe9, 0x40, 0x00, 0xf0, 0x02, 0xd0, 0x0f,
        0xae, 0x86, 0x84, 0x37, 0x77, 0x0d, 0x9a, 0xfa,
};

const byte test_phe_cipher_cipher_text_BYTES[] = {
        0x2b, 0x1a, 0x49, 0xe2, 0x6c, 0xcc, 0x33, 0xfe,
        0x5e, 0x7d, 0x0e, 0x57, 0x3b, 0xc4, 0x02, 0xf0,
        0x04, 0xa0, 0x1c, 0x60, 0x35, 0xaf, 0x42, 0x16,
        0xcb, 0xd0, 0x1f, 0x1a, 0x98, 0x24, 0x7a, 0xaa,
        0x61, 0x95, 0x05, 0xda, 0x9c, 0xbf, 0x32, 0x5b,
        0x79, 0x2a, 0x31, 0xce, 0x87, 0x71, 0x6e, 0x89,
        0xc0, 0x0c, 0xe9, 0x32, 0x14, 0xb1, 0x5c, 0x59,
        0x6b, 0x30, 0xe6, 0xe5, 0x1a, 0xed, 0x8a, 0x3c,
        0xdd, 0x83, 0x1e, 0xbf, 0x0e, 0xa7, 0x7f, 0x59,
        0x4d, 0xae, 0xed, 0x9c, 0xa0, 0xb8, 0xe6, 0x28,
        0x0c, 0x73, 0x60, 0xbc, 0x8c, 0x0f, 0xd7, 0xb9,
        0x2d, 0x09, 0x40, 0x0c, 0x8d, 0x63, 0x36, 0x19,
        0x32, 0x04, 0xac, 0xd4, 0x45, 0xa0, 0xa4, 0x5e,
        0xab, 0x08, 0x2c, 0xb1, 0xa7, 0x36, 0x04, 0xf4,
};

const vsc_data_t test_phe_cipher_rnd = {
        test_phe_cipher_rnd_BYTES, sizeof(test_phe_cipher_rnd_BYTES)
};

const vsc_data_t test_phe_cipher_account_key = {
        test_phe_cipher_account_key_BYTES, sizeof(test_phe_cipher_account_key_BYTES)
};

const vsc_data_t test_phe_cipher_plain_text = {
        test_phe_cipher_plain_text_BYTES, sizeof(test_phe_cipher_plain_text_BYTES)
};

const vsc_data_t test_phe_cipher_cipher_text = {
        test_phe_cipher_cipher_text_BYTES, sizeof(test_phe_cipher_cipher_text_BYTES)
};

const size_t test_phe_cipher_cipher_text_capacity = {
        sizeof(test_phe_cipher_plain_text_BYTES) + 64
};

