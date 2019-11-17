# -*- MakeFile -*-
# made by simon pikalov 


#variabeles 
CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_ONE=power.o
OBJECTS_LIB_TWO=basicMath.o
FLAGS= -Wall -g


#mak all the programs
all: mymaths mymathd mains maind

# static library
mymaths: $(OBJECTS_LIB_ONE) $(OBJECTS_LIB_TWO)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB_ONE) $(OBJECTS_LIB_TWO)

# dynamic library 
mymathd: $(OBJECTS_LIB_ONE) $(OBJECTS_LIB_TWO)
	$(CC) -fPIC -shared -o libmyMath.so $(OBJECTS_LIB_ONE) $(OBJECTS_LIB_TWO)

#main linked to static lib
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

#main linked to dynamic lib 
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) libmyMath.so

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -fPIC -c power.c

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so mains maind

