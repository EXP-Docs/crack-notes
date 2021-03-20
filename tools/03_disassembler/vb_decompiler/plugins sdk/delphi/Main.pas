unit Main;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, ComCtrls, XPMan;

type
  TfrmMain = class(TForm)
    txtVbProject: TRichEdit;
    cmdClose: TButton;
    XPManifest1: TXPManifest;
    procedure cmdCloseClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmMain: TfrmMain;

implementation

{$R *.dfm}

procedure TfrmMain.cmdCloseClick(Sender: TObject);
begin
  MessageBoxA(frmMain.Handle,'Plugin worked correctly','Delphi Plugin',64);
  frmMain.Close;
end;

end.
