#pragma once

/*  values header
    Symbolic names for important constants, including machine
    dependencies. A port for System V compatible header.

    Port from the Borland Libray of Symbolic Names for C++
*/

#define BITSPERBYTE     8
#define MAXSHORT        0x7FFF
#define MAXINT          0x7FFF
#define MAXLONG         0x7FFFFFFFL
#define HIBITS          0x8000
#define HIBITI          0x8000
#define HIBITL          0x80000000

#define DMAXEXP         308
#define FMAXEXP         38
#define DMINEXP         -307
#define FMINEXP         -37

#define MAXDOUBLE       1.797693E+308
#define MAXFLOAT        3.37E+38
#define MINDOUBLE       2.225074E-308
#define MINFLOAT        8.43E-37

#define DSIGNIF         53
#define FSIGNIF         24

#define DMAXPOWTWO      0x3FF
#define FMAXPOWTWO      0x7F
#define _DEXPLEN        11
#define _FEXPLEN        8
#define _EXPBASE        2
#define _IEEE           1
#define _LENBASE        1
#define HIDDENBIT       1
#define LN_MAXDOUBLE    7.0978E+2
#define LN_MINDOUBLE    -7.0840E+2