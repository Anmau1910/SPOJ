#!/usr/bin/env python3

n_homo = 0;
n_op = int(input())
dic = {}

for i in range (n_op):

    e = input().split(" ")
    op = e[0]
    elem = int(e[1])

    if (op == "insert"):
        try:
            dic[elem] += 1

            if dic[elem] == 2:
                n_homo += 1

        except:
            dic[elem] = 1

    else:
        try:
            if (dic[elem] == 1):
                del dic[elem]
            else:
                dic[elem] -= 1
                if dic[elem] == 1:
                    n_homo -= 1
        except:
            pass

    le = len(dic.keys())

    if (le == 0):
        print("neither")
        continue

    elif (le == 1):
        for val in dic.values():
            if (val == 1):
                print("neither")
            else:
                print("homo")

        continue

    else:
        if (n_homo):
            print("both")
        else:
            print("hetero")