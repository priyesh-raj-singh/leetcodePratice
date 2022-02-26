class Solution {
public:
	class Tuple {
	public:
		int node;
		int mask;
		int cost;

		Tuple(int node, int mask, int cost) {
			this->node = node;
			this->mask = mask;
			this->cost = cost;
		}

	};

	int shortestPathLength(vector<vector<int>>& graph) {
		int n = graph.size();

		queue<Tuple> q;
		set<pair<int, int>> s;

		for (int i = 0; i < n; ++i) {
			int temp = (1 << i);
			Tuple head(i, temp, 1);
			q.push(head);
			s.insert({i, temp});
		}

		while (!q.empty()) {
			Tuple curr = q.front();
			q.pop();

			if (curr.mask == ((1 << n) - 1)) {
				return curr.cost - 1;
			}

			for (auto &child : graph[curr.node]) {
				int bitMask = curr.mask;
				bitMask |= (1 << child);

				Tuple t(child, bitMask, curr.cost + 1);
				if (s.find({child, bitMask}) == s.end()) {
					s.insert({child, bitMask});
					q.push(t);
				}
			}
		}

		return -1;
	}
};