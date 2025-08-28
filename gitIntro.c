int main() {
    int sum = 0;
    int values[] = {1,2,3,4,5};
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        sum += values[i];
    }
    printf("this is the sum of the array: %d\n", sum);
}       