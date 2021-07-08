TARGET = EulerCycle

default: $(TARGET)

program.o: $(TARGET).c
	gcc -c $(TARGET).c -o $(TARGET).o

$(TARGET): $(TARGET).o
	gcc $(TARGET).o -o $(TARGET)

clean:
	-rm -f $(TARGET).o
	-rm -f $(TARGET)