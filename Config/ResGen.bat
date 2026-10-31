
@echo  off
setlocal

IF  not exist "View\Lang"  mkdir "View\Lang"

resgen  ^
    View\Lang\Strings.resx    ^
    View\Lang\Strings.resources   ^
    /str:vb,My.Resources,Strings,View\Lang\Strings.Designer.vb    ^
    /publicClass

IF %errorlevel% neq 0 (
    echo [ERROR] resgen View
    EXIT  /b 2
)

echo [SUCCESS] resgen

endlocal
EXIT  /b 0
