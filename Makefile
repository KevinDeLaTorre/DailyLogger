EXNAME = logger.exe
AFILES = main.cpp diary.* database.* README.md Makefile

logger.exe : main.o diary.o database.o
	@echo -n Compiling executable \"$(EXNAME)\"...
	@g++ main.o diary.o database.o -o $(EXNAME)
	@echo done
main.o : main.cpp diary.h database.h 
	@echo -n Compiling main...
	@g++ -c main.cpp
	@echo done
diary.o : diary.cpp diary.h
	@echo -n Compiling diary...
	@g++ -c diary.cpp
	@echo done
database.o : database.cpp database.h
	@ echo -n Compiling database...
	@g++ -c database.cpp
	@echo done
add:
	@$(MAKE) clean
	@echo -n Adding files to git...
	@git add $(AFILES) 
	@echo done

clean:
	@echo -n Cleaning...
	@rm -rf *.o $(EXNAME)
	@echo done
