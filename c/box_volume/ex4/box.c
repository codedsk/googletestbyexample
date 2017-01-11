// check for positive length, width, height

long long box_volume( int length, int width, int height) {
    if ((length <= 0) || (width <= 0) || (height <= 0)) {
        return 0;
    }
    return (long long)length * width * height;
}
