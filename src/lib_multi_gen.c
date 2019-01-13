/***********************************************************************************
*   File Name: lib_multi_gen.c
*   Version 1.00
*
*   Description:
*
*   Note:
*
************************************************************************************
*   MIT License
*
*   Copyright (c) 2019 Frank Sodari
*
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*   of this software and associated documentation files (the "Software"), to deal
*   in the Software without restriction, including without limitation the rights
*   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*   copies of the Software, and to permit persons to whom the Software is
*   furnished to do so, subject to the following conditions:
*
*   The above copyright notice and this permission notice shall be included in all
*   copies or substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*   SOFTWARE.
***********************************************************************************/

#include "lib_gen.h"
#include "lib_multi_gen.h"
#include "lib_multi_h.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <limits.h>

static int create_project_dir(const char *cwd, const char *lib_name);
static int create_subdirs(const char *cwd, const char *lib_name);

int lib_multi_gen(char *lib_name)
{
    FILE *fp;
    int error = 0;

    char cwd[PATH_MAX];

    printf("Generating project for multi instance library titled \"%s\"\n", lib_name);
    getcwd(cwd, sizeof(cwd));

    error = create_project_dir(cwd, lib_name);

    if (0 == error)
    {

    }

    return error;
}

static int create_project_dir(const char *cwd, const char *lib_name)
{
    int error = 0;
    char pathname[PATH_MAX];

    // New directory path
    snprintf(pathname, PATH_MAX, "%s/%s", cwd, lib_name);

    error = mkdir(pathname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    // Successfully created directory. Can only create directory if it doesn't exist
    if (-1 != error)
    {
        error = create_subdirs(cwd, lib_name);
    }

    return error;
}

static int create_subdirs(const char *cwd, const char *lib_name)
{
    int error = 0;
    char pathname[PATH_MAX];

    // src directory path
    snprintf(pathname, PATH_MAX, "%s/%s/%s", cwd, lib_name, "src");
    error = mkdir(pathname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

    // Successfully created directory. Can only create directory if it doesn't exist
    if (-1 != error)
    {
        // tests directory path
        snprintf(pathname, PATH_MAX, "%s/%s/%s", cwd, lib_name, "tests");
        error = mkdir(pathname, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    }

    return error;
}
