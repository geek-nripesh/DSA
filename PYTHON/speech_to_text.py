import speech_recognition as s
sr=s.Recognizer()
mic=s.Microphone()
with mic as source:
     sr.adjust_for_ambient_noise(source)
     audio=sr.listen(source, timeout=5)
print(sr.recognize_google(audio))
