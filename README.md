# opencv-android-prefab

This compile only necessary modules of OpenCV in C++ and Android NDK then use Prefab for easy to use

## Prepare your release by assigning a version (remove the -SNAPSHOT suffix)

```shell
cd [module]
./gradlew publish --no-daemon --no-parallel
./gradlew closeAndReleaseRepository
```

### OpenCV Image

Include opencv_core, opencv_imgproc and opencv_imgcodecs

```groovy
implementation 'org.demen.android.opencv:opencv-img:1.0.2'
```
