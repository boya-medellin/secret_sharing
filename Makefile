CC = gcc
CFLAGS = 
TARGET = secret_sharing

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) -o $(TARGET) $(TARGET).c $(TARGET).h $(CFLAGS)

clean: 
	$(RM) $(TARGET)

