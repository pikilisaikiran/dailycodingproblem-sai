# Program to game commands that give the following output
# When typed help/Help it should return 
#       Start - To start the car
#       Stop - To Stop the car
#       Quit - to exit 
#   if typed the above commands it should display
# for start "Car started... Ready to go"
#    if already started "car already started"...
st=0
while 1:
    inner=input().lower()
    if inner == "start":
        if st==0:
            print("car started... Ready to go ")
            st=1
        else:
            print("car already started....")
    elif inner == "help":
        print(" start - to start the car \n stop - to stop the car \n quit - to exit")
    elif inner == "stop":
        if st==1:
            print("car stopped...")
            st=0
        else:
            print("car already stopped....")
    elif inner == "quit":
        break
    else:
        print("I don't understand that...")


