int maxArea(int* height, int heightSize){
    int i = 0, j = heightSize - 1;
    int max = 0;
    int area;

    while (i < j) {
        if (height[i] < height[j])
            area = (j - i) * height[i++];
        else
            area = (j - i) * height[j--];
        if (area > max)
            max = area;
    }
    
    return max;
}