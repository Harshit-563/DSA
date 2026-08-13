class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());

        int left = 0;
        int right = tokens.size() - 1;

        int score = 0;
        int maxScore = 0;

        while (left <= right) {

            // Play smallest token face-up
            if (power >= tokens[left]) {
                power -= tokens[left];
                score++;
                left++;

                maxScore = max(maxScore, score);
            }

            // If we have score, sacrifice 1 score
            // to gain maximum possible power
            else if (score > 0 && left < right) {
                power += tokens[right];
                score--;
                right--;
            }

            else {
                break;
            }
        }

        return maxScore;
    }
};