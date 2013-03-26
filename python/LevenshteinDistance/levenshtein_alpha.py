def LevenshteinDistance(s, t):
    len_s = len(s)
    len_t = len(t)

    if (len_s == 0): 
        return len_t
    if (len_t == 0):
        return len_s
    if(s[len_s-1] == t[len_t-1]):
        cost = 0
    else: 
        cost = 1
    return min( LevenshteinDistance(s[0:len_s-1], t) + 1,
                LevenshteinDistance(s, t[0:len_t-1]) + 1,
                LevenshteinDistance(s[0:len_s-1], t[0:len_t-1]) + cost )

def main():
    s = "kittenskittens"
    t = "sittenssittens"
    result = LevenshteinDistance(s, t)
    print "Levenshtein_Distance between", s, "and", t, "is :", result

if __name__ == "__main__":
    main()