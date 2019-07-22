#This program displays the calendar when month and year is entered
import calendar

year= input('Enter the year ')
month= input("Enter the month ")

print('The calendar for the given month and year is: ')
print(calendar.month(year,month))
