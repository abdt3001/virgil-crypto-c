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


#include "test_data_ecies.h"

// ==========================================================================
//  "Virgil Security Library for C"
static const byte MESSAGE_BYTES[] = {
    0x56, 0x69, 0x72, 0x67, 0x69, 0x6c, 0x20, 0x53,
    0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x20,
    0x4c, 0x69, 0x62, 0x72, 0x61, 0x72, 0x79, 0x20,
    0x66, 0x6f, 0x72, 0x20, 0x43, 0x0a
};

const vsc_data_t test_data_ecies_MESSAGE = {
    MESSAGE_BYTES, sizeof(MESSAGE_BYTES)
};

// ==========================================================================
static const byte ED25519_ENCRYPTED_MESSAGE_BYTES[] = {
    0x30, 0x81, 0xCB, 0x02, 0x01, 0x00, 0x30, 0x2A,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x03,
    0x21, 0x00, 0xC8, 0x1A, 0x4F, 0x39, 0x32, 0x70,
    0xED, 0x19, 0x6F, 0xD0, 0xA1, 0x10, 0x9B, 0x2C,
    0xB7, 0xAB, 0x97, 0x0C, 0x1A, 0xC6, 0xC2, 0xE5,
    0xE4, 0x87, 0xA1, 0x90, 0x0B, 0x1B, 0xBD, 0xC2,
    0x6F, 0xC8, 0x30, 0x16, 0x06, 0x07, 0x28, 0x81,
    0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0B, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x02, 0x02, 0x30, 0x3F, 0x30, 0x0B, 0x06, 0x09,
    0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02,
    0x02, 0x04, 0x30, 0xB3, 0x9D, 0x8D, 0x20, 0x70,
    0xBA, 0x46, 0xAB, 0xD0, 0xE0, 0xC2, 0xA5, 0x04,
    0xAA, 0x65, 0xD5, 0xBF, 0x00, 0xCE, 0x9B, 0xFB,
    0x94, 0x35, 0xBB, 0xDF, 0xA2, 0x7E, 0x34, 0xE3,
    0x3E, 0x05, 0x4B, 0x8A, 0x7E, 0xE1, 0xD0, 0x6D,
    0x12, 0x81, 0x62, 0x2F, 0x52, 0x82, 0x34, 0x23,
    0xAA, 0xB1, 0xA0, 0x30, 0x41, 0x30, 0x1D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x01, 0x2A, 0x04, 0x10, 0x28, 0xC0, 0x5B, 0xFC,
    0xD6, 0xD5, 0xED, 0xE6, 0x30, 0x67, 0xCE, 0x31,
    0x8B, 0xD2, 0xB2, 0x5E, 0x04, 0x20, 0x4B, 0xE1,
    0x23, 0x44, 0x88, 0xCC, 0x25, 0x4A, 0x4D, 0xA7,
    0x68, 0x7B, 0xB0, 0x90, 0xCE, 0x0B, 0xF0, 0x45,
    0x74, 0x29, 0x64, 0x81, 0xBE, 0x07, 0x3A, 0x91,
    0x2A, 0x1F, 0xB9, 0x8B, 0x63, 0xCB
};

const vsc_data_t test_data_ecies_ED25519_ENCRYPTED_MESSAGE = {
    ED25519_ENCRYPTED_MESSAGE_BYTES, sizeof(ED25519_ENCRYPTED_MESSAGE_BYTES)
};

// ==========================================================================
static const byte ED25519_ENCRYPTED_MESSAGE_V2_COMPAT_BYTES[] = {
    0x30, 0x81, 0xCF, 0x02, 0x01, 0x00, 0x30, 0x2A,
    0x30, 0x05, 0x06, 0x03, 0x2B, 0x65, 0x70, 0x03,
    0x21, 0x00, 0xC8, 0x1A, 0x4F, 0x39, 0x32, 0x70,
    0xED, 0x19, 0x6F, 0xD0, 0xA1, 0x10, 0x9B, 0x2C,
    0xB7, 0xAB, 0x97, 0x0C, 0x1A, 0xC6, 0xC2, 0xE5,
    0xE4, 0x87, 0xA1, 0x90, 0x0B, 0x1B, 0xBD, 0xC2,
    0x6F, 0xC8, 0x30, 0x18, 0x06, 0x07, 0x28, 0x81,
    0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04,
    0x02, 0x02, 0x05, 0x00, 0x30, 0x41, 0x30, 0x0D,
    0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03,
    0x04, 0x02, 0x02, 0x05, 0x00, 0x04, 0x30, 0xB3,
    0x9D, 0x8D, 0x20, 0x70, 0xBA, 0x46, 0xAB, 0xD0,
    0xE0, 0xC2, 0xA5, 0x04, 0xAA, 0x65, 0xD5, 0xBF,
    0x00, 0xCE, 0x9B, 0xFB, 0x94, 0x35, 0xBB, 0xDF,
    0xA2, 0x7E, 0x34, 0xE3, 0x3E, 0x05, 0x4B, 0x8A,
    0x7E, 0xE1, 0xD0, 0x6D, 0x12, 0x81, 0x62, 0x2F,
    0x52, 0x82, 0x34, 0x23, 0xAA, 0xB1, 0xA0, 0x30,
    0x41, 0x30, 0x1D, 0x06, 0x09, 0x60, 0x86, 0x48,
    0x01, 0x65, 0x03, 0x04, 0x01, 0x2A, 0x04, 0x10,
    0x28, 0xC0, 0x5B, 0xFC, 0xD6, 0xD5, 0xED, 0xE6,
    0x30, 0x67, 0xCE, 0x31, 0x8B, 0xD2, 0xB2, 0x5E,
    0x04, 0x20, 0x4B, 0xE1, 0x23, 0x44, 0x88, 0xCC,
    0x25, 0x4A, 0x4D, 0xA7, 0x68, 0x7B, 0xB0, 0x90,
    0xCE, 0x0B, 0xF0, 0x45, 0x74, 0x29, 0x64, 0x81,
    0xBE, 0x07, 0x3A, 0x91, 0x2A, 0x1F, 0xB9, 0x8B,
    0x63, 0xCB
};

const vsc_data_t test_data_ecies_ED25519_ENCRYPTED_MESSAGE_V2_COMPAT = {
    ED25519_ENCRYPTED_MESSAGE_V2_COMPAT_BYTES, sizeof(ED25519_ENCRYPTED_MESSAGE_V2_COMPAT_BYTES)
};

// ==========================================================================
static const byte ED25519_RECEIVER_PUBLIC_KEY_BYTES[] = {
    0x30, 0x2a, 0x30, 0x05, 0x06, 0x03, 0x2b, 0x65,
    0x70, 0x03, 0x21, 0x00, 0x86, 0x61, 0x40, 0x74,
    0xb7, 0xa5, 0xd1, 0x13, 0x04, 0x48, 0xbe, 0x69,
    0xa4, 0xa2, 0x5c, 0xe5, 0x8d, 0xbf, 0x76, 0x0a,
    0x87, 0xbb, 0xf9, 0x2a, 0x03, 0xad, 0xd9, 0x73,
    0xf3, 0x8e, 0xce, 0x7c
};

const vsc_data_t test_data_ecies_ED25519_RECEIVER_PUBLIC_KEY = {
    ED25519_RECEIVER_PUBLIC_KEY_BYTES, sizeof(ED25519_RECEIVER_PUBLIC_KEY_BYTES)
};

// ==========================================================================
static const byte ED25519_RECEIVER_PRIVATE_KEY_BYTES[] = {
    0x30, 0x2e, 0x02, 0x01, 0x00, 0x30, 0x05, 0x06,
    0x03, 0x2b, 0x65, 0x70, 0x04, 0x22, 0x04, 0x20,
    0x10, 0xda, 0x87, 0x56, 0x6b, 0x44, 0x6e, 0xdb,
    0x74, 0xaf, 0xa6, 0xeb, 0x67, 0x54, 0x77, 0x43,
    0x67, 0x08, 0x1e, 0xfa, 0x5f, 0xcd, 0x39, 0xc1,
    0x9e, 0x64, 0xa3, 0x68, 0x30, 0x44, 0x5b, 0x1b,
};

const vsc_data_t test_data_ecies_ED25519_RECEIVER_PRIVATE_KEY = {
    ED25519_RECEIVER_PRIVATE_KEY_BYTES, sizeof(ED25519_RECEIVER_PRIVATE_KEY_BYTES)
};

// ==========================================================================
static const byte ED25519_EPHEMERAL_PRIVATE_KEY_BYTES[] = {
    0x30, 0x2e, 0x02, 0x01, 0x00, 0x30, 0x05, 0x06,
    0x03, 0x2b, 0x65, 0x70, 0x04, 0x22, 0x04, 0x20,
    0xC0, 0xBB, 0xC4, 0x7E, 0x9C, 0xE3, 0xAA, 0x01,
    0x14, 0x84, 0x48, 0xCA, 0xB0, 0x4B, 0xBE, 0xD6,
    0x25, 0xD7, 0x91, 0x2B, 0x3F, 0x67, 0x1E, 0x89,
    0x24, 0x26, 0x4C, 0x49, 0xCF, 0xD6, 0x7C, 0xAF,
};

const vsc_data_t test_data_ecies_ED25519_EPHEMERAL_PRIVATE_KEY = {
    ED25519_EPHEMERAL_PRIVATE_KEY_BYTES, sizeof(ED25519_EPHEMERAL_PRIVATE_KEY_BYTES)
};

// ==========================================================================
static const byte ED25519_AES256_CBC_IV_BYTES[] = {
    0x28, 0xC0, 0x5B, 0xFC, 0xD6, 0xD5, 0xED, 0xE6,
    0x30, 0x67, 0xCE, 0x31, 0x8B, 0xD2, 0xB2, 0x5E,
};

const vsc_data_t test_data_ecies_ED25519_AES256_CBC_IV = {
    ED25519_AES256_CBC_IV_BYTES, sizeof(ED25519_AES256_CBC_IV_BYTES)
};


// ==========================================================================
static byte SECP256R1_MESSAGE[] = {
    0xB2, 0x3C, 0x01, 0x77, 0xA6, 0x37, 0xA6, 0x30, 0x5A, 0x62, 0xCD, 0x22, 0x4B, 0x8D, 0xF2, 0xB0,
    0x93, 0x55, 0x4D, 0x77, 0xFB, 0x2F, 0x31, 0x85, 0xA6, 0x12, 0xE9, 0x78, 0xA7, 0xDF, 0xA9, 0xB9,
};

const vsc_data_t test_data_ecies_SECP256R1_MESSAGE = {
    SECP256R1_MESSAGE, sizeof(SECP256R1_MESSAGE)
};

// ==========================================================================
static byte SECP256R1_ENCRYPTED_MESSAGE[] = {
    0x30, 0x82, 0x01, 0x0E, 0x02, 0x01, 0x00, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A, 0x86, 0x48,
    0xCE, 0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x03, 0x01, 0x07, 0x03, 0x42,
    0x00, 0x04, 0xA1, 0xF9, 0x1E, 0x0D, 0xF0, 0xBD, 0xB9, 0x7D, 0xD9, 0x35, 0x25, 0xB4, 0x72, 0x9D,
    0x4F, 0x66, 0xC0, 0x3D, 0x28, 0x09, 0x17, 0x54, 0x3C, 0xA6, 0x39, 0x7D, 0xD8, 0xA6, 0x8A, 0x09,
    0x6E, 0x7E, 0xE7, 0xA2, 0x0D, 0xA4, 0x38, 0x07, 0xA3, 0xAF, 0xBB, 0x77, 0x39, 0x75, 0x47, 0xD8,
    0x62, 0x16, 0x20, 0x1D, 0xE2, 0xFE, 0x71, 0x63, 0x08, 0x29, 0xC5, 0x63, 0x73, 0x17, 0xF7, 0xB2,
    0xFC, 0xE0, 0x30, 0x18, 0x06, 0x07, 0x28, 0x81, 0x8C, 0x71, 0x02, 0x05, 0x02, 0x30, 0x0D, 0x06,
    0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x30, 0x41, 0x30, 0x0D,
    0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x02, 0x05, 0x00, 0x04, 0x30, 0x79,
    0x8C, 0xD9, 0x22, 0x3B, 0xD9, 0x90, 0xA6, 0x0E, 0x08, 0x01, 0xD1, 0xB0, 0x9B, 0x6F, 0xC8, 0x28,
    0xC8, 0x89, 0xEA, 0x2D, 0x50, 0x51, 0xC5, 0xE0, 0x21, 0xBA, 0x9F, 0x9A, 0xB4, 0xD7, 0xF6, 0x49,
    0xF6, 0xCD, 0x42, 0xBE, 0x1A, 0xBD, 0x1F, 0x96, 0x10, 0x30, 0x8A, 0xF7, 0xC4, 0xDE, 0x9F, 0x30,
    0x51, 0x30, 0x1D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x01, 0x2A, 0x04, 0x10,
    0xEE, 0x4C, 0x4B, 0x09, 0x2C, 0xDC, 0xA2, 0xDB, 0x69, 0x3E, 0x94, 0x92, 0x5F, 0xD9, 0x0A, 0xEF,
    0x04, 0x30, 0x36, 0x10, 0xA8, 0xBD, 0x9D, 0xA9, 0x07, 0x2A, 0x45, 0x24, 0x86, 0xDC, 0x32, 0xEB,
    0xC5, 0x7F, 0x2F, 0xF6, 0x7C, 0x1C, 0x35, 0xCD, 0x82, 0x93, 0xDD, 0xAD, 0x4A, 0x9E, 0x92, 0x76,
    0x7F, 0x16, 0xA0, 0x5B, 0xBD, 0x8D, 0xCB, 0x72, 0x34, 0xED, 0x51, 0x2E, 0x8F, 0x9F, 0xE2, 0x60,
    0x10, 0x32
};

const vsc_data_t test_data_ecies_SECP256R1_ENCRYPTED_MESSAGE = {
    SECP256R1_ENCRYPTED_MESSAGE, sizeof(SECP256R1_ENCRYPTED_MESSAGE)
};

// ==========================================================================
static byte SECP256R1_RECEIVER_PRIVATE_KEY[] = {
    0x30, 0x77, 0x02, 0x01, 0x01, 0x04, 0x20, 0xce, 0xdb, 0x35, 0x08, 0xff, 0x3b, 0xd3, 0x1e, 0x2a,
    0xd5, 0x75, 0x79, 0xf3, 0x5b, 0xdc, 0xb2, 0x67, 0x92, 0x07, 0x77, 0xaf, 0x28, 0xdf, 0x20, 0x04,
    0x48, 0xf6, 0x98, 0x91, 0xc5, 0xe2, 0x7d, 0xa0, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
    0x03, 0x01, 0x07, 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04, 0x2a, 0xcb, 0x1e, 0x25, 0xf7, 0x4d, 0x51,
    0x2c, 0x7a, 0x4b, 0x59, 0x87, 0x4b, 0x16, 0x6d, 0x05, 0xd2, 0x0e, 0x28, 0xe1, 0x38, 0x58, 0xf9,
    0xd9, 0xfd, 0xf2, 0xc4, 0x1b, 0xed, 0x9c, 0x86, 0x9a, 0x6c, 0x18, 0x8c, 0x6a, 0x38, 0x01, 0x15,
    0x87, 0xeb, 0xce, 0x06, 0xa9, 0x2e, 0x6e, 0x05, 0xc2, 0x21, 0x04, 0xcb, 0xbf, 0xa2, 0x24, 0x22,
    0x54, 0xae, 0x6a, 0x01, 0x88, 0x38, 0x0e, 0x63, 0x55
};

const vsc_data_t test_data_ecies_SECP256R1_RECEIVER_PRIVATE_KEY = {
    SECP256R1_RECEIVER_PRIVATE_KEY, sizeof(SECP256R1_RECEIVER_PRIVATE_KEY)
};
