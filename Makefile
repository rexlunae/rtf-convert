CXX = g++
INCLUDES = 
#CXXDEBUGFLAGS = -g
CXXFLAGS = -Werror $(INCLUDES) $(CXXDEBUGFLAGS)

LDOPTIONS = $(LDFLAGS)

LDFLAGS = -L.

IDE_BLIND_LDOPTIONS = -L./ -L$(PROJECT_DIR)

rtf-converter ::	bodydestination.o\
	charoutput.o\
	charsource.o\
	destination.o\
	filecharsource.o\
	graphicstate.o\
	ignoredestination.o\
	infodestination.o\
	linktracker.o\
	rtfparser.o\
	rtftohtml.o\
	stylemap.o\
	stylesheetdestination.o\
	tag.o\
	token.o\
	tokeniser.o
	$(CXX) -o $@ $^ $(LDOPTIONS) $(LOCAL_LIBRARIES)

# %ObjectFilesLinking
bodydestination.o : bodydestination.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


charoutput.o : charoutput.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


charsource.o : charsource.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


destination.o : destination.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


filecharsource.o : filecharsource.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

graphicstate.o : graphicstate.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


ignoredestination.o : ignoredestination.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


linktracker.o: linktracker.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


infodestination.o : infodestination.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


rtfparser.o : rtfparser.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


rtftohtml.o : rtftohtml.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


stylemap.o : stylemap.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


stylesheetdestination.o : stylesheetdestination.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


tag.o : tag.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


token.o : token.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)


tokeniser.o : tokeniser.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f *.o rtf-converter

# DO NOT DELETE

