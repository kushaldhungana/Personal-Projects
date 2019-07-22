import random
word= ("run","climb", "hit")
contain= random.choice(word)
while(1):
    guess= input("Enter the word")
    if(guess==contain):
        print("Congrats")
        break
    
