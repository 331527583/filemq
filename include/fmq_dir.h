/*  =========================================================================
    fmq_dir - work with file-system directories

    -------------------------------------------------------------------------
    Copyright (c) 1991-2012 iMatix Corporation -- http://www.imatix.com
    Copyright other contributors as noted in the AUTHORS file.

    This file is part of FILEMQ, see http://filemq.org.

    This is free software; you can redistribute it and/or modify it under the
    terms of the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your option)
    any later version.

    This software is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABIL-
    ITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General
    Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
    =========================================================================
*/

#ifndef __FMQ_DIR_H_INCLUDED__
#define __FMQ_DIR_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  Opaque class structure
typedef struct _fmq_dir_t fmq_dir_t;

//  Create new directory item
fmq_dir_t *
    fmq_dir_new (const char *name, const char *parent);

//  Destroy a directory item
void
    fmq_dir_destroy (fmq_dir_t **self_p);

//  Print contents of directory
void
    fmq_dir_dump (fmq_dir_t *self, int indent);
    
//  Self test of this class
int
    fmq_dir_test (bool verbose);

#ifdef __cplusplus
}
#endif

#endif
