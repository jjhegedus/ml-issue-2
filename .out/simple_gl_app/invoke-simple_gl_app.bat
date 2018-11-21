@echo off
setlocal
pushd "."
call "C:\Users\jhege\MagicLeap\mlsdk\v0.18.0\envsetup.bat"
mldb install -u "c:\Projects\samples\SimpleGlApp\.out\simple_gl_app\simple_gl_app.mpk"
set __RETCODE__=%ERRORLEVEL%
if %__RETCODE__% EQU 0 (
	mldb launch -f com.magicleap.sample.simpleglapp
	set __RETCODE__=%ERRORLEVEL%
)
popd
exit /b %__RETCODE__%
