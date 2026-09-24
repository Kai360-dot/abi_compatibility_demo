# abi_compatibility_demo
A quick demo of the ABI compatibility issue in C++
To run execute the following commands in order:
g++ -shared -fPIC -Iv1 calc.cpp -o v1/libcalc.so
g++ -shared -fPIC -Iv2 calc.cpp -o v2/libcalc.so
g++ -Iv1 main.cpp -L v1 -lcalc -o main

LD_LIBRARY_PATH=v1 ./main      # calc(p, 10.0) = 21   (expected 21)
LD_LIBRARY_PATH=v2 ./main      # calc(p, 10.0) = 10   (expected 21)
