GTEST_INCLUDE_DIR = /opt/googletest/1.8.0/include
GTEST_LIB_DIR     = /opt/googletest/1.8.0/lib

CXX         = g++
CFLAGS      = -std=c++11
CDEBUGFLAGS = -g -Wall
INCLUDES    = -I$(GTEST_INCLUDE_DIR)
LIBS        = -L$(GTEST_LIB_DIR) -lgtest -lm

CC_SWITCHES = $(CFLAGS) $(CDEBUGFLAGS) $(INCLUDES)


all: main tests

main: main.cc
	$(CXX) $(CC_SWITCHES) $< -o $@ $(LIBS)

tests: tests.cc
	$(CXX) $(CC_SWITCHES) $< -o $@ $(LIBS)

clean:
	rm -f main tests
