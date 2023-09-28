import cv2

cap = cv2.VideoCapture(0) #0 for your primary camer and 1 for your secondary camera

while(True):
    _, frame = cap.read() 
    cv2.imshow('frame', frame) #show window of your camera
    if cv2.waitKey(1) & 0xFF == ord('q'): #press q To exit
        break

cap.release()
cv2.destroyAllWindows()