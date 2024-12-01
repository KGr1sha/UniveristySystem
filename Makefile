objects = user.o\
		  student.o\
		  teacher.o\
		  course.o\
		  schedule.o\
		  journal.o

main: $(objects) str/main.cpp | bin
	g++ $(objects) src/main.cpp -o bin/program
	make clean
	./bin/program

tests: $(objects) src/tests.cpp | bin
	g++ $(objects) src/tests.cpp -o bin/tests
	make clean
	./bin/tests

bin:
	mkdir bin

user.o: src/user.h src/user.cpp
	g++ -c src/user.cpp 

student.o: src/student.h src/student.cpp
	g++ -c src/student.cpp 

teacher.o: src/teacher.h src/teacher.cpp
	g++ -c src/teacher.cpp 

course.o: src/course.h src/course.cpp
	g++ -c src/course.cpp 

schedule.o: src/schedule.h src/schedule.cpp
	g++ -c src/schedule.cpp

journal.o: src/journal.h src/journal.cpp
	g++ -c src/journal.cpp

clean:
	rm $(objects)
