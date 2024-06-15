hello there file!
y - Learn C

## Compile with gcc

Let's compile them to the `./bin` folder for now. 

`gcc <source_file>.c -o ./bin/<out_file>`

## Run

`./bin/<out_file>`

## Testing for Memory Leaks with Valgrind

1) Compile with `-g` flag

`gcc <source_file>.c -g -o ./bin/<out_file>`

2) Inspect result - you'll see a large number

`wc -c <out_file>`

3) Install Valgrind

`sudo apt install valgrind`

4) Use Valgrind

`valgrind --leak-check=full ./<out_file> -s`

## Linker Diagnostics

Get file info:

`file <out_file>`

Linker Diagnostics:

`ldd <out_file>`
