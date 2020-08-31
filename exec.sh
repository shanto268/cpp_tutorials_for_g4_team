# Usage: source exec.sh name_of_cc_file_without_extension
#!/usr/bin/env sh

g++ -o $1 $1.cc
./$1
