# Erkennung des Betriebssystems
ifeq ($(OS),Windows_NT)
    # Windows-Einstellungen
    RM = del /Q
    TARGET = farbpreis.exe
    EXT = .exe
    # Windows versteht oft den Vorwärts-Slash /, aber zur Sicherheit:
    FIX_PATH = $(subst /,\,$1)
else
    # Linux/WSL-Einstellungen
    RM = rm -f
    TARGET = farbpreis
    EXT =
    FIX_PATH = $1
endif

CC = gcc
CFLAGS = -Wall -I../mod
MOD_DIR = ../mod
OBJ = farbpreis.o $(MOD_DIR)/upper.o $(MOD_DIR)/tools.o

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

farbpreis.o: farbpreis.c
	$(CC) $(CFLAGS) -c farbpreis.c

$(MOD_DIR)/upper.o: $(MOD_DIR)/upper.c
	$(CC) $(CFLAGS) -c $(MOD_DIR)/upper.c -o $(MOD_DIR)/upper.o

# NEU: Regel für tools.o hinzugefügt
$(MOD_DIR)/tools.o: $(MOD_DIR)/tools.c
	$(CC) $(CFLAGS) -c $(MOD_DIR)/tools.c -o $(MOD_DIR)/tools.o

clean:
	$(RM) $(TARGET) *.o $(call FIX_PATH,$(MOD_DIR)/*.o)

.PHONY: clean