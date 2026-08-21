rows = 5
i = rows

while i >= 1:
    line = ""


    j = 1
    while j <= rows - i:
        line += " "
        j += 1


    k = 1
    while k <= 2 * i - 1:
        line += "*"
        k += 1

    print(line)
    i -= 1