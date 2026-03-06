import pyautogui as pg
import time
time.sleep(5)
for i in range(200):
    pg.typewrite(":kitty")
    pg.press("enter")
    pg.press("enter")
    time.sleep(0.1)
