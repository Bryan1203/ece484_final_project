# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gem/BobaBee_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gem/BobaBee_ws/build

# Include any dependencies generated for this target.
include hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/depend.make

# Include the progress variables for this target.
include hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/progress.make

# Include the compile flags for this target's objects.
include hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/client.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/client.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/client.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/client.cpp > CMakeFiles/ouster_client.dir/src/client.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/client.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/client.cpp -o CMakeFiles/ouster_client.dir/src/client.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/types.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/types.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/types.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/types.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/types.cpp > CMakeFiles/ouster_client.dir/src/types.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/types.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/types.cpp -o CMakeFiles/ouster_client.dir/src/types.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/netcompat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/netcompat.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/netcompat.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/netcompat.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/netcompat.cpp > CMakeFiles/ouster_client.dir/src/netcompat.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/netcompat.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/netcompat.cpp -o CMakeFiles/ouster_client.dir/src/netcompat.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/lidar_scan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/lidar_scan.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/lidar_scan.cpp > CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/lidar_scan.cpp -o CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/image_processing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/image_processing.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/image_processing.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/image_processing.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/image_processing.cpp > CMakeFiles/ouster_client.dir/src/image_processing.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/image_processing.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/image_processing.cpp -o CMakeFiles/ouster_client.dir/src/image_processing.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/buffered_udp_source.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/buffered_udp_source.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/buffered_udp_source.cpp > CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/buffered_udp_source.cpp -o CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/parsing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/parsing.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/parsing.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/parsing.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/parsing.cpp > CMakeFiles/ouster_client.dir/src/parsing.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/parsing.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/parsing.cpp -o CMakeFiles/ouster_client.dir/src/parsing.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/sensor_http.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http.cpp > CMakeFiles/ouster_client.dir/src/sensor_http.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/sensor_http.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http.cpp -o CMakeFiles/ouster_client.dir/src/sensor_http.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http_imp.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http_imp.cpp > CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_http_imp.cpp -o CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_tcp_imp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_tcp_imp.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_tcp_imp.cpp > CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/sensor_tcp_imp.cpp -o CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.s

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.o: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/flags.make
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.o: /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/logging.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.o"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ouster_client.dir/src/logging.cpp.o -c /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/logging.cpp

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ouster_client.dir/src/logging.cpp.i"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/logging.cpp > CMakeFiles/ouster_client.dir/src/logging.cpp.i

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ouster_client.dir/src/logging.cpp.s"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client/src/logging.cpp -o CMakeFiles/ouster_client.dir/src/logging.cpp.s

# Object files for target ouster_client
ouster_client_OBJECTS = \
"CMakeFiles/ouster_client.dir/src/client.cpp.o" \
"CMakeFiles/ouster_client.dir/src/types.cpp.o" \
"CMakeFiles/ouster_client.dir/src/netcompat.cpp.o" \
"CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o" \
"CMakeFiles/ouster_client.dir/src/image_processing.cpp.o" \
"CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o" \
"CMakeFiles/ouster_client.dir/src/parsing.cpp.o" \
"CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o" \
"CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o" \
"CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o" \
"CMakeFiles/ouster_client.dir/src/logging.cpp.o"

# External object files for target ouster_client
ouster_client_EXTERNAL_OBJECTS =

/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/client.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/types.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/netcompat.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/lidar_scan.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/image_processing.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/buffered_udp_source.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/parsing.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_http_imp.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/sensor_tcp_imp.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/src/logging.cpp.o
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/build.make
/home/gem/BobaBee_ws/devel/lib/libouster_client.a: hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gem/BobaBee_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX static library /home/gem/BobaBee_ws/devel/lib/libouster_client.a"
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && $(CMAKE_COMMAND) -P CMakeFiles/ouster_client.dir/cmake_clean_target.cmake
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ouster_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/build: /home/gem/BobaBee_ws/devel/lib/libouster_client.a

.PHONY : hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/build

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/clean:
	cd /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client && $(CMAKE_COMMAND) -P CMakeFiles/ouster_client.dir/cmake_clean.cmake
.PHONY : hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/clean

hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/depend:
	cd /home/gem/BobaBee_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gem/BobaBee_ws/src /home/gem/BobaBee_ws/src/hardware_drivers/ouster-ros/ouster-sdk/ouster_client /home/gem/BobaBee_ws/build /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client /home/gem/BobaBee_ws/build/hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hardware_drivers/ouster-ros/ouster_example/ouster_client/CMakeFiles/ouster_client.dir/depend

