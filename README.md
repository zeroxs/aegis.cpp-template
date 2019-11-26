Aegis.cpp Windows Visual Studio 2019 Template Project

Please use vcpkg for the easiest means to make this work. Vcpkg integrate will automatically copy over necessary
dlls and link libs for openssl and zlib for you.

`vcpkg install openssl:x64-windows`
`vcpkg install zlib:x64-windows`
`vcpkg integrate install`