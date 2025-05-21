#include <vector>
#include <unordered_map>
using namespace std;

class TopVotedCandidate {
public:
    vector<int> voteTimes;
    vector<int> leadingCandidates;

    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int n = persons.size();
        voteTimes = times;
        leadingCandidates.resize(n);

        unordered_map<int, int> votesCount;
        int currentWinner = -1;
        int maxVotes = 0;

        for (int i = 0; i < n; i++) {
            int personId = persons[i];
            votesCount[personId]++;

            if (votesCount[personId] >= maxVotes) {
                maxVotes = votesCount[personId];
                currentWinner = personId;
            }

            leadingCandidates[i] = currentWinner;
        }
    }

    int q(int t) {
        int left = 0, right = voteTimes.size() - 1;
        while (left < right) {
            int mid = (left + right + 1) / 2;
            if (voteTimes[mid] <= t) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return leadingCandidates[left];
    }
};

/**
 * Your TopVotedCandidate object wi
 l be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */