// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int starting = 0;
    int ending = size - 1;
    int kol = 0;
    while (starting <= ending) {
        int i = (starting + ending) / 2;
        if (arr[i] == value) {
            kol++;
            for (int j = i + 1; j <= size && arr[j] == value; j++) {
                kol++;
            }
            for (int j = i - 1; j >= 0 && arr[j] == value; j--) {
                kol++;
            }
            return kol;
        }
        if (arr[i] > value) ending = i - 1;
        if (arr[i] < value) starting = i + 1;
    }
  return 0;
}
