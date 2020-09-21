# Modern C++

This is an(other) effort to document all the learnings from the C++ course provided by University of Bonn.
There is no order to which I am doing this. I started with the 5th lecture, but will eventually complete all of them.

I use Visual Studio Code and feel it is great for beginners such as myself. In the first few lectures Prof Igor shows c++ command to build and execute files. The basic command he uses is  
```c++ -std=c++11 -Wall -g main.cpp -o main```  
That same command can be run with the default build task with the [tasks.json](./.vscode/tasks.json) file.
The *Run Build Task* command in VS Code will run the contents of [tasks.json](./.vscode/tasks.json) and output the binary in the [bin](./bin/) folder. If the folder is not already present, it DOES NOT create one for you, and will throw an error. Thus, the ```bin``` folder is here only as a place holder. The  [launch.json](./.vscode/launch.json) file, for debugging, also looks for the binary file in ```bin```.

