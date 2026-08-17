class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxA = 0;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int height = heights[st.top()];
                st.pop();

                int width;

                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxA = max(maxA, height * width);
            }

            st.push(i);
        }

        while (!st.empty()) {
            int height = heights[st.top()];
            st.pop();

            int width;

            if (st.empty())
                width = n;
            else
                width = n - st.top() - 1;

            maxA = max(maxA, height * width);
        }

        return maxA;
    }
};