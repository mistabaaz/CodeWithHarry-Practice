from plyer import notification
import time
import vlc
 

App = "Desktop Notifyer"
Icon = "clock.ico"
ring = "alarm.mp3"
Title = "Take a Break!!!"


if __name__ == "__main__":

    print('After how many minutes the notification is being displayed')
    min = float(input("Enter time in minutes: "))
    sec = min*60
    msg = f"You are working more than {int(min)} minutes "
    while True:
        print("\n\nPlease keep the window open!")
        time.sleep(0.5)
        player = vlc.MediaPlayer(ring)
        player.set_time(0)
        player.play()
        notification.notify(app_name=App,app_icon=Icon,title=Title,message=msg,timeout=10)
        time.sleep(sec)
