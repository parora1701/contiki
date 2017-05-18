/**
 * Auto generated - edit config.h.in instead!
 *
 * This file is instantiated by cmake as config.h in the binary tree of
 * the out-of-source build. See cmake docs on CONFIGURE_FILE.
 *
 * WARNING: This file may never be included by public headers as we cannot
 * ship prebuilt packages otherwise!
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/** Platform macros */
/* #undef UNIX */
// suppress warnings with already define -DWIN32 macro
#ifndef WIN32
#define WIN32
#endif
/* #undef APPLE */
/* #undef CYGWIN */
/* #undef IOS */
/* #undef IOSSIM */

// suppress warnings with already define -DANDROID macro
#ifndef ANDROID
/* #undef ANDROID */
#endif

#define PATH_SEPERATOR '\\'

// CPP headers
/* #undef CXA_THROW_TYPEINFO_SIGNATURE */
#ifdef CXA_THROW_TYPEINFO_SIGNATURE
#define CXA_THROW_SIGNATURE void __cxa_throw (void *thrown_exception, std::type_info *pvtinfo, void (*dest)(void *))
#else
#define CXA_THROW_SIGNATURE void __cxa_throw (void *thrown_exception, void *pvtinfo, void (*dest)(void *))
#endif


/** version */
#define USCXML_VERSION_MAJOR "2"
/* #undef USCXML_VERSION_MINOR */
/* #undef USCXML_VERSION_PATCH */
#define USCXML_VERSION "2.0.0"

// #define XERCESC_NS xercesc_3_1

/** build type */
#define CMAKE_BUILD_TYPE "Debug"
#define CMAKE_BUILD_TYPE_DEBUG
/* #undef CMAKE_BUILD_TYPE_RELEASE */
#define CMAKE_COMPILER_STRING "MSVC 19.0.24215.1"

/** miscellaneous */
#define PROJECT_SOURCE_DIR "C:/Puneet/education/TU_Darmstadt/Theses/Attempt5/contiki/examples/uscxml/uscxml-master"
/* #undef DIST_PREPARE */
/* #undef BUILD_PROFILING */
/* #undef SWI_BINARY */

#ifndef FEATS_ON_CMD
/** whether we want some feature */
/* #undef WITH_CACHE_FILES */
#define WITH_INV_SCXML
/* #undef WITH_INV_DIRMON */

/* #undef WITH_IOPROC_BASICHTTP */
#define WITH_IOPROC_SCXML

/* #undef WITH_DM_ECMA_V8 */
/* #undef WITH_DM_ECMA_JSC */
/* #undef WITH_DM_LUA */
/* #undef WITH_DM_PYTHON */
/* #undef WITH_DM_C89 */
#define WITH_DM_PROMELA
#endif

/* #undef BUILD_AS_PLUGINS */

/** Optional libraries we found */
/* #undef UMUNDO_FOUND */
/* #undef OPENAL_FOUND */
/* #undef LIBSNDFILE_FOUND */
/* #undef AUDIOTOOLBOX_FOUND */
/* #undef MILES_FOUND */
/* #undef V8_FOUND */
/* #undef JSC_FOUND */
/* #undef HAS_JSC_JAVASCRIPTCORE_H */
/* #undef HAS_JSC_JAVASCRIPT_H */
/* #undef LIBICAL_FOUND */
/* #undef SWI_FOUND */
/* #undef FFMPEG_FOUND */
/* #undef LUA_FOUND */
/* #undef OPENSCENEGRAPH_FOUND */
/* #undef PROTOBUF_FOUND */
/* #undef CORELOCATION_FOUND */
/* #undef LIBPURPLE_FOUND */
/* #undef OPENSSL_FOUND */
/* #undef OPENSSL_HAS_ELIPTIC_CURVES */
/* #undef EVENT_SSL_FOUND */
/* #undef EXPECT_FOUND */
/* #undef TCL_FOUND */


/** Properties of the libraries we found */
#define CURL_HAS_SMTP

/** Header files we found */
/* #undef HAS_UNISTD_H */
/* #undef HAS_STRING_H */
/* #undef HAS_SIGNAL_H */
/* #undef HAS_EXECINFO_H */
/* #undef HAS_DLFCN_H */

/** Binaries we found */
/* #undef HAS_XDG_OPEN */

#endif
