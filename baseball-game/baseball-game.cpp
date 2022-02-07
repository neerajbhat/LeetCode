class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector <int> v;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] != "C" && ops[i] != "D" && ops[i] != "+"){
                v.push_back(stoi(ops[i]));
            }
            else if(ops[i] == "C"){
                v.erase(v.begin() + v.size() - 1);
            }
            else if(ops[i] == "D"){
                v.push_back(2 * v[v.size() - 1]);
            }
            else if(ops[i] == "+"){
                v.push_back(v[v.size() - 1] + v[v.size() - 2]);
            }
        }
        int sum = 0;
        for(int i = 0; i < v.size(); i++)
            sum += v[i];
        return sum;
    }
};