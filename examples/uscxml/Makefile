CONTIKI_PROJECT = Uscxml-contikiApp
all: $(CONTIKI_PROJECT)

#Made changes to various contki makefile with ifdef USCXML
USCXML = 1
#Added main contiki interface sourcefile here rest all uscxml related sourcefile/lib are added in Makefile.project.
PROJECT_SOURCEFILES += Uscxml-c-scaffolding.cpp

#include configurations set by user.
include Makefile.user_config

#Following defines forces contiki build with IPV4. Not necessary though.
CONTIKI_WITH_IPV4=1
CONTIKI_WITH_IPV6=0
CONTIKI_WITH_RPL=0

#As util contains string.h which interferes with system string.h file. so it is in best necessary to avoid util directory from being added as include directory.
FILTERUTIL=1  

ifdef FILTERUTIL
EXCLUDE_FROM_INCLUDE = -I../../src/uscxml/util
endif

#----Custom invokers for uscxml-contiki APPlication--------------------------------------------------------------
#Defined in uscxml_invokers.define 
ifdef WITH_INVOKERS
include invokers/Makefile.uscxml_invokers
endif #WITH_INVOKERS

#----Custom invokers for uscxml-contiki APP End---------------------------------------------------------------

#Makefile.project contains uscxml sourcefiles/lib to be included.
include Makefile.project

ifdef VCINSTALLDIR
ifdef DEBUG
VCFLAGS += /D "WIN32" /D "_WINDOWS" /D "_DEBUG" /D "_SCL_SECURE_NO_WARNINGS" /D "_CRT_SECURE_NO_WARNINGS" /D "CURL_STATICLIB" /D "USCXML_STATIC"  /D "XERCES_STATIC_LIBRARY" /MDd ${addprefix -I,$(ADDITIONAL_INCLUDE_PROJECTDIRS)}

else

VCFLAGS += /D "WIN32" /D "_WINDOWS" /D "NDEBUG" /D "_SCL_SECURE_NO_WARNINGS" /D "_CRT_SECURE_NO_WARNINGS" /D "CURL_STATICLIB" /D "USCXML_STATIC"  /D "XERCES_STATIC_LIBRARY" /MD ${addprefix -I,$(ADDITIONAL_INCLUDE_PROJECTDIRS)}
endif #DEBUG endif

else

CFLAGS +=  -DUSCXML_STATIC -DCURL_STATICLIB -DXERCES_STATIC_LIBRARY -DNDEBUG ${addprefix -I,$(ADDITIONAL_INCLUDE_PROJECTDIRS)}

endif #VCINSTALLDIR endif

CONTIKI = ../..
include $(CONTIKI)/MakefileUSCXML.include
