#ifndef TLPI_HDR_H
#define TLPI_HDR_H

#include <sys/types.h> /* Type definitions used by many programs */
#include <stdio.h>
#include <stdlib.h> /* Prototypes of commonly used library functions, plus
EXIT_SUCCESS and EXIT_FAILURE constants */
#include <unistd.h> /* Prototypes for many system calls */
#include <errno.h> /* Declares errno and defines error constants */
#include <string.h>

 /* Delcares our functions for handling numeric arguments,
(getInt(), getLong()) */
#include "get_num.h"

#include "error_functions.h" /* Delcares our error-handling functions */

typedef enum { FALSE, TRUE } Boolean;

#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))

#endif
