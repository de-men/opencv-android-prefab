# opencv-android-prefab

This compile only necessary modules of OpenCV in C++ and Android NDK then use Prefab for easy to 
use. With using this lib, we can reduce size by only using what necessary modules. We can deliver
our library that depends on opencv without missing libopencv_world.so error.

This library only use for Cpp native development, not include Java code.

## Prepare your release by assigning a version (remove the -SNAPSHOT suffix)

```shell
cd [module]
./gradlew publish --no-daemon --no-parallel
./gradlew closeAndReleaseRepository
```

### Using for Native Android module

In the app/build.gradle file

```groovy
android {
    buildFeatures {
        prefab true
    }
}

dependencies {
    implementation 'org.demen.android.opencv:opencv:1.0.1'
}
```

In the app/main/cpp/CMakeLists.txt

```cmake
find_package(opencv REQUIRED CONFIG)

target_link_libraries( # Specifies the target library.
        native-lib
        opencv::opencv_core
        opencv::opencv_imgproc  # Or other modules
        )
```

Use in cpp file
```objectivec
#include <opencv2/core.hpp>
const auto info = cv::getBuildInformation();
```