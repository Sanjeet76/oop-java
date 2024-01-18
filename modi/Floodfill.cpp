#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();          // Get the number of rows in the image.
        int n = image[0].size();       // Get the number of columns in the image.
        int oldColor = image[sr][sc]; // Store the original color of the starting pixel.

        if (oldColor != color) {
            dfs(image, sr, sc, oldColor, color); // Call the DFS function to perform flood fill.
        }

        return image; // Return the modified image.
    }

private:
    void dfs(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {
        int m = image.size(); // Get the number of rows in the image.
        int n = image[0].size(); // Get the number of columns in the image.

        // Check if the current pixel is out of bounds or has a different color.
        if (sr < 0 || sr >= m || sc < 0 || sc >= n || image[sr][sc] != oldColor) {
            return; // If so, return and do nothing.
        }

        // Set the current pixel to the new color.
        image[sr][sc] = newColor;

        // Recursively visit neighboring pixels in 4 directions.
        dfs(image, sr - 1, sc, oldColor, newColor); // Up
        dfs(image, sr + 1, sc, oldColor, newColor); // Down
        dfs(image, sr, sc - 1, oldColor, newColor); // Left
        dfs(image, sr, sc + 1, oldColor, newColor); // Right
    }
};

int main() {
    int m, n, sr, sc, color;

    // Taking user input for the number of rows and columns in the image.
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    // Taking user input for the image matrix.
    vector<vector<int>> image(m, vector<int>(n));
    cout << "Enter the elements of the image matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> image[i][j];
        }
    }

    // Taking user input for the starting pixel (sr, sc) and the new color.
    cout << "Enter the starting row (sr): ";
    cin >> sr;
    cout << "Enter the starting column (sc): ";
    cin >> sc;
    cout << "Enter the new color: ";
    cin >> color;

    // Create a Solution object and perform the flood fill.
    Solution solution;
    vector<vector<int>> result = solution.floodFill(image, sr, sc, color);

    // Display the modified image.
    cout << "Modified Image:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
