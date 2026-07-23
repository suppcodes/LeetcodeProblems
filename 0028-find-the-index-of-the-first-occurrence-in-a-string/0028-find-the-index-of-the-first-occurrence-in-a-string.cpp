class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.empty()) return 0;
        if (needle.length() > haystack.length()) return -1;

        for (int idx = 0; idx <= haystack.length() - needle.length(); idx++) {

            int j;
            for (j = 0; j < needle.length(); j++) {
                if (haystack[idx + j] != needle[j])
                    break;
            }

            if (j == needle.length())
                return idx;
        }

        return -1;
    }
};
