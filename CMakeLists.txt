# Minimum version of CMake required
cmake_minimum_required(VERSION 3.14)

# Project name and version
project(Payrolls VERSION 0.1 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

set(SQLITECPP_RUN_CPPLINT OFF CACHE BOOL "" FORCE)
set(SQLITECPP_RUN_CPPCHECK OFF CACHE BOOL "" FORCE)
set(SQLITECPP_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SQLITECPP_BUILD_TESTS OFF CACHE BOOL "" FORCE)

FetchContent_Declare(
    SQLiteCpp
    GIT_REPOSITORY https://github.com/SRombauts/SQLiteCpp.git
    GIT_TAG        3.3.2
)
FetchContent_MakeAvailable(SQLiteCpp)

find_package(Curses REQUIRED)
find_library(PANEL_LIBRARY NAMES panel)
find_library(MENU_LIBRARY NAMES menu)

# Add an executable
add_executable(csi_payrolls
  src/main.cpp
  src/tax/CTTax.cpp
  src/tax/FedTax.cpp
  src/tax/NJTax.cpp
  src/tax/NYTax.cpp
  src/ui/App.cpp
  src/ui/View.cpp
  src/ui/Section.cpp
  src/ui/EmployeeView.cpp
  src/ui/EmployeeBenefitSection.cpp
  src/ui/MainMenuView.cpp
)

target_include_directories(csi_payrolls PRIVATE include ${CURSES_INCLUDE_DIRS})
target_compile_options(csi_payrolls PRIVATE -Wall -Wextra -Wpedantic -Werror)
target_link_libraries(csi_payrolls PRIVATE ${CURSES_LIBRARIES} ${PANEL_LIBRARY} ${MENU_LIBRARY} SQLiteCpp)
target_compile_definitions(csi_payrolls PRIVATE $<$<CONFIG:Debug>:_DEBUG>)

