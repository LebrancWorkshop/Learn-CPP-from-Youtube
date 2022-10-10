cd "$1" && 
g++ -o "$1" "$1".cpp  && # Compile C++ Code to the binary file. 
./"$1" && # Run the binary file. 
cd ..
