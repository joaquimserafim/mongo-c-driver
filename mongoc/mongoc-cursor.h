/*
 * Copyright 2013 10gen Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#if !defined (MONGOC_INSIDE) && !defined (MONGOC_COMPILATION)
#error "Only <mongoc.h> can be included directly."
#endif


#ifndef MONGOC_CURSOR_H
#define MONGOC_CURSOR_H


#include <bson.h>

#include "mongoc-host-list.h"


BSON_BEGIN_DECLS


typedef struct _mongoc_cursor_t mongoc_cursor_t;


mongoc_cursor_t *
mongoc_cursor_clone (const mongoc_cursor_t *cursor);


void
mongoc_cursor_destroy (mongoc_cursor_t *cursor);


bson_bool_t
mongoc_cursor_more (mongoc_cursor_t *cursor);


bson_bool_t
mongoc_cursor_next (mongoc_cursor_t  *cursor,
                    const bson_t    **bson);


bson_bool_t
mongoc_cursor_error (mongoc_cursor_t *cursor,
                     bson_error_t    *error);


void
mongoc_cursor_get_host (mongoc_cursor_t    *cursor,
                        mongoc_host_list_t *host);


BSON_END_DECLS


#endif /* MONGOC_CURSOR_H */
