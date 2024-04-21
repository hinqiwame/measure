# Building `measure`
## Prerequisites
```
coreutils base-devel g++ git
```
Install them using your package manager (e.g. `pacman` for Arch Linux or `apt` for Debian).

## Automatically
- Obtain the source code:
  ```
  git clone https://github.com/hinqiwame/measure
  ```
- Enter `src` directory:
  ```
  cd src
  ```
- Setup and run the pre-built compiler:
  ```
  chmod +x compiler && ./compiler
  ```
Built `measure` binary now lays in `bin` directory.

- (OPTIONAL) test the binary:
  ```
  bin/measure --help
  ```

## Manually
- Obtain the source code:
  ```
  git clone https://github.com/hinqiwame/measure
  ```
- Enter `src` directory:
  ```
  cd src
  ```
- Compile `measure`:
  ```
  g++ -o measure measure.cpp
  ```
Built `measure` binary now lays in your current directory.

- (OPTIONAL) test the binary:
  ```
  ./measure --help
  ```

  
