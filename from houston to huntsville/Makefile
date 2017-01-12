
all: .depend huntsville houston

DIR_PREFIX=../
include ../../MakeVars

INSTALL_DIR     = poa/hello-1
INSTALL_SRCS    = Makefile huntsville.cc houston.cc mars.idl
INSTALL_SCRIPTS = mars

houston: mars.h mars.o houston.o $(DEPS)
	$(LD) $(CXXFLAGS) $(LDFLAGS) mars.o houston.o $(LDLIBS) -o houston

huntsville: mars.h mars.o huntsville.o $(DEPS)
	$(LD) $(CXXFLAGS) $(LDFLAGS) mars.o huntsville.o $(LDLIBS) -o huntsville 


mars.h mars.cc : mars.idl $(IDLGEN)
	$(IDL) mars.idl

run:
	mars

clean:
	rm -f mars.cc mars.h mars.ref *.o core huntsville houston *~ .depend
