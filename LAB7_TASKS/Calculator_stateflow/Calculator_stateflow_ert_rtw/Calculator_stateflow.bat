
set MATLAB=D:\Matlab

cd .

if "%1"=="" ("D:\Matlab\bin\win64\gmake"  -f Calculator_stateflow.mk all) else ("D:\Matlab\bin\win64\gmake"  -f Calculator_stateflow.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1