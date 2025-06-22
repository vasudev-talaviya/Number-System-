import math

# ln = float(input("Enter the value:-"))

# y = (ln-1) / (ln+1)



for j in range(2,100):

    y = (j-1) / (j+1)

    power = 0

    index = 1

    for i in range(1000):

        result = math.pow(y,index) / index
        index+=2
        power+=result

    power*=2
    actual = math.log(j)

    cond = ((actual - power)/ actual)*100

    print(j)
    print(cond,'%')
    print('find:-',power)
    print('actual:-',actual)

    print()