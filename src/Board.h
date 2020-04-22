//
// Created by smacdonald on 21/04/2020.
//

#ifndef CMP_102_PROJECT_BOARD_H
#define CMP_102_PROJECT_BOARD_H


class Board {
private:
    //int Dart_Board[7][20];
    int Dart_Board[7][20] = {
            {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
            {60, 3,  54, 12, 39, 18, 30, 45, 6,  51, 9,  57, 21, 48, 24, 33, 42, 27, 36, 15},
            {20, 1,  18, 4,  13, 6,  10, 15, 2,  17, 3,  19, 7,  16, 8,  11, 14, 9,  12, 5},
            {40, 2,  36, 8,  26, 12, 20, 30, 4,  34, 6,  38, 14, 32, 16, 22, 28, 18, 24, 10},
            {20, 1,  18, 4,  13, 6,  10, 15, 2,  17, 3,  19, 7,  16, 8,  11, 14, 9,  12, 5},
            {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25},
            {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50}
    };

public:
    Board();
    ~Board();

    int Throw_Dart(int, int);
    /*
     * Target, Player_Accuracy
     * Returning throw score
     */

};


#endif //CMP_102_PROJECT_BOARD_H
