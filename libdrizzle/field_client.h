/*
 * Drizzle Client & Protocol Library
 *
 * Copyright (C) 2008 Eric Day (eday@oddments.org)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *
 *     * The names of its contributors may not be used to endorse or
 * promote products derived from this software without specific prior
 * written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @file
 * @brief Field Declarations for Clients
 */

#ifndef __DRIZZLE_FIELD_CLIENT_H
#define __DRIZZLE_FIELD_CLIENT_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup drizzle_field_client Field Declarations for Clients
 * @ingroup drizzle_client_interface
 *
 * These functions allow you to access fields in a result set if the result is
 * unbuffered. If the result is buffered, you can access the fields through the
 * row functions.
 * @{
 */

/**
 * Read field for unbuffered result, possibly in parts. This is especially
 * useful for blob streaming, since the client does not need to buffer the
 * entire blob.
 */
DRIZZLE_API
drizzle_field_t drizzle_field_read(drizzle_result_st *result, size_t *offset,
                                   size_t *size, size_t *total,
                                   drizzle_return_t *ret_ptr);

/**
 * Buffer one field.
 */
DRIZZLE_API
drizzle_field_t drizzle_field_buffer(drizzle_result_st *result, size_t *total,
                                     drizzle_return_t *ret_ptr);

/**
 * Free a buffered field.
 */
DRIZZLE_API
void drizzle_field_free(drizzle_field_t field);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* __DRIZZLE_FIELD_CLIENT_H */
