/*
 * Copyright © 2011 Intel Corporation
 * Copyright © 2020 Erik De Rijcke
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef WESTFIELD_NATIVE_WESTFIELD_XWAYLAND_H
#define WESTFIELD_NATIVE_WESTFIELD_XWAYLAND_H

struct westfield_xwayland;
struct westfield_xserver;
struct wl_dislay;
struct wl_client;

typedef void (*westfield_xserver_starting_func_t)(void* user_data, int wm_fd, struct wl_client* client);

typedef void (*westfield_xserver_destroyed_func_t)(void *user_data);

void
teardown_xwayland(struct westfield_xwayland *);

struct westfield_xwayland *
setup_xwayland(struct wl_dislay *wl_display,
               void *user_data,
               westfield_xserver_starting_func_t starting_func,
               westfield_xserver_destroyed_func_t destroyed_func);

void
init_westfield_xwayland(void);

int
xwayland_get_display(struct westfield_xwayland *westfield_xwayland);


#endif //WESTFIELD_NATIVE_WESTFIELD_XWAYLAND_H
