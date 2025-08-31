#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

#include <queue>
#include <vector>
#include <string>
#include <tuple> // For std::make_tuple

int minimumMoves(std::vector<std::string> grid, int startX, int startY, int goalX, int goalY) {
    int n = grid.size();
    if (n == 0) return -1; 
    
    std::vector<std::vector<int>> visited(n, std::vector<int>(n, -1)); 

    std::queue<std::tuple<int, int, int>> q;

    q.push(std::make_tuple(startX, startY, 0));
    visited[startX][startY] = 0;

    int dr[] = {-1, 1, 0, 0}; 
    int dc[] = {0, 0, -1, 1}; 

    while (!q.empty()) {
        auto [currentRow, currentCol, currentMoves] = q.front();
        q.pop();

        if (currentRow == goalX && currentCol == goalY) {
            return currentMoves;
        }

        for (int i = 0; i < 4; ++i) {
            int nextRow = currentRow;
            int nextCol = currentCol;

            while (true) {
                nextRow += dr[i];
                nextCol += dc[i];
                
                if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n || grid[nextRow][nextCol] == 'X') {
                    break; 
                }

                if (visited[nextRow][nextCol] == -1) {
                    visited[nextRow][nextCol] = currentMoves + 1;
                    q.push(std::make_tuple(nextRow, nextCol, currentMoves + 1));
                }
                
                else if (visited[nextRow][nextCol] <= currentMoves + 1) {
                }
            }
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int startX = stoi(first_multiple_input[0]);

    int startY = stoi(first_multiple_input[1]);

    int goalX = stoi(first_multiple_input[2]);

    int goalY = stoi(first_multiple_input[3]);

    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
