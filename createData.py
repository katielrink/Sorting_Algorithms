import random
import string

afile = open("input/example2.txt", "w")

#write integer datasets
for i in range(10, 500, 10):
    #generate a randomized dataset of size s with 0% duplicates
    arr = random.sample(range(1000), i)
    line = ""
    for j in range(i):
        line += str(arr[j]) + " "
    afile.write(line + "\n")

    #generate a dataset of size s with 0% duplicates that is sorted in ascending order
    line = ""
    for j in range(i):
        line += str(j) + " "
    afile.write(line + "\n")
    #generate a dataset of size s with 0% duplicates such that 60% of the array is already sorted ascending.
    line = ""
    for j in range(round(i*.6)):
        line += str(j) + " "
    arr = random.sample(range(round(i*.6), 1000), i)
    for j in range(round(i*.4)):
        line += str(arr[j]) + " "
    afile.write(line + "\n")
    #generate a randomized dataset of size s with 20% duplicates
    arr = random.sample(range(1000), i)
    line = ""
    dups = 0
    for j in range(round(i*.9)):
        line += str(arr[j]) + " "
        if dups < round(i*.1):
            dups=dups+1
            line += str(arr[j]) + " "
    afile.write(line + "\n")
    #generate a randomized dataset of size s with 40% duplicates
    arr = random.sample(range(1000), i)
    line = ""
    dups = 0
    for j in range(round(i*.8)):
        line += str(arr[j]) + " "
        if dups < round(i*.2):
            dups=dups+1
            line += str(arr[j]) + " "
    afile.write(line + "\n")

#write string datasets
for i in range(10, 500, 10):
    #generate a randomized dataset of size s with 0% duplicates
    letters = string.ascii_lowercase
    line = ""
    numLetters = 1;
    alphabetLoop = 1;
    for j in range(i):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        for temp in range(numLetters):
            line += random.choice(letters)
        line += " "
        alphabetLoop += alphabetLoop + 1
    afile.write(line + "\n")

    #generate a dataset of size s with 0% duplicates that is sorted in ascending order
    line = ""
    numLetters = 1;
    alphabetLoop = 1;
    for j in range(i):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        for temp in range(numLetters):
            line += letters[j%26]
        line += " "
        alphabetLoop += alphabetLoop + 1
    afile.write(line + "\n")
    #generate a dataset of size s with 0% duplicates such that 60% of the array is already sorted ascending.
    line = ""
    numLetters = 1;
    alphabetLoop = 1;
    for j in range(round(i*.6)):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        for temp in range(numLetters):
            line += letters[j%26]
        line += " "
        alphabetLoop += alphabetLoop + 1
    arr = random.sample(range(round(i*.6), 1000), i)
    for j in range(round(i*.4)):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        for temp in range(numLetters):
            line += random.choice(letters)
        line += " "
        alphabetLoop += alphabetLoop + 1
    afile.write(line + "\n")
    #generate a randomized dataset of size s with 20% duplicates
    arr = random.sample(range(1000), i)
    line = ""
    dups = 0
    numLetters = 1;
    alphabetLoop = 1;
    for j in range(round(i*.9)):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        s=""
        for temp in range(numLetters):
            s += random.choice(letters)
        line += s + " "
        if dups < round(i*.1):
            dups=dups+1
            line += s+ " "
        alphabetLoop += alphabetLoop + 1
    afile.write(line + "\n")

    #generate a randomized dataset of size s with 40% duplicates
    arr = random.sample(range(1000), i)
    line = ""
    dups = 0
    for j in range(round(i*.8)):
        if alphabetLoop > 26:
            alphabetLoop = 1
            numLetters = numLetters + 1
        s=""
        for temp in range(numLetters):
            s += random.choice(letters)
        line += s + " "
        if dups < round(i*.2):
            dups=dups+1
            line += s + " "
        alphabetLoop += alphabetLoop + 1
    afile.write(line + "\n")