object frmMain: TfrmMain
  Left = 192
  Top = 114
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'VB Project'
  ClientHeight = 292
  ClientWidth = 377
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object txtVbProject: TRichEdit
    Left = 8
    Top = 8
    Width = 361
    Height = 241
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object cmdClose: TButton
    Left = 128
    Top = 256
    Width = 113
    Height = 25
    Caption = 'Close'
    TabOrder = 1
    OnClick = cmdCloseClick
  end
  object XPManifest1: TXPManifest
    Left = 320
    Top = 264
  end
end
