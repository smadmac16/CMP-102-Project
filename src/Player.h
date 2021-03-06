//
// Created by smacdonald on 21/04/2020.
//

#ifndef CMP_102_PROJECT_PLAYER_H
#define CMP_102_PROJECT_PLAYER_H

#include <string>

class Player {
private:
    std::string Player_Name;
    int Player_Accuracy;

    int Player_Score;

    int Turn_Score;

public:

    Player(std::string, int);
    Player();
    ~Player();

    std::string Get_Player_Name();
    void Set_Player_Name(std::string);

    int Get_Accuracy() const;
    void Set_Accuracy(int);

    int Get_Score() const;
    int Adjust_Score();
    void Reset_Score();

    void Throw_Darts();
};


#endif //CMP_102_PROJECT_PLAYER_H
