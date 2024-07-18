#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void update_grid(vector<vector<int>>& grid, int a, int b) {
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            grid[i][j]++;
        }
    }
}

int count_max_value_cells(int n, const vector<pair<int, int>>& steps) {
    // Khởi tạo lưới với kích thước đủ lớn
    vector<vector<int>> grid(6200, vector<int>(6200, 0));

    // Cập nhật lưới theo từng bước
    for (const auto& step : steps) {
        update_grid(grid, step.first, step.second);
    }

    // Tìm giá trị lớn nhất X
    long max_value = 0;
    for (const auto& row : grid) {
        for (long value : row) {
            max_value = max(max_value, value);
        }
    }

    // Đếm số ô có giá trị bằng X
    long count = 0;
    for (const auto& row : grid) {
        for (int value : row) {
            if (value == max_value) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> steps(n);
    for (int i = 0; i < n; ++i) {
        cin >> steps[i].first >> steps[i].second;
    }

    cout << count_max_value_cells(n, steps);

    return 0;
}