# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gohan/CLionProjects/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gohan/CLionProjects/project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project.dir/flags.make

CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o: project_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o -c /home/gohan/CLionProjects/project/cmake-build-debug/project_autogen/mocs_compilation.cpp

CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/cmake-build-debug/project_autogen/mocs_compilation.cpp > CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.i

CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/cmake-build-debug/project_autogen/mocs_compilation.cpp -o CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.s

CMakeFiles/project.dir/main.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/main.cpp.o -c /home/gohan/CLionProjects/project/main.cpp

CMakeFiles/project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/main.cpp > CMakeFiles/project.dir/main.cpp.i

CMakeFiles/project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/main.cpp -o CMakeFiles/project.dir/main.cpp.s

CMakeFiles/project.dir/MainWindow.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/MainWindow.cpp.o: ../MainWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project.dir/MainWindow.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/MainWindow.cpp.o -c /home/gohan/CLionProjects/project/MainWindow.cpp

CMakeFiles/project.dir/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/MainWindow.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/MainWindow.cpp > CMakeFiles/project.dir/MainWindow.cpp.i

CMakeFiles/project.dir/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/MainWindow.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/MainWindow.cpp -o CMakeFiles/project.dir/MainWindow.cpp.s

CMakeFiles/project.dir/SignupForm.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/SignupForm.cpp.o: ../SignupForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project.dir/SignupForm.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/SignupForm.cpp.o -c /home/gohan/CLionProjects/project/SignupForm.cpp

CMakeFiles/project.dir/SignupForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/SignupForm.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/SignupForm.cpp > CMakeFiles/project.dir/SignupForm.cpp.i

CMakeFiles/project.dir/SignupForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/SignupForm.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/SignupForm.cpp -o CMakeFiles/project.dir/SignupForm.cpp.s

CMakeFiles/project.dir/AdminPanelForm.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/AdminPanelForm.cpp.o: ../AdminPanelForm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project.dir/AdminPanelForm.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/AdminPanelForm.cpp.o -c /home/gohan/CLionProjects/project/AdminPanelForm.cpp

CMakeFiles/project.dir/AdminPanelForm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/AdminPanelForm.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/AdminPanelForm.cpp > CMakeFiles/project.dir/AdminPanelForm.cpp.i

CMakeFiles/project.dir/AdminPanelForm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/AdminPanelForm.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/AdminPanelForm.cpp -o CMakeFiles/project.dir/AdminPanelForm.cpp.s

CMakeFiles/project.dir/fileviewform.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/fileviewform.cpp.o: ../fileviewform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project.dir/fileviewform.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/fileviewform.cpp.o -c /home/gohan/CLionProjects/project/fileviewform.cpp

CMakeFiles/project.dir/fileviewform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/fileviewform.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/fileviewform.cpp > CMakeFiles/project.dir/fileviewform.cpp.i

CMakeFiles/project.dir/fileviewform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/fileviewform.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/fileviewform.cpp -o CMakeFiles/project.dir/fileviewform.cpp.s

CMakeFiles/project.dir/privilegechangeform.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/privilegechangeform.cpp.o: ../privilegechangeform.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project.dir/privilegechangeform.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/privilegechangeform.cpp.o -c /home/gohan/CLionProjects/project/privilegechangeform.cpp

CMakeFiles/project.dir/privilegechangeform.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/privilegechangeform.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/privilegechangeform.cpp > CMakeFiles/project.dir/privilegechangeform.cpp.i

CMakeFiles/project.dir/privilegechangeform.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/privilegechangeform.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/privilegechangeform.cpp -o CMakeFiles/project.dir/privilegechangeform.cpp.s

CMakeFiles/project.dir/Util.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/Util.cpp.o: ../Util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project.dir/Util.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/Util.cpp.o -c /home/gohan/CLionProjects/project/Util.cpp

CMakeFiles/project.dir/Util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/Util.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/Util.cpp > CMakeFiles/project.dir/Util.cpp.i

CMakeFiles/project.dir/Util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/Util.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/Util.cpp -o CMakeFiles/project.dir/Util.cpp.s

CMakeFiles/project.dir/SHAUtil.cpp.o: CMakeFiles/project.dir/flags.make
CMakeFiles/project.dir/SHAUtil.cpp.o: ../SHAUtil.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project.dir/SHAUtil.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project.dir/SHAUtil.cpp.o -c /home/gohan/CLionProjects/project/SHAUtil.cpp

CMakeFiles/project.dir/SHAUtil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project.dir/SHAUtil.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gohan/CLionProjects/project/SHAUtil.cpp > CMakeFiles/project.dir/SHAUtil.cpp.i

CMakeFiles/project.dir/SHAUtil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project.dir/SHAUtil.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gohan/CLionProjects/project/SHAUtil.cpp -o CMakeFiles/project.dir/SHAUtil.cpp.s

# Object files for target project
project_OBJECTS = \
"CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/project.dir/main.cpp.o" \
"CMakeFiles/project.dir/MainWindow.cpp.o" \
"CMakeFiles/project.dir/SignupForm.cpp.o" \
"CMakeFiles/project.dir/AdminPanelForm.cpp.o" \
"CMakeFiles/project.dir/fileviewform.cpp.o" \
"CMakeFiles/project.dir/privilegechangeform.cpp.o" \
"CMakeFiles/project.dir/Util.cpp.o" \
"CMakeFiles/project.dir/SHAUtil.cpp.o"

# External object files for target project
project_EXTERNAL_OBJECTS =

project: CMakeFiles/project.dir/project_autogen/mocs_compilation.cpp.o
project: CMakeFiles/project.dir/main.cpp.o
project: CMakeFiles/project.dir/MainWindow.cpp.o
project: CMakeFiles/project.dir/SignupForm.cpp.o
project: CMakeFiles/project.dir/AdminPanelForm.cpp.o
project: CMakeFiles/project.dir/fileviewform.cpp.o
project: CMakeFiles/project.dir/privilegechangeform.cpp.o
project: CMakeFiles/project.dir/Util.cpp.o
project: CMakeFiles/project.dir/SHAUtil.cpp.o
project: CMakeFiles/project.dir/build.make
project: /usr/lib/libQt5Widgets.so.5.15.2
project: /usr/lib/libQt5Gui.so.5.15.2
project: /usr/lib/libQt5Core.so.5.15.2
project: CMakeFiles/project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project.dir/build: project
.PHONY : CMakeFiles/project.dir/build

CMakeFiles/project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project.dir/clean

CMakeFiles/project.dir/depend:
	cd /home/gohan/CLionProjects/project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gohan/CLionProjects/project /home/gohan/CLionProjects/project /home/gohan/CLionProjects/project/cmake-build-debug /home/gohan/CLionProjects/project/cmake-build-debug /home/gohan/CLionProjects/project/cmake-build-debug/CMakeFiles/project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project.dir/depend

