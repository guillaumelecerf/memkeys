#ifndef _COMMON_H
#define _COMMON_H

#ifdef HAVE_CONFIG_H
#include "mconfig.h"
#endif

#ifdef DEBUGGING
  #if DEBUGGING
    #define _DEBUG 1
  #endif
#endif

#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

#include "config.h"
#include "exception.h"
#include "logging/logger.h"
#include "options.h"

#endif
