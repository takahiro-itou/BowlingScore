Public Class Form1

Private Sub RunCount(ByVal message As String)
    Dim result As Integer
    Dim outText As String
    ' Dim objWrapper As SampleWrapper.Common.SampleDocument = New SampleWrapper.Common.SampleDocument()

End Sub

Private Sub mnuFileExit_Click(sender As Object, e As EventArgs) Handles _
            mnuFileExit.Click
''--------------------------------------------------------------------
''    メニュー「ファイル」－「終了」
''--------------------------------------------------------------------
    Application.Exit()
End Sub

Private Sub mnuRunCount_Click(sender As Object, e As EventArgs) Handles _
            mnuRunCount.Click
''--------------------------------------------------------------------
''    メニュー「実行」－「カウント」
''--------------------------------------------------------------------
    RunCount(SampleControl1.InputText)
End Sub

Private Sub SampleControl1_RunButtonClick(sender As Object, e As EventArgs) _
    Handles SampleControl1.RunButtonClick
''--------------------------------------------------------------------
''    イベントハンドラ
''
''    ユーザーコントロールの「実行ボタンクリック」
''--------------------------------------------------------------------
    RunCount(SampleControl1.InputText)
End Sub

End Class
