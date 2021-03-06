# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\cyril\Desktop\AP4A TP\Project CMake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\cyril\Desktop\AP4A TP\Project CMake"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\cyril\Desktop\AP4A TP\Project CMake\CMakeFiles" "C:\Users\cyril\Desktop\AP4A TP\Project CMake\\CMakeFiles\progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\cyril\Desktop\AP4A TP\Project CMake\CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named AP4A

# Build rule for target.
AP4A: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 AP4A
.PHONY : AP4A

# fast build rule for target.
AP4A/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/build
.PHONY : AP4A/fast

src/AP4A.obj: src/AP4A.cpp.obj
.PHONY : src/AP4A.obj

# target to build an object file
src/AP4A.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/AP4A.cpp.obj
.PHONY : src/AP4A.cpp.obj

src/AP4A.i: src/AP4A.cpp.i
.PHONY : src/AP4A.i

# target to preprocess a source file
src/AP4A.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/AP4A.cpp.i
.PHONY : src/AP4A.cpp.i

src/AP4A.s: src/AP4A.cpp.s
.PHONY : src/AP4A.s

# target to generate assembly for a file
src/AP4A.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/AP4A.cpp.s
.PHONY : src/AP4A.cpp.s

src/Humidity.obj: src/Humidity.cpp.obj
.PHONY : src/Humidity.obj

# target to build an object file
src/Humidity.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Humidity.cpp.obj
.PHONY : src/Humidity.cpp.obj

src/Humidity.i: src/Humidity.cpp.i
.PHONY : src/Humidity.i

# target to preprocess a source file
src/Humidity.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Humidity.cpp.i
.PHONY : src/Humidity.cpp.i

src/Humidity.s: src/Humidity.cpp.s
.PHONY : src/Humidity.s

# target to generate assembly for a file
src/Humidity.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Humidity.cpp.s
.PHONY : src/Humidity.cpp.s

src/Interface.obj: src/Interface.cpp.obj
.PHONY : src/Interface.obj

# target to build an object file
src/Interface.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Interface.cpp.obj
.PHONY : src/Interface.cpp.obj

src/Interface.i: src/Interface.cpp.i
.PHONY : src/Interface.i

# target to preprocess a source file
src/Interface.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Interface.cpp.i
.PHONY : src/Interface.cpp.i

src/Interface.s: src/Interface.cpp.s
.PHONY : src/Interface.s

# target to generate assembly for a file
src/Interface.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Interface.cpp.s
.PHONY : src/Interface.cpp.s

src/Light.obj: src/Light.cpp.obj
.PHONY : src/Light.obj

# target to build an object file
src/Light.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Light.cpp.obj
.PHONY : src/Light.cpp.obj

src/Light.i: src/Light.cpp.i
.PHONY : src/Light.i

# target to preprocess a source file
src/Light.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Light.cpp.i
.PHONY : src/Light.cpp.i

src/Light.s: src/Light.cpp.s
.PHONY : src/Light.s

# target to generate assembly for a file
src/Light.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Light.cpp.s
.PHONY : src/Light.cpp.s

src/Scheduler.obj: src/Scheduler.cpp.obj
.PHONY : src/Scheduler.obj

# target to build an object file
src/Scheduler.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Scheduler.cpp.obj
.PHONY : src/Scheduler.cpp.obj

src/Scheduler.i: src/Scheduler.cpp.i
.PHONY : src/Scheduler.i

# target to preprocess a source file
src/Scheduler.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Scheduler.cpp.i
.PHONY : src/Scheduler.cpp.i

src/Scheduler.s: src/Scheduler.cpp.s
.PHONY : src/Scheduler.s

# target to generate assembly for a file
src/Scheduler.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Scheduler.cpp.s
.PHONY : src/Scheduler.cpp.s

src/Sensor.obj: src/Sensor.cpp.obj
.PHONY : src/Sensor.obj

# target to build an object file
src/Sensor.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sensor.cpp.obj
.PHONY : src/Sensor.cpp.obj

src/Sensor.i: src/Sensor.cpp.i
.PHONY : src/Sensor.i

# target to preprocess a source file
src/Sensor.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sensor.cpp.i
.PHONY : src/Sensor.cpp.i

src/Sensor.s: src/Sensor.cpp.s
.PHONY : src/Sensor.s

# target to generate assembly for a file
src/Sensor.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sensor.cpp.s
.PHONY : src/Sensor.cpp.s

src/Server.obj: src/Server.cpp.obj
.PHONY : src/Server.obj

# target to build an object file
src/Server.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Server.cpp.obj
.PHONY : src/Server.cpp.obj

src/Server.i: src/Server.cpp.i
.PHONY : src/Server.i

# target to preprocess a source file
src/Server.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Server.cpp.i
.PHONY : src/Server.cpp.i

src/Server.s: src/Server.cpp.s
.PHONY : src/Server.s

# target to generate assembly for a file
src/Server.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Server.cpp.s
.PHONY : src/Server.cpp.s

src/Sound.obj: src/Sound.cpp.obj
.PHONY : src/Sound.obj

# target to build an object file
src/Sound.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sound.cpp.obj
.PHONY : src/Sound.cpp.obj

src/Sound.i: src/Sound.cpp.i
.PHONY : src/Sound.i

# target to preprocess a source file
src/Sound.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sound.cpp.i
.PHONY : src/Sound.cpp.i

src/Sound.s: src/Sound.cpp.s
.PHONY : src/Sound.s

# target to generate assembly for a file
src/Sound.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Sound.cpp.s
.PHONY : src/Sound.cpp.s

src/Temperature.obj: src/Temperature.cpp.obj
.PHONY : src/Temperature.obj

# target to build an object file
src/Temperature.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Temperature.cpp.obj
.PHONY : src/Temperature.cpp.obj

src/Temperature.i: src/Temperature.cpp.i
.PHONY : src/Temperature.i

# target to preprocess a source file
src/Temperature.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Temperature.cpp.i
.PHONY : src/Temperature.cpp.i

src/Temperature.s: src/Temperature.cpp.s
.PHONY : src/Temperature.s

# target to generate assembly for a file
src/Temperature.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\AP4A.dir\build.make CMakeFiles/AP4A.dir/src/Temperature.cpp.s
.PHONY : src/Temperature.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... AP4A
	@echo ... src/AP4A.obj
	@echo ... src/AP4A.i
	@echo ... src/AP4A.s
	@echo ... src/Humidity.obj
	@echo ... src/Humidity.i
	@echo ... src/Humidity.s
	@echo ... src/Interface.obj
	@echo ... src/Interface.i
	@echo ... src/Interface.s
	@echo ... src/Light.obj
	@echo ... src/Light.i
	@echo ... src/Light.s
	@echo ... src/Scheduler.obj
	@echo ... src/Scheduler.i
	@echo ... src/Scheduler.s
	@echo ... src/Sensor.obj
	@echo ... src/Sensor.i
	@echo ... src/Sensor.s
	@echo ... src/Server.obj
	@echo ... src/Server.i
	@echo ... src/Server.s
	@echo ... src/Sound.obj
	@echo ... src/Sound.i
	@echo ... src/Sound.s
	@echo ... src/Temperature.obj
	@echo ... src/Temperature.i
	@echo ... src/Temperature.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

