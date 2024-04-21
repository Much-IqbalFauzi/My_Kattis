import datetime

date = datetime
d, m = map(int,input().split())
day = date.datetime(2009,m,d)
print(day.strftime("%A"))