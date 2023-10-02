class Solution {
public:
    bool winnerOfGame(string colors) {
        int chancesOfAlice = 0, chancesOfBob= 0, alice = 0, bob = 0;
        for(int i=0;i<colors.length();i++) {
            if(colors[i] == 'A') {
                chancesOfBob += bob > 2 ? bob - 2 : 0;
                bob = 0;
                alice++;
            }
            else {
                chancesOfAlice += alice > 2 ? alice - 2: 0;
                alice = 0;
                bob++;
            }
        }
        chancesOfBob += bob > 2 ? bob - 2 : 0;
        chancesOfAlice += alice > 2 ? alice - 2: 0;

        return chancesOfAlice > chancesOfBob;
    }
};