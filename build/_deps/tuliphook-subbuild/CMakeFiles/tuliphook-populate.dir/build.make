# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild"

# Utility rule file for tuliphook-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/tuliphook-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tuliphook-populate.dir/progress.make

CMakeFiles/tuliphook-populate: CMakeFiles/tuliphook-populate-complete

CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-mkdir
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-build
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install
CMakeFiles/tuliphook-populate-complete: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Completed 'tuliphook-populate'"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E make_directory "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles/tuliphook-populate-complete"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-done"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update:
.PHONY : tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-build: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E echo_append
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-build"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure: tuliphook-populate-prefix/tmp/tuliphook-populate-cfgcmd.txt
tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E echo_append
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-gitinfo.txt
tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -P "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp/tuliphook-populate-gitclone.cmake"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E echo_append
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'tuliphook-populate'"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -Dcfgdir= -P "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp/tuliphook-populate-mkdirs.cmake"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-mkdir"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch-info.txt
tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'tuliphook-populate'"
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E echo_append
	/opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update:
.PHONY : tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-test: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E echo_append
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-build" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -E touch "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-test"

tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update: tuliphook-populate-prefix/tmp/tuliphook-populate-gitupdate.cmake
tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update-info.txt
tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'tuliphook-populate'"
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-src" && /opt/homebrew/Cellar/cmake/3.29.2/bin/cmake -Dcan_fetch=YES -P "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/tuliphook-populate-prefix/tmp/tuliphook-populate-gitupdate.cmake"

tuliphook-populate: CMakeFiles/tuliphook-populate
tuliphook-populate: CMakeFiles/tuliphook-populate-complete
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-build
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-configure
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-download
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-install
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-mkdir
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-patch
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-test
tuliphook-populate: tuliphook-populate-prefix/src/tuliphook-populate-stamp/tuliphook-populate-update
tuliphook-populate: CMakeFiles/tuliphook-populate.dir/build.make
.PHONY : tuliphook-populate

# Rule to build all files generated by this target.
CMakeFiles/tuliphook-populate.dir/build: tuliphook-populate
.PHONY : CMakeFiles/tuliphook-populate.dir/build

CMakeFiles/tuliphook-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tuliphook-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tuliphook-populate.dir/clean

CMakeFiles/tuliphook-populate.dir/depend:
	cd "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild" "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild" "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild" "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild" "/Users/maxpersonal/Downloads/Spinny Menu/build/_deps/tuliphook-subbuild/CMakeFiles/tuliphook-populate.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/tuliphook-populate.dir/depend

