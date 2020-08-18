from datetime import datetime
s1 = input()
s2 = input()
FMT = '%H:%M:%S'
tdelta = datetime.strptime(s2, FMT) - datetime.strptime(s1, FMT)
seconds = int(round(tdelta.total_seconds()))
minutes, seconds = divmod(seconds, 60)
hours, minutes = divmod(minutes, 60)
print("{:02d}:{:02d}:{:02d}".format(hours, minutes, seconds))