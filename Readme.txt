====================
C++ Smtp stack ������Ʈ
====================

1. ����

 �� ������Ʈ�� ��ǥ�� ������ ����.

 * C++ STL ��� SMTP Ŭ���̾�Ʈ ����

2. ���� ����

 * SipPlatform
   - C++ SIP stack ���� ���Ǵ� OS �������� ��ƿ��Ƽ ���̺귯��

 * SmtpStack
   - C++ STL ��� SMTP Ŭ���̾�Ʈ

 * TestSmtpStack
   - C++ Smtp stack ���� �׽�Ʈ �� �׽�Ʈ

3. ������ ���

 * VC++ 2008
   - SipStack.sln ����Ŭ���� ��, �����Ѵ�.
   - Visual Studio 2008 ���� 9.0.30729.1 SP ���� ������ ���� �����մϴ�.

4. �ҽ� �ڵ� ����

 C++ SMTP Ŭ���̾�Ʈ�� �̸����� ������ �ҽ� �ڵ� ������ ������ �����ϴ�.

 CSmtpClient clsClient;
 bool bUseTls = false;
 
 // QQQ: pszServerIp, iServerPort ���� ���� �� �� �Է�
 // QQQ: pszUserId, pszPassWord ���� ���� �� �� �Է�
 // QQQ: pszEmailFrom, pszEmailTo ���� ���� �� �� �Է�

 clsClient.SetServer( pszServerIp, iServerPort, bUseTls );
 clsClient.SetUser( pszUserId, pszPassWord );
 clsClient.SetFrom( pszEmailFrom );
 clsClient.SetTo( pszEmailTo );

 clsClient.SetSubject( "test" );
 clsClient.SetContent( "test email" );

 if( clsClient.Connect( ) == false )
 {
  printf( "connect SMTP server error\n" );
 }
 else if( clsClient.Send( ) == false )
 {
  printf( "send SMTP email error\n" );
 }