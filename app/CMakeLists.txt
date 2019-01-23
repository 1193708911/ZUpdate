cmake_minimum_required(VERSION 3.4.1)
add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/bzip2/blocksort.c
             src/main/cpp/bzip2/bzip2.c
             src/main/cpp/bzip2/bzip2recover.c
             src/main/cpp/bzip2/bzlib.c
             src/main/cpp/bzip2/compress.c
             src/main/cpp/bzip2/crctable.c
             src/main/cpp/bzip2/decompress.c
             src/main/cpp/bzip2/dlltest.c
             src/main/cpp/bzip2/huffman.c
             src/main/cpp/bzip2/mk251.c
             src/main/cpp/bzip2/randtable.c
             src/main/cpp/bzip2/spewG.c
             src/main/cpp/bzip2/unzcrash.c
             src/main/cpp/bsdiff.c
             src/main/cpp/bspatch.c
             src/main/cpp/native-lib.c)


find_library( # Sets the name of the path variable.
              log-lib
              log )

target_link_libraries( # Specifies the target library.
                       native-lib
                       ${log-lib} )

