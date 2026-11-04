CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++20

BUILD_DIR = build

KALLOR = main.cpp temperatur.cpp geometri.cpp multiplikation.cpp \
primtal.cpp fizzbuzz.cpp kalkylator.cpp \
matlogg_lagg_till.cpp matlogg_ta_bort.cpp matlogg_skriv.cpp \
matlogg_statistik.cpp matlogg_kopiera.cpp matlogg_frigor.cpp \
sensor_lagg_till.cpp sensor_skriv.cpp sensor_medelvarde.cpp \
sensor_hitta.cpp sensor_spara.cpp sensor_lasa.cpp \
sensorobjekt_klass.cpp sensorobjekt_uppdatera.cpp \
sensorobjekt_nollstall.cpp sensorobjekt_grans.cpp \
sensorobjekt_bytnamn.cpp sensorobjekt_skriv.cpp sensorobjekt_jamfor.cpp

OBJEKT = $(KALLOR:%.cpp=$(BUILD_DIR)/%.o)

verktygslada: $(OBJEKT)
	$(CXX) $(CXXFLAGS) $(OBJEKT) -o verktygslada

$(BUILD_DIR)/%.o: %.cpp verktyg.h | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $@

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR) verktygslada verktygslada.exe