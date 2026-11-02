CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++20

KALLOR = main.cpp temperatur.cpp geometri.cpp multiplikation.cpp \
primtal.cpp fizzbuzz.cpp kalkylator.cpp \
matlogg_lagg_till.cpp matlogg_ta_bort.cpp matlogg_skriv.cpp \
matlogg_statistik.cpp matlogg_kopiera.cpp matlogg_frigor.cpp \
sensor_lagg_till.cpp sensor_skriv.cpp sensor_medelvarde.cpp \
sensor_hitta.cpp sensor_spara.cpp sensor_lasa.cpp

OBJEKT = $(KALLOR:.cpp=.o)

verktygslada: $(OBJEKT)
	$(CXX) $(CXXFLAGS) $(OBJEKT) -o verktygslada

%.o: %.cpp verktyg.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJEKT) verktygslada verktygslada.exe