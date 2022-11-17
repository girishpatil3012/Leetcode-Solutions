class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int total_area = (C-A) * (D-B) + (G-E) * (H-F);

        if (C<=E || A>=G || B>=H || D<=F )
            return total_area;
        else
        {
            vector <int> vec1;
            vec1.push_back(A);
            vec1.push_back(C);
            vec1.push_back(E);
            vec1.push_back(G);

            vector <int> vec2;
            vec2.push_back(B);
            vec2.push_back(D);
            vec2.push_back(F);
            vec2.push_back(H);

            sort(vec1.begin(), vec1.end());
            sort(vec2.begin(), vec2.end());

            total_area = total_area - (vec1[2] - vec1[1]) * (vec2[2] - vec2[1]);
            
            return total_area;
        }
    }
};