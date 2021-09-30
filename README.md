Library is discontinued. Due to Discord's lack of communication and out-of-touch attitude towards library developers, this library is no longer being maintained. Recommended alternative: https://github.com/brainboxdotcc/DPP - designed similarly to how aegis was and created by users of aegis and a far more complete library than aegis (or any other C++ library) ever was.



Aegis.cpp Windows Visual Studio 2019 Template Project

Please use vcpkg for the easiest means to make this work. Vcpkg integrate will automatically copy over necessary
dlls and link libs for openssl and zlib for you.

`vcpkg install openssl:x64-windows`
`vcpkg install zlib:x64-windows`
`vcpkg integrate install`
