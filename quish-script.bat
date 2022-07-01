@echo off
if _%1_==_payload_  goto :payload

:getadmin
    echo %~nx0: elevating self
    set vbs=%temp%\getadmin.vbs
    echo Set UAC = CreateObject^("Shell.Application"^)                >> "%vbs%"
    echo UAC.ShellExecute "%~s0", "payload %~sdp0 %*", "", "runas", 1 >> "%vbs%"
    "%temp%\getadmin.vbs"
    del "%temp%\getadmin.vbs"
goto :eof

:payload

echo ----Starting quish-script by shourgamer2---
echo ----https://github.com/shourgamer2/quish-clean----
echo 1.0.0
echo Starting
del /s /f /q C:\WINDOWS\Prefetch
del /s /f /q %temp%\*.*

