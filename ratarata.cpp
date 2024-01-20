#include <iostream>
#include <vector>

float hitung_rata_rata(const std::vector<int>& array) {
    if (array.empty()) {
        return -1;
    }

    int total = 0;
    for (int nilai : array) {
        total += nilai;
    }

    return static_cast<float>(total) / array.size();
}

int main() {
    std::vector<int> nilai_array = {78, 82, 95, 86, 90};

    float hasil_rata_rata = hitung_rata_rata(nilai_array);

    std::cout << "Rata-rata dari array adalah: " << hasil_rata_rata << std::endl;

    return 0;
}
