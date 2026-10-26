import win32com.client as win

list = ["Mista","Golu","Sahil"]
robot = win.Dispatch("SAPI.spvoice") 
    # connect with microsoft voice
for name in list:
    print(f"Shoutout to {name}")
    robot.speak(f"Shoutout to {name}")
    #speak anything
