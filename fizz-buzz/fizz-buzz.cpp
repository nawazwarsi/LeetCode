class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i=1; i<=n; ++i)
        {
            if(0 == i%3)
            {
                answer[i-1] += "Fizz";
            }
            if(0 == i%5)
            {
                answer[i-1] += "Buzz";
            }
            if(answer[i-1].empty())
            {
                answer[i-1] += to_string(i);
            }
        }
        return answer;
    }
};