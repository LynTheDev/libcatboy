## libcatboy

libcatboy is a easy to use, wrapper library for the catboys.com API for c++!

The library uses curlpp and nlohmann json for the API requests.

### API related:

[API website](https://catboys.com/)

[API endpoints](https://catboys.com/api)

# Getting the library:
```bash
git clone --recursive https://github.com/omoNattie/libcatboy
```

### Including the library using cmake:

```cmake
# CMakeLists.txt

add_subdirectory(your_third_party_dir/libcatboy)

add_executable(
    ...
)

target_link_libraries(${PROJECT_NAME}
    # your other libraries
    libcatboy
)
```

# A quick example:

```cpp
#include <catboys.hpp>

int main(int argc, char **argv) {
    catboys::image img = catboys::get_image();

    printf("%s\n%s", img.url, img.artist);

return 0;
}
```

See also: 

[The examples](./examples/)

[Docs](./docs.md)
