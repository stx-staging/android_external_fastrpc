/**
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *      disclaimer in the documentation and/or other materials provided
 *      with the distribution.
 *    * Neither the name of The Linux Foundation nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _APPS_MEM_H
#define _APPS_MEM_H
#include "AEEStdDef.h"
#ifndef __QAIC_HEADER
#define __QAIC_HEADER(ff) ff
#endif //__QAIC_HEADER

#ifndef __QAIC_HEADER_EXPORT
#define __QAIC_HEADER_EXPORT
#endif // __QAIC_HEADER_EXPORT

#ifndef __QAIC_HEADER_ATTRIBUTE
#define __QAIC_HEADER_ATTRIBUTE
#endif // __QAIC_HEADER_ATTRIBUTE

#ifndef __QAIC_IMPL
#define __QAIC_IMPL(ff) ff
#endif //__QAIC_IMPL

#ifndef __QAIC_IMPL_EXPORT
#define __QAIC_IMPL_EXPORT
#endif // __QAIC_IMPL_EXPORT

#ifndef __QAIC_IMPL_ATTRIBUTE
#define __QAIC_IMPL_ATTRIBUTE
#endif // __QAIC_IMPL_ATTRIBUTE
#ifdef __cplusplus
extern "C" {
#endif
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_request_map)(int heapid, uint32 ion_flags, uint32 rflags, uint32 vin, int32 len, uint32* vapps, uint32* vadsp) __QAIC_HEADER_ATTRIBUTE;
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_request_unmap)(uint32 vadsp, int32 len) __QAIC_HEADER_ATTRIBUTE;
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_request_map64)(int heapid, uint32 ion_flags, uint32 rflags, uint64 vin, int64 len, uint64* vapps, uint64* vadsp) __QAIC_HEADER_ATTRIBUTE;
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_request_unmap64)(uint64 vadsp, int64 len) __QAIC_HEADER_ATTRIBUTE;
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_share_map)(int fd, int size, uint64* vapps, uint64* vadsp) __QAIC_HEADER_ATTRIBUTE;
__QAIC_HEADER_EXPORT int __QAIC_HEADER(apps_mem_share_unmap)(uint64 vadsp, int size) __QAIC_HEADER_ATTRIBUTE;
#ifdef __cplusplus
}
#endif
#endif //_APPS_MEM_H
