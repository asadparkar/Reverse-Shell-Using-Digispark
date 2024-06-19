# Reverse-Shell-Using-Digispark

## Please use for ethical purposes only

### Tested on Windows 10 and 11

1) On your kali machine, start a socat listener on port 4444 using the following command:
   ``` socat TCP-L:4444 - ```
2) Start ngrok server that forwards connections to this local port
   ```ngrok tcp 4444```
3) Copy the IP and port that you got from ngrok.
4) Download the payload.zip and unzip it.
5) Inside the payload folder, edit the power.ps1 file. Edit the $command variable and chane the IP and port to the one's you got from ngrok.
5) Zip the payload file and upload it to a server you can download it form.
6) Inside the Reverse_Shell_Antivirus_Bypassed.ino, change the download link of your payload.zip.
7) Uplolad the ino script into your digispark
8) Insert it into a windows PC

And you should have your reverse shell.

For more details, you can read this article I wrote :
https://medium.com/@asadparkar/hack-any-windows-computer-using-a-usb-gain-remote-shell-access-over-the-internet-4112aa484b94

or watch my video
https://www.youtube.com/watch?v=4Kw-RFkrIX8&t=4s
