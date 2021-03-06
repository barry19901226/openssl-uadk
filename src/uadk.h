/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef UADK_H
#define UADK_H
#include <openssl/engine.h>
#include <uadk/wd.h>

extern const char *engine_uadk_id;
extern int uadk_bind_cipher(ENGINE *e);
extern void uadk_destroy_cipher(void);
extern int uadk_bind_digest(ENGINE *e);
extern void uadk_destroy_digest(void);
extern void uadk_destroy_rsa(void);
extern void uadk_destroy_ecc(void);
extern int uadk_bind_rsa(ENGINE *e);
extern void uadk_destroy_dh(void);
extern int uadk_bind_dh(ENGINE *e);
extern int uadk_bind_ecc(ENGINE *e);
#endif
