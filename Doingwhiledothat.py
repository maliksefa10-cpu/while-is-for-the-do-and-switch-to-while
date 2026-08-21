row = 5
i = 0

while True:  
    line = ""
    k = 0
    
    while True: 
        line += "*"
        k += 1
        if not (k < i + 1):
            break
            
    print(line)
    
    i += 1
    if not (i < row):
        break