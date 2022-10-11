cd "$1" && 
g++ -S -o "$1".s "$1".cpp && # Generate Assembly Code from C++. 
g++ -o "$1" "$1".cpp  && # Compile C++ Code to the binary file. 
./"$1" && # Run the binary file. 
cd ..
