objects = user.o\
		  student.o\
		  teacher.o\
		  course.o\
		  schedule.o\
		  journal.o\
		  university_system.o

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

user.o: src/user.cpp
	g++ -c src/user.cpp 

student.o: src/student.cpp
	g++ -c src/student.cpp 

teacher.o: src/teacher.cpp
	g++ -c src/teacher.cpp 

course.o: src/course.cpp
	g++ -c src/course.cpp 

schedule.o: src/schedule.cpp
	g++ -c src/schedule.cpp

journal.o: src/journal.cpp
	g++ -c src/journal.cpp

university_system.o: src/university_system.cpp
	g++ -c src/university_system.cpp

clean:
	rm $(objects)
