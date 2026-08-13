#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nb_cases;
    std::cin >> nb_cases;

    while (nb_cases--)
    {
        std::vector<std::pair<int, int>> songs;

        int nb_songs;
        std::cin >> nb_songs;
        for (int i = 0; i < nb_songs; i++)
        {
            int val;
            std::cin >> val;
            songs.push_back({ val, i });
        }

        std::vector<std::pair<int, int>> liked_songs;
        std::vector<std::pair<int, int>> disliked_songs;

        std::string likes;
        std::cin >> likes;

        for (int i = 0; i < nb_songs; i++)
        {
            if (likes[i] == '1')
                liked_songs.push_back(songs[i]);
            else
                disliked_songs.push_back(songs[i]);
        }

        std::sort(liked_songs.begin(), liked_songs.end());
        std::sort(disliked_songs.begin(), disliked_songs.end());

        std::vector<int> res(nb_songs, 0);
        int counter = 1;
        for (auto elem : disliked_songs)
        {
            res[elem.second] = counter;
            counter++;
        }

        for (auto elem : liked_songs)
        {
            res[elem.second] = counter;
            counter++;
        }

        for (auto elem : res)
        {
            std::cout << elem << " ";
        }
        std::cout << "\n";
    }
}
