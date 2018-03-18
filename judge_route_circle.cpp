class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0, horizontal = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'U') {
                vertical += 1;
            } else if (moves[i] == 'D') {
                vertical -= 1;
            } else if (moves[i] == 'L') {
                horizontal -= 1;
            } else if (moves[i] == 'R') {
                horizontal += 1;
            }
        }
        return vertical == 0 && horizontal == 0;
    }
};