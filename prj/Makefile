CC=gcc
CCPP=g++

RES_DIR= Resources

TARGETS=matrix16x24 \
main.opp \
$(RES_DIR)/BoneHeader/BoneHeader.opp \
$(RES_DIR)/MMAP/mmapgpio.opp \
$(RES_DIR)/adafruit/HT1632/HT1632.opp \
$(RES_DIR)/adafruit/HT1632/glcdfont.o

all: $(TARGETS)

clean:
	rm -f $(TARGETS)

matrix16x24: main.opp $(RES_DIR)/MMAP/mmapgpio.opp $(RES_DIR)/adafruit/HT1632/HT1632.opp $(RES_DIR)/adafruit/HT1632/glcdfont.o $(RES_DIR)/BoneHeader/BoneHeader.opp
	$(CCPP) $^ -o $@

main.opp: $(RES_DIR)/BoneHeader/BoneHeader.opp $(RES_DIR)/adafruit/HT1632/HT1632.opp
$(RES_DIR)/HT1632.opp: $(RES_DIR)/MMAP/mmapgpio.opp $(RES_DIR)/adafruit/HT1632/glcdfont.o $(RES_DIR)/BoneHeader/BoneHeader.opp

%.o: %.c
	$(CC) -c $< -o $@

%.opp: %.cpp
	$(CCPP) -c $< -o $@


