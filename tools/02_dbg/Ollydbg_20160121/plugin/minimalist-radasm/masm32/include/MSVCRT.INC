  ; --------------------------------------------
  ; prototypes for the Microsoft VC Runtime DLL
  ; --------------------------------------------

    cdef typedef PROTO C :VARARG

    externdef _imp__$I10_OUTPUT:PTR cdef
    crt_$I10_OUTPUT equ <_imp__$I10_OUTPUT>

    externdef _imp___CIacos:PTR cdef
    crt__CIacos equ <_imp___CIacos>

    externdef _imp___CIasin:PTR cdef
    crt__CIasin equ <_imp___CIasin>

    externdef _imp___CIatan:PTR cdef
    crt__CIatan equ <_imp___CIatan>

    externdef _imp___CIatan2:PTR cdef
    crt__CIatan2 equ <_imp___CIatan2>

    externdef _imp___CIcos:PTR cdef
    crt__CIcos equ <_imp___CIcos>

    externdef _imp___CIcosh:PTR cdef
    crt__CIcosh equ <_imp___CIcosh>

    externdef _imp___CIexp:PTR cdef
    crt__CIexp equ <_imp___CIexp>

    externdef _imp___CIfmod:PTR cdef
    crt__CIfmod equ <_imp___CIfmod>

    externdef _imp___CIlog:PTR cdef
    crt__CIlog equ <_imp___CIlog>

    externdef _imp___CIlog10:PTR cdef
    crt__CIlog10 equ <_imp___CIlog10>

    externdef _imp___CIpow:PTR cdef
    crt__CIpow equ <_imp___CIpow>

    externdef _imp___CIsin:PTR cdef
    crt__CIsin equ <_imp___CIsin>

    externdef _imp___CIsinh:PTR cdef
    crt__CIsinh equ <_imp___CIsinh>

    externdef _imp___CIsqrt:PTR cdef
    crt__CIsqrt equ <_imp___CIsqrt>

    externdef _imp___CItan:PTR cdef
    crt__CItan equ <_imp___CItan>

    externdef _imp___CItanh:PTR cdef
    crt__CItanh equ <_imp___CItanh>

    externdef _imp___CxxThrowException:PTR cdef
    crt__CxxThrowException equ <_imp___CxxThrowException>

    externdef _imp___EH_prolog:PTR cdef
    crt__EH_prolog equ <_imp___EH_prolog>

    externdef _imp___Getdays:PTR cdef
    crt__Getdays equ <_imp___Getdays>

    externdef _imp___Getmonths:PTR cdef
    crt__Getmonths equ <_imp___Getmonths>

    externdef _imp___Gettnames:PTR cdef
    crt__Gettnames equ <_imp___Gettnames>

    externdef _imp___HUGE:PTR cdef
    crt__HUGE equ <_imp___HUGE>

    externdef _imp___Strftime:PTR cdef
    crt__Strftime equ <_imp___Strftime>

    externdef _imp___XcptFilter:PTR cdef
    crt__XcptFilter equ <_imp___XcptFilter>

    externdef _imp____CxxFrameHandler:PTR cdef
    crt___CxxFrameHandler equ <_imp____CxxFrameHandler>

    externdef _imp____CxxLongjmpUnwind:PTR cdef
    crt___CxxLongjmpUnwind equ <_imp____CxxLongjmpUnwind>

    externdef _imp____RTCastToVoid:PTR cdef
    crt___RTCastToVoid equ <_imp____RTCastToVoid>

    externdef _imp____RTDynamicCast:PTR cdef
    crt___RTDynamicCast equ <_imp____RTDynamicCast>

    externdef _imp____RTtypeid:PTR cdef
    crt___RTtypeid equ <_imp____RTtypeid>

    externdef _imp____STRINGTOLD:PTR cdef
    crt___STRINGTOLD equ <_imp____STRINGTOLD>

    externdef _imp____argc:PTR cdef
    crt___argc equ <_imp____argc>

    externdef _imp____argv:PTR cdef
    crt___argv equ <_imp____argv>

    externdef _imp____badioinfo:PTR cdef
    crt___badioinfo equ <_imp____badioinfo>

    externdef _imp____crtCompareStringA:PTR cdef
    crt___crtCompareStringA equ <_imp____crtCompareStringA>

    externdef _imp____crtGetLocaleInfoW:PTR cdef
    crt___crtGetLocaleInfoW equ <_imp____crtGetLocaleInfoW>

    externdef _imp____crtLCMapStringA:PTR cdef
    crt___crtLCMapStringA equ <_imp____crtLCMapStringA>

    externdef _imp____dllonexit:PTR cdef
    crt___dllonexit equ <_imp____dllonexit>

    externdef _imp____doserrno:PTR cdef
    crt___doserrno equ <_imp____doserrno>

    externdef _imp____fpecode:PTR cdef
    crt___fpecode equ <_imp____fpecode>

    externdef _imp____getmainargs:PTR cdef
    crt___getmainargs equ <_imp____getmainargs>

    externdef _imp____initenv:PTR cdef
    crt___initenv equ <_imp____initenv>

    externdef _imp____isascii:PTR cdef
    crt___isascii equ <_imp____isascii>

    externdef _imp____iscsym:PTR cdef
    crt___iscsym equ <_imp____iscsym>

    externdef _imp____iscsymf:PTR cdef
    crt___iscsymf equ <_imp____iscsymf>

    externdef _imp____lc_codepage:PTR cdef
    crt___lc_codepage equ <_imp____lc_codepage>

    externdef _imp____lc_collate_cp:PTR cdef
    crt___lc_collate_cp equ <_imp____lc_collate_cp>

    externdef _imp____lc_handle:PTR cdef
    crt___lc_handle equ <_imp____lc_handle>

    externdef _imp____lconv_init:PTR cdef
    crt___lconv_init equ <_imp____lconv_init>

    externdef _imp____mb_cur_max:PTR cdef
    crt___mb_cur_max equ <_imp____mb_cur_max>

    externdef _imp____p___argc:PTR cdef
    crt___p___argc equ <_imp____p___argc>

    externdef _imp____p___argv:PTR cdef
    crt___p___argv equ <_imp____p___argv>

    externdef _imp____p___initenv:PTR cdef
    crt___p___initenv equ <_imp____p___initenv>

    externdef _imp____p___mb_cur_max:PTR cdef
    crt___p___mb_cur_max equ <_imp____p___mb_cur_max>

    externdef _imp____p___wargv:PTR cdef
    crt___p___wargv equ <_imp____p___wargv>

    externdef _imp____p___winitenv:PTR cdef
    crt___p___winitenv equ <_imp____p___winitenv>

    externdef _imp____p__acmdln:PTR cdef
    crt___p__acmdln equ <_imp____p__acmdln>

    externdef _imp____p__amblksiz:PTR cdef
    crt___p__amblksiz equ <_imp____p__amblksiz>

    externdef _imp____p__commode:PTR cdef
    crt___p__commode equ <_imp____p__commode>

    externdef _imp____p__daylight:PTR cdef
    crt___p__daylight equ <_imp____p__daylight>

    externdef _imp____p__dstbias:PTR cdef
    crt___p__dstbias equ <_imp____p__dstbias>

    externdef _imp____p__environ:PTR cdef
    crt___p__environ equ <_imp____p__environ>

    externdef _imp____p__fileinfo:PTR cdef
    crt___p__fileinfo equ <_imp____p__fileinfo>

    externdef _imp____p__fmode:PTR cdef
    crt___p__fmode equ <_imp____p__fmode>

    externdef _imp____p__iob:PTR cdef
    crt___p__iob equ <_imp____p__iob>

    externdef _imp____p__mbcasemap:PTR cdef
    crt___p__mbcasemap equ <_imp____p__mbcasemap>

    externdef _imp____p__mbctype:PTR cdef
    crt___p__mbctype equ <_imp____p__mbctype>

    externdef _imp____p__osver:PTR cdef
    crt___p__osver equ <_imp____p__osver>

    externdef _imp____p__pctype:PTR cdef
    crt___p__pctype equ <_imp____p__pctype>

    externdef _imp____p__pgmptr:PTR cdef
    crt___p__pgmptr equ <_imp____p__pgmptr>

    externdef _imp____p__pwctype:PTR cdef
    crt___p__pwctype equ <_imp____p__pwctype>

    externdef _imp____p__timezone:PTR cdef
    crt___p__timezone equ <_imp____p__timezone>

    externdef _imp____p__tzname:PTR cdef
    crt___p__tzname equ <_imp____p__tzname>

    externdef _imp____p__wcmdln:PTR cdef
    crt___p__wcmdln equ <_imp____p__wcmdln>

    externdef _imp____p__wenviron:PTR cdef
    crt___p__wenviron equ <_imp____p__wenviron>

    externdef _imp____p__winmajor:PTR cdef
    crt___p__winmajor equ <_imp____p__winmajor>

    externdef _imp____p__winminor:PTR cdef
    crt___p__winminor equ <_imp____p__winminor>

    externdef _imp____p__winver:PTR cdef
    crt___p__winver equ <_imp____p__winver>

    externdef _imp____p__wpgmptr:PTR cdef
    crt___p__wpgmptr equ <_imp____p__wpgmptr>

    externdef _imp____pioinfo:PTR cdef
    crt___pioinfo equ <_imp____pioinfo>

    externdef _imp____pxcptinfoptrs:PTR cdef
    crt___pxcptinfoptrs equ <_imp____pxcptinfoptrs>

    externdef _imp____set_app_type:PTR cdef
    crt___set_app_type equ <_imp____set_app_type>

    externdef _imp____setlc_active:PTR cdef
    crt___setlc_active equ <_imp____setlc_active>

    externdef _imp____setusermatherr:PTR cdef
    crt___setusermatherr equ <_imp____setusermatherr>

    externdef _imp____threadhandle:PTR cdef
    crt___threadhandle equ <_imp____threadhandle>

    externdef _imp____threadid:PTR cdef
    crt___threadid equ <_imp____threadid>

    externdef _imp____toascii:PTR cdef
    crt___toascii equ <_imp____toascii>

    externdef _imp____unDName:PTR cdef
    crt___unDName equ <_imp____unDName>

    externdef _imp____unDNameEx:PTR cdef
    crt___unDNameEx equ <_imp____unDNameEx>

    externdef _imp____unguarded_readlc_active:PTR cdef
    crt___unguarded_readlc_active equ <_imp____unguarded_readlc_active>

    externdef _imp____wargv:PTR cdef
    crt___wargv equ <_imp____wargv>

    externdef _imp____wgetmainargs:PTR cdef
    crt___wgetmainargs equ <_imp____wgetmainargs>

    externdef _imp____winitenv:PTR cdef
    crt___winitenv equ <_imp____winitenv>

    externdef _imp___abnormal_termination:PTR cdef
    crt__abnormal_termination equ <_imp___abnormal_termination>

    externdef _imp___access:PTR cdef
    crt__access equ <_imp___access>

    externdef _imp___acmdln:PTR cdef
    crt__acmdln equ <_imp___acmdln>

    externdef _imp___adj_fdiv_m16i:PTR cdef
    crt__adj_fdiv_m16i equ <_imp___adj_fdiv_m16i>

    externdef _imp___adj_fdiv_m32:PTR cdef
    crt__adj_fdiv_m32 equ <_imp___adj_fdiv_m32>

    externdef _imp___adj_fdiv_m32i:PTR cdef
    crt__adj_fdiv_m32i equ <_imp___adj_fdiv_m32i>

    externdef _imp___adj_fdiv_m64:PTR cdef
    crt__adj_fdiv_m64 equ <_imp___adj_fdiv_m64>

    externdef _imp___adj_fdiv_r:PTR cdef
    crt__adj_fdiv_r equ <_imp___adj_fdiv_r>

    externdef _imp___adj_fdivr_m16i:PTR cdef
    crt__adj_fdivr_m16i equ <_imp___adj_fdivr_m16i>

    externdef _imp___adj_fdivr_m32:PTR cdef
    crt__adj_fdivr_m32 equ <_imp___adj_fdivr_m32>

    externdef _imp___adj_fdivr_m32i:PTR cdef
    crt__adj_fdivr_m32i equ <_imp___adj_fdivr_m32i>

    externdef _imp___adj_fdivr_m64:PTR cdef
    crt__adj_fdivr_m64 equ <_imp___adj_fdivr_m64>

    externdef _imp___adj_fpatan:PTR cdef
    crt__adj_fpatan equ <_imp___adj_fpatan>

    externdef _imp___adj_fprem:PTR cdef
    crt__adj_fprem equ <_imp___adj_fprem>

    externdef _imp___adj_fprem1:PTR cdef
    crt__adj_fprem1 equ <_imp___adj_fprem1>

    externdef _imp___adj_fptan:PTR cdef
    crt__adj_fptan equ <_imp___adj_fptan>

    externdef _imp___adjust_fdiv:PTR cdef
    crt__adjust_fdiv equ <_imp___adjust_fdiv>

    externdef _imp___aexit_rtn:PTR cdef
    crt__aexit_rtn equ <_imp___aexit_rtn>

    externdef _imp___amsg_exit:PTR cdef
    crt__amsg_exit equ <_imp___amsg_exit>

    externdef _imp___assert:PTR cdef
    crt__assert equ <_imp___assert>

    externdef _imp___atodbl:PTR cdef
    crt__atodbl equ <_imp___atodbl>

    externdef _imp___atoi64:PTR cdef
    crt__atoi64 equ <_imp___atoi64>

    externdef _imp___atoldbl:PTR cdef
    crt__atoldbl equ <_imp___atoldbl>

    externdef _imp___beep:PTR cdef
    crt__beep equ <_imp___beep>

    externdef _imp___beginthread:PTR cdef
    crt__beginthread equ <_imp___beginthread>

    externdef _imp___beginthreadex:PTR cdef
    crt__beginthreadex equ <_imp___beginthreadex>

    externdef _imp___c_exit:PTR cdef
    crt__c_exit equ <_imp___c_exit>

    externdef _imp___cabs:PTR cdef
    crt__cabs equ <_imp___cabs>

    externdef _imp___callnewh:PTR cdef
    crt__callnewh equ <_imp___callnewh>

    externdef _imp___cexit:PTR cdef
    crt__cexit equ <_imp___cexit>

    externdef _imp___cgets:PTR cdef
    crt__cgets equ <_imp___cgets>

    externdef _imp___chdir:PTR cdef
    crt__chdir equ <_imp___chdir>

    externdef _imp___chdrive:PTR cdef
    crt__chdrive equ <_imp___chdrive>

    externdef _imp___chgsign:PTR cdef
    crt__chgsign equ <_imp___chgsign>

    externdef _imp___chkesp:PTR cdef
    crt__chkesp equ <_imp___chkesp>

    externdef _imp___chmod:PTR cdef
    crt__chmod equ <_imp___chmod>

    externdef _imp___chsize:PTR cdef
    crt__chsize equ <_imp___chsize>

    externdef _imp___clearfp:PTR cdef
    crt__clearfp equ <_imp___clearfp>

    externdef _imp___close:PTR cdef
    crt__close equ <_imp___close>

    externdef _imp___commit:PTR cdef
    crt__commit equ <_imp___commit>

    externdef _imp___commode:PTR cdef
    crt__commode equ <_imp___commode>

    externdef _imp___control87:PTR cdef
    crt__control87 equ <_imp___control87>

    externdef _imp___controlfp:PTR cdef
    crt__controlfp equ <_imp___controlfp>

    externdef _imp___copysign:PTR cdef
    crt__copysign equ <_imp___copysign>

    externdef _imp___cprintf:PTR cdef
    crt__cprintf equ <_imp___cprintf>

    externdef _imp___cputs:PTR cdef
    crt__cputs equ <_imp___cputs>

    externdef _imp___creat:PTR cdef
    crt__creat equ <_imp___creat>

    externdef _imp___cscanf:PTR cdef
    crt__cscanf equ <_imp___cscanf>

    externdef _imp___ctime64:PTR cdef
    crt__ctime64 equ <_imp___ctime64>

    externdef _imp___ctype:PTR cdef
    crt__ctype equ <_imp___ctype>

    externdef _imp___cwait:PTR cdef
    crt__cwait equ <_imp___cwait>

    externdef _imp___daylight:PTR cdef
    crt__daylight equ <_imp___daylight>

    externdef _imp___dstbias:PTR cdef
    crt__dstbias equ <_imp___dstbias>

    externdef _imp___dup:PTR cdef
    crt__dup equ <_imp___dup>

    externdef _imp___dup2:PTR cdef
    crt__dup2 equ <_imp___dup2>

    externdef _imp___ecvt:PTR cdef
    crt__ecvt equ <_imp___ecvt>

    externdef _imp___endthread:PTR cdef
    crt__endthread equ <_imp___endthread>

    externdef _imp___endthreadex:PTR cdef
    crt__endthreadex equ <_imp___endthreadex>

    externdef _imp___environ:PTR cdef
    crt__environ equ <_imp___environ>

    externdef _imp___eof:PTR cdef
    crt__eof equ <_imp___eof>

    externdef _imp___errno:PTR cdef
    crt__errno equ <_imp___errno>

    externdef _imp___except_handler2:PTR cdef
    crt__except_handler2 equ <_imp___except_handler2>

    externdef _imp___except_handler3:PTR cdef
    crt__except_handler3 equ <_imp___except_handler3>

    externdef _imp___execl:PTR cdef
    crt__execl equ <_imp___execl>

    externdef _imp___execle:PTR cdef
    crt__execle equ <_imp___execle>

    externdef _imp___execlp:PTR cdef
    crt__execlp equ <_imp___execlp>

    externdef _imp___execlpe:PTR cdef
    crt__execlpe equ <_imp___execlpe>

    externdef _imp___execv:PTR cdef
    crt__execv equ <_imp___execv>

    externdef _imp___execve:PTR cdef
    crt__execve equ <_imp___execve>

    externdef _imp___execvp:PTR cdef
    crt__execvp equ <_imp___execvp>

    externdef _imp___execvpe:PTR cdef
    crt__execvpe equ <_imp___execvpe>

    externdef _imp___exit:PTR cdef
    crt__exit equ <_imp___exit>

    externdef _imp___expand:PTR cdef
    crt__expand equ <_imp___expand>

    externdef _imp___fcloseall:PTR cdef
    crt__fcloseall equ <_imp___fcloseall>

    externdef _imp___fcvt:PTR cdef
    crt__fcvt equ <_imp___fcvt>

    externdef _imp___fdopen:PTR cdef
    crt__fdopen equ <_imp___fdopen>

    externdef _imp___fgetchar:PTR cdef
    crt__fgetchar equ <_imp___fgetchar>

    externdef _imp___fgetwchar:PTR cdef
    crt__fgetwchar equ <_imp___fgetwchar>

    externdef _imp___filbuf:PTR cdef
    crt__filbuf equ <_imp___filbuf>

    externdef _imp___fileinfo:PTR cdef
    crt__fileinfo equ <_imp___fileinfo>

    externdef _imp___filelength:PTR cdef
    crt__filelength equ <_imp___filelength>

    externdef _imp___filelengthi64:PTR cdef
    crt__filelengthi64 equ <_imp___filelengthi64>

    externdef _imp___fileno:PTR cdef
    crt__fileno equ <_imp___fileno>

    externdef _imp___findclose:PTR cdef
    crt__findclose equ <_imp___findclose>

    externdef _imp___findfirst:PTR cdef
    crt__findfirst equ <_imp___findfirst>

    externdef _imp___findfirst64:PTR cdef
    crt__findfirst64 equ <_imp___findfirst64>

    externdef _imp___findfirsti64:PTR cdef
    crt__findfirsti64 equ <_imp___findfirsti64>

    externdef _imp___findnext:PTR cdef
    crt__findnext equ <_imp___findnext>

    externdef _imp___findnext64:PTR cdef
    crt__findnext64 equ <_imp___findnext64>

    externdef _imp___findnexti64:PTR cdef
    crt__findnexti64 equ <_imp___findnexti64>

    externdef _imp___finite:PTR cdef
    crt__finite equ <_imp___finite>

    externdef _imp___flsbuf:PTR cdef
    crt__flsbuf equ <_imp___flsbuf>

    externdef _imp___flushall:PTR cdef
    crt__flushall equ <_imp___flushall>

    externdef _imp___fmode:PTR cdef
    crt__fmode equ <_imp___fmode>

    externdef _imp___fpclass:PTR cdef
    crt__fpclass equ <_imp___fpclass>

    externdef _imp___fpieee_flt:PTR cdef
    crt__fpieee_flt equ <_imp___fpieee_flt>

    externdef _imp___fpreset:PTR cdef
    crt__fpreset equ <_imp___fpreset>

    externdef _imp___fputchar:PTR cdef
    crt__fputchar equ <_imp___fputchar>

    externdef _imp___fputwchar:PTR cdef
    crt__fputwchar equ <_imp___fputwchar>

    externdef _imp___fsopen:PTR cdef
    crt__fsopen equ <_imp___fsopen>

    externdef _imp___fstat:PTR cdef
    crt__fstat equ <_imp___fstat>

    externdef _imp___fstat64:PTR cdef
    crt__fstat64 equ <_imp___fstat64>

    externdef _imp___fstati64:PTR cdef
    crt__fstati64 equ <_imp___fstati64>

    externdef _imp___ftime:PTR cdef
    crt__ftime equ <_imp___ftime>

    externdef _imp___ftime64:PTR cdef
    crt__ftime64 equ <_imp___ftime64>

    externdef _imp___ftol:PTR cdef
    crt__ftol equ <_imp___ftol>

    externdef _imp___fullpath:PTR cdef
    crt__fullpath equ <_imp___fullpath>

    externdef _imp___futime:PTR cdef
    crt__futime equ <_imp___futime>

    externdef _imp___futime64:PTR cdef
    crt__futime64 equ <_imp___futime64>

    externdef _imp___gcvt:PTR cdef
    crt__gcvt equ <_imp___gcvt>

    externdef _imp___get_heap_handle:PTR cdef
    crt__get_heap_handle equ <_imp___get_heap_handle>

    externdef _imp___get_osfhandle:PTR cdef
    crt__get_osfhandle equ <_imp___get_osfhandle>

    externdef _imp___get_sbh_threshold:PTR cdef
    crt__get_sbh_threshold equ <_imp___get_sbh_threshold>

    externdef _imp___getch:PTR cdef
    crt__getch equ <_imp___getch>

    externdef _imp___getche:PTR cdef
    crt__getche equ <_imp___getche>

    externdef _imp___getcwd:PTR cdef
    crt__getcwd equ <_imp___getcwd>

    externdef _imp___getdcwd:PTR cdef
    crt__getdcwd equ <_imp___getdcwd>

    externdef _imp___getdiskfree:PTR cdef
    crt__getdiskfree equ <_imp___getdiskfree>

    externdef _imp___getdllprocaddr:PTR cdef
    crt__getdllprocaddr equ <_imp___getdllprocaddr>

    externdef _imp___getdrive:PTR cdef
    crt__getdrive equ <_imp___getdrive>

    externdef _imp___getdrives:PTR cdef
    crt__getdrives equ <_imp___getdrives>

    externdef _imp___getmaxstdio:PTR cdef
    crt__getmaxstdio equ <_imp___getmaxstdio>

    externdef _imp___getmbcp:PTR cdef
    crt__getmbcp equ <_imp___getmbcp>

    externdef _imp___getpid:PTR cdef
    crt__getpid equ <_imp___getpid>

    externdef _imp___getsystime:PTR cdef
    crt__getsystime equ <_imp___getsystime>

    externdef _imp___getw:PTR cdef
    crt__getw equ <_imp___getw>

    externdef _imp___getws:PTR cdef
    crt__getws equ <_imp___getws>

    externdef _imp___global_unwind2:PTR cdef
    crt__global_unwind2 equ <_imp___global_unwind2>

    externdef _imp___gmtime64:PTR cdef
    crt__gmtime64 equ <_imp___gmtime64>

    externdef _imp___heapadd:PTR cdef
    crt__heapadd equ <_imp___heapadd>

    externdef _imp___heapchk:PTR cdef
    crt__heapchk equ <_imp___heapchk>

    externdef _imp___heapmin:PTR cdef
    crt__heapmin equ <_imp___heapmin>

    externdef _imp___heapset:PTR cdef
    crt__heapset equ <_imp___heapset>

    externdef _imp___heapused:PTR cdef
    crt__heapused equ <_imp___heapused>

    externdef _imp___heapwalk:PTR cdef
    crt__heapwalk equ <_imp___heapwalk>

    externdef _imp___hypot:PTR cdef
    crt__hypot equ <_imp___hypot>

    externdef _imp___i64toa:PTR cdef
    crt__i64toa equ <_imp___i64toa>

    externdef _imp___i64tow:PTR cdef
    crt__i64tow equ <_imp___i64tow>

    externdef _imp___initterm:PTR cdef
    crt__initterm equ <_imp___initterm>

    externdef _imp___inp:PTR cdef
    crt__inp equ <_imp___inp>

    externdef _imp___inpd:PTR cdef
    crt__inpd equ <_imp___inpd>

    externdef _imp___inpw:PTR cdef
    crt__inpw equ <_imp___inpw>

    externdef _imp___iob:PTR cdef
    crt__iob equ <_imp___iob>

    externdef _imp___isatty:PTR cdef
    crt__isatty equ <_imp___isatty>

    externdef _imp___isctype:PTR cdef
    crt__isctype equ <_imp___isctype>

    externdef _imp___ismbbalnum:PTR cdef
    crt__ismbbalnum equ <_imp___ismbbalnum>

    externdef _imp___ismbbalpha:PTR cdef
    crt__ismbbalpha equ <_imp___ismbbalpha>

    externdef _imp___ismbbgraph:PTR cdef
    crt__ismbbgraph equ <_imp___ismbbgraph>

    externdef _imp___ismbbkalnum:PTR cdef
    crt__ismbbkalnum equ <_imp___ismbbkalnum>

    externdef _imp___ismbbkana:PTR cdef
    crt__ismbbkana equ <_imp___ismbbkana>

    externdef _imp___ismbbkprint:PTR cdef
    crt__ismbbkprint equ <_imp___ismbbkprint>

    externdef _imp___ismbbkpunct:PTR cdef
    crt__ismbbkpunct equ <_imp___ismbbkpunct>

    externdef _imp___ismbblead:PTR cdef
    crt__ismbblead equ <_imp___ismbblead>

    externdef _imp___ismbbprint:PTR cdef
    crt__ismbbprint equ <_imp___ismbbprint>

    externdef _imp___ismbbpunct:PTR cdef
    crt__ismbbpunct equ <_imp___ismbbpunct>

    externdef _imp___ismbbtrail:PTR cdef
    crt__ismbbtrail equ <_imp___ismbbtrail>

    externdef _imp___ismbcalnum:PTR cdef
    crt__ismbcalnum equ <_imp___ismbcalnum>

    externdef _imp___ismbcalpha:PTR cdef
    crt__ismbcalpha equ <_imp___ismbcalpha>

    externdef _imp___ismbcdigit:PTR cdef
    crt__ismbcdigit equ <_imp___ismbcdigit>

    externdef _imp___ismbcgraph:PTR cdef
    crt__ismbcgraph equ <_imp___ismbcgraph>

    externdef _imp___ismbchira:PTR cdef
    crt__ismbchira equ <_imp___ismbchira>

    externdef _imp___ismbckata:PTR cdef
    crt__ismbckata equ <_imp___ismbckata>

    externdef _imp___ismbcl0:PTR cdef
    crt__ismbcl0 equ <_imp___ismbcl0>

    externdef _imp___ismbcl1:PTR cdef
    crt__ismbcl1 equ <_imp___ismbcl1>

    externdef _imp___ismbcl2:PTR cdef
    crt__ismbcl2 equ <_imp___ismbcl2>

    externdef _imp___ismbclegal:PTR cdef
    crt__ismbclegal equ <_imp___ismbclegal>

    externdef _imp___ismbclower:PTR cdef
    crt__ismbclower equ <_imp___ismbclower>

    externdef _imp___ismbcprint:PTR cdef
    crt__ismbcprint equ <_imp___ismbcprint>

    externdef _imp___ismbcpunct:PTR cdef
    crt__ismbcpunct equ <_imp___ismbcpunct>

    externdef _imp___ismbcspace:PTR cdef
    crt__ismbcspace equ <_imp___ismbcspace>

    externdef _imp___ismbcsymbol:PTR cdef
    crt__ismbcsymbol equ <_imp___ismbcsymbol>

    externdef _imp___ismbcupper:PTR cdef
    crt__ismbcupper equ <_imp___ismbcupper>

    externdef _imp___ismbslead:PTR cdef
    crt__ismbslead equ <_imp___ismbslead>

    externdef _imp___ismbstrail:PTR cdef
    crt__ismbstrail equ <_imp___ismbstrail>

    externdef _imp___isnan:PTR cdef
    crt__isnan equ <_imp___isnan>

    externdef _imp___itoa:PTR cdef
    crt__itoa equ <_imp___itoa>

    externdef _imp___itow:PTR cdef
    crt__itow equ <_imp___itow>

    externdef _imp___j0:PTR cdef
    crt__j0 equ <_imp___j0>

    externdef _imp___j1:PTR cdef
    crt__j1 equ <_imp___j1>

    externdef _imp___jn:PTR cdef
    crt__jn equ <_imp___jn>

    externdef _imp___kbhit:PTR cdef
    crt__kbhit equ <_imp___kbhit>

    externdef _imp___lfind:PTR cdef
    crt__lfind equ <_imp___lfind>

    externdef _imp___loaddll:PTR cdef
    crt__loaddll equ <_imp___loaddll>

    externdef _imp___local_unwind2:PTR cdef
    crt__local_unwind2 equ <_imp___local_unwind2>

    externdef _imp___localtime64:PTR cdef
    crt__localtime64 equ <_imp___localtime64>

    externdef _imp___lock:PTR cdef
    crt__lock equ <_imp___lock>

    externdef _imp___locking:PTR cdef
    crt__locking equ <_imp___locking>

    externdef _imp___logb:PTR cdef
    crt__logb equ <_imp___logb>

    externdef _imp___longjmpex:PTR cdef
    crt__longjmpex equ <_imp___longjmpex>

    externdef _imp___lrotl:PTR cdef
    crt__lrotl equ <_imp___lrotl>

    externdef _imp___lrotr:PTR cdef
    crt__lrotr equ <_imp___lrotr>

    externdef _imp___lsearch:PTR cdef
    crt__lsearch equ <_imp___lsearch>

    externdef _imp___lseek:PTR cdef
    crt__lseek equ <_imp___lseek>

    externdef _imp___lseeki64:PTR cdef
    crt__lseeki64 equ <_imp___lseeki64>

    externdef _imp___ltoa:PTR cdef
    crt__ltoa equ <_imp___ltoa>

    externdef _imp___ltow:PTR cdef
    crt__ltow equ <_imp___ltow>

    externdef _imp___makepath:PTR cdef
    crt__makepath equ <_imp___makepath>

    externdef _imp___mbbtombc:PTR cdef
    crt__mbbtombc equ <_imp___mbbtombc>

    externdef _imp___mbbtype:PTR cdef
    crt__mbbtype equ <_imp___mbbtype>

    externdef _imp___mbcasemap:PTR cdef
    crt__mbcasemap equ <_imp___mbcasemap>

    externdef _imp___mbccpy:PTR cdef
    crt__mbccpy equ <_imp___mbccpy>

    externdef _imp___mbcjistojms:PTR cdef
    crt__mbcjistojms equ <_imp___mbcjistojms>

    externdef _imp___mbcjmstojis:PTR cdef
    crt__mbcjmstojis equ <_imp___mbcjmstojis>

    externdef _imp___mbclen:PTR cdef
    crt__mbclen equ <_imp___mbclen>

    externdef _imp___mbctohira:PTR cdef
    crt__mbctohira equ <_imp___mbctohira>

    externdef _imp___mbctokata:PTR cdef
    crt__mbctokata equ <_imp___mbctokata>

    externdef _imp___mbctolower:PTR cdef
    crt__mbctolower equ <_imp___mbctolower>

    externdef _imp___mbctombb:PTR cdef
    crt__mbctombb equ <_imp___mbctombb>

    externdef _imp___mbctoupper:PTR cdef
    crt__mbctoupper equ <_imp___mbctoupper>

    externdef _imp___mbctype:PTR cdef
    crt__mbctype equ <_imp___mbctype>

    externdef _imp___mbsbtype:PTR cdef
    crt__mbsbtype equ <_imp___mbsbtype>

    externdef _imp___mbscat:PTR cdef
    crt__mbscat equ <_imp___mbscat>

    externdef _imp___mbschr:PTR cdef
    crt__mbschr equ <_imp___mbschr>

    externdef _imp___mbscmp:PTR cdef
    crt__mbscmp equ <_imp___mbscmp>

    externdef _imp___mbscoll:PTR cdef
    crt__mbscoll equ <_imp___mbscoll>

    externdef _imp___mbscpy:PTR cdef
    crt__mbscpy equ <_imp___mbscpy>

    externdef _imp___mbscspn:PTR cdef
    crt__mbscspn equ <_imp___mbscspn>

    externdef _imp___mbsdec:PTR cdef
    crt__mbsdec equ <_imp___mbsdec>

    externdef _imp___mbsdup:PTR cdef
    crt__mbsdup equ <_imp___mbsdup>

    externdef _imp___mbsicmp:PTR cdef
    crt__mbsicmp equ <_imp___mbsicmp>

    externdef _imp___mbsicoll:PTR cdef
    crt__mbsicoll equ <_imp___mbsicoll>

    externdef _imp___mbsinc:PTR cdef
    crt__mbsinc equ <_imp___mbsinc>

    externdef _imp___mbslen:PTR cdef
    crt__mbslen equ <_imp___mbslen>

    externdef _imp___mbslwr:PTR cdef
    crt__mbslwr equ <_imp___mbslwr>

    externdef _imp___mbsnbcat:PTR cdef
    crt__mbsnbcat equ <_imp___mbsnbcat>

    externdef _imp___mbsnbcmp:PTR cdef
    crt__mbsnbcmp equ <_imp___mbsnbcmp>

    externdef _imp___mbsnbcnt:PTR cdef
    crt__mbsnbcnt equ <_imp___mbsnbcnt>

    externdef _imp___mbsnbcoll:PTR cdef
    crt__mbsnbcoll equ <_imp___mbsnbcoll>

    externdef _imp___mbsnbcpy:PTR cdef
    crt__mbsnbcpy equ <_imp___mbsnbcpy>

    externdef _imp___mbsnbicmp:PTR cdef
    crt__mbsnbicmp equ <_imp___mbsnbicmp>

    externdef _imp___mbsnbicoll:PTR cdef
    crt__mbsnbicoll equ <_imp___mbsnbicoll>

    externdef _imp___mbsnbset:PTR cdef
    crt__mbsnbset equ <_imp___mbsnbset>

    externdef _imp___mbsncat:PTR cdef
    crt__mbsncat equ <_imp___mbsncat>

    externdef _imp___mbsnccnt:PTR cdef
    crt__mbsnccnt equ <_imp___mbsnccnt>

    externdef _imp___mbsncmp:PTR cdef
    crt__mbsncmp equ <_imp___mbsncmp>

    externdef _imp___mbsncoll:PTR cdef
    crt__mbsncoll equ <_imp___mbsncoll>

    externdef _imp___mbsncpy:PTR cdef
    crt__mbsncpy equ <_imp___mbsncpy>

    externdef _imp___mbsnextc:PTR cdef
    crt__mbsnextc equ <_imp___mbsnextc>

    externdef _imp___mbsnicmp:PTR cdef
    crt__mbsnicmp equ <_imp___mbsnicmp>

    externdef _imp___mbsnicoll:PTR cdef
    crt__mbsnicoll equ <_imp___mbsnicoll>

    externdef _imp___mbsninc:PTR cdef
    crt__mbsninc equ <_imp___mbsninc>

    externdef _imp___mbsnset:PTR cdef
    crt__mbsnset equ <_imp___mbsnset>

    externdef _imp___mbspbrk:PTR cdef
    crt__mbspbrk equ <_imp___mbspbrk>

    externdef _imp___mbsrchr:PTR cdef
    crt__mbsrchr equ <_imp___mbsrchr>

    externdef _imp___mbsrev:PTR cdef
    crt__mbsrev equ <_imp___mbsrev>

    externdef _imp___mbsset:PTR cdef
    crt__mbsset equ <_imp___mbsset>

    externdef _imp___mbsspn:PTR cdef
    crt__mbsspn equ <_imp___mbsspn>

    externdef _imp___mbsspnp:PTR cdef
    crt__mbsspnp equ <_imp___mbsspnp>

    externdef _imp___mbsstr:PTR cdef
    crt__mbsstr equ <_imp___mbsstr>

    externdef _imp___mbstok:PTR cdef
    crt__mbstok equ <_imp___mbstok>

    externdef _imp___mbstrlen:PTR cdef
    crt__mbstrlen equ <_imp___mbstrlen>

    externdef _imp___mbsupr:PTR cdef
    crt__mbsupr equ <_imp___mbsupr>

    externdef _imp___memccpy:PTR cdef
    crt__memccpy equ <_imp___memccpy>

    externdef _imp___memicmp:PTR cdef
    crt__memicmp equ <_imp___memicmp>

    externdef _imp___mkdir:PTR cdef
    crt__mkdir equ <_imp___mkdir>

    externdef _imp___mktemp:PTR cdef
    crt__mktemp equ <_imp___mktemp>

    externdef _imp___mktime64:PTR cdef
    crt__mktime64 equ <_imp___mktime64>

    externdef _imp___msize:PTR cdef
    crt__msize equ <_imp___msize>

    externdef _imp___nextafter:PTR cdef
    crt__nextafter equ <_imp___nextafter>

    externdef _imp___onexit:PTR cdef
    crt__onexit equ <_imp___onexit>

    externdef _imp___open:PTR cdef
    crt__open equ <_imp___open>

    externdef _imp___open_osfhandle:PTR cdef
    crt__open_osfhandle equ <_imp___open_osfhandle>

    externdef _imp___osplatform:PTR cdef
    crt__osplatform equ <_imp___osplatform>

    externdef _imp___osver:PTR cdef
    crt__osver equ <_imp___osver>

    externdef _imp___outp:PTR cdef
    crt__outp equ <_imp___outp>

    externdef _imp___outpd:PTR cdef
    crt__outpd equ <_imp___outpd>

    externdef _imp___outpw:PTR cdef
    crt__outpw equ <_imp___outpw>

    externdef _imp___pclose:PTR cdef
    crt__pclose equ <_imp___pclose>

    externdef _imp___pctype:PTR cdef
    crt__pctype equ <_imp___pctype>

    externdef _imp___pgmptr:PTR cdef
    crt__pgmptr equ <_imp___pgmptr>

    externdef _imp___pipe:PTR cdef
    crt__pipe equ <_imp___pipe>

    externdef _imp___popen:PTR cdef
    crt__popen equ <_imp___popen>

    externdef _imp___purecall:PTR cdef
    crt__purecall equ <_imp___purecall>

    externdef _imp___putch:PTR cdef
    crt__putch equ <_imp___putch>

    externdef _imp___putenv:PTR cdef
    crt__putenv equ <_imp___putenv>

    externdef _imp___putw:PTR cdef
    crt__putw equ <_imp___putw>

    externdef _imp___putws:PTR cdef
    crt__putws equ <_imp___putws>

    externdef _imp___pwctype:PTR cdef
    crt__pwctype equ <_imp___pwctype>

    externdef _imp___read:PTR cdef
    crt__read equ <_imp___read>

    externdef _imp___rmdir:PTR cdef
    crt__rmdir equ <_imp___rmdir>

    externdef _imp___rmtmp:PTR cdef
    crt__rmtmp equ <_imp___rmtmp>

    externdef _imp___rotl:PTR cdef
    crt__rotl equ <_imp___rotl>

    externdef _imp___rotr:PTR cdef
    crt__rotr equ <_imp___rotr>

    externdef _imp___safe_fdiv:PTR cdef
    crt__safe_fdiv equ <_imp___safe_fdiv>

    externdef _imp___safe_fdivr:PTR cdef
    crt__safe_fdivr equ <_imp___safe_fdivr>

    externdef _imp___safe_fprem:PTR cdef
    crt__safe_fprem equ <_imp___safe_fprem>

    externdef _imp___safe_fprem1:PTR cdef
    crt__safe_fprem1 equ <_imp___safe_fprem1>

    externdef _imp___scalb:PTR cdef
    crt__scalb equ <_imp___scalb>

    externdef _imp___searchenv:PTR cdef
    crt__searchenv equ <_imp___searchenv>

    externdef _imp___seh_longjmp_unwind:PTR cdef
    crt__seh_longjmp_unwind equ <_imp___seh_longjmp_unwind>

    externdef _imp___set_error_mode:PTR cdef
    crt__set_error_mode equ <_imp___set_error_mode>

    externdef _imp___set_sbh_threshold:PTR cdef
    crt__set_sbh_threshold equ <_imp___set_sbh_threshold>

    externdef _imp___seterrormode:PTR cdef
    crt__seterrormode equ <_imp___seterrormode>

    externdef _imp___setjmp:PTR cdef
    crt__setjmp equ <_imp___setjmp>

    externdef _imp___setjmp3:PTR cdef
    crt__setjmp3 equ <_imp___setjmp3>

    externdef _imp___setmaxstdio:PTR cdef
    crt__setmaxstdio equ <_imp___setmaxstdio>

    externdef _imp___setmbcp:PTR cdef
    crt__setmbcp equ <_imp___setmbcp>

    externdef _imp___setmode:PTR cdef
    crt__setmode equ <_imp___setmode>

    externdef _imp___setsystime:PTR cdef
    crt__setsystime equ <_imp___setsystime>

    externdef _imp___sleep:PTR cdef
    crt__sleep equ <_imp___sleep>

    externdef _imp___snprintf:PTR cdef
    crt__snprintf equ <_imp___snprintf>

    externdef _imp___snwprintf:PTR cdef
    crt__snwprintf equ <_imp___snwprintf>

    externdef _imp___sopen:PTR cdef
    crt__sopen equ <_imp___sopen>

    externdef _imp___spawnl:PTR cdef
    crt__spawnl equ <_imp___spawnl>

    externdef _imp___spawnle:PTR cdef
    crt__spawnle equ <_imp___spawnle>

    externdef _imp___spawnlp:PTR cdef
    crt__spawnlp equ <_imp___spawnlp>

    externdef _imp___spawnlpe:PTR cdef
    crt__spawnlpe equ <_imp___spawnlpe>

    externdef _imp___spawnv:PTR cdef
    crt__spawnv equ <_imp___spawnv>

    externdef _imp___spawnve:PTR cdef
    crt__spawnve equ <_imp___spawnve>

    externdef _imp___spawnvp:PTR cdef
    crt__spawnvp equ <_imp___spawnvp>

    externdef _imp___spawnvpe:PTR cdef
    crt__spawnvpe equ <_imp___spawnvpe>

    externdef _imp___splitpath:PTR cdef
    crt__splitpath equ <_imp___splitpath>

    externdef _imp___stat:PTR cdef
    crt__stat equ <_imp___stat>

    externdef _imp___stat64:PTR cdef
    crt__stat64 equ <_imp___stat64>

    externdef _imp___stati64:PTR cdef
    crt__stati64 equ <_imp___stati64>

    externdef _imp___statusfp:PTR cdef
    crt__statusfp equ <_imp___statusfp>

    externdef _imp___strcmpi:PTR cdef
    crt__strcmpi equ <_imp___strcmpi>

    externdef _imp___strdate:PTR cdef
    crt__strdate equ <_imp___strdate>

    externdef _imp___strdup:PTR cdef
    crt__strdup equ <_imp___strdup>

    externdef _imp___strerror:PTR cdef
    crt__strerror equ <_imp___strerror>

    externdef _imp___stricmp:PTR cdef
    crt__stricmp equ <_imp___stricmp>

    externdef _imp___stricoll:PTR cdef
    crt__stricoll equ <_imp___stricoll>

    externdef _imp___strlwr:PTR cdef
    crt__strlwr equ <_imp___strlwr>

    externdef _imp___strncoll:PTR cdef
    crt__strncoll equ <_imp___strncoll>

    externdef _imp___strnicmp:PTR cdef
    crt__strnicmp equ <_imp___strnicmp>

    externdef _imp___strnicoll:PTR cdef
    crt__strnicoll equ <_imp___strnicoll>

    externdef _imp___strnset:PTR cdef
    crt__strnset equ <_imp___strnset>

    externdef _imp___strrev:PTR cdef
    crt__strrev equ <_imp___strrev>

    externdef _imp___strset:PTR cdef
    crt__strset equ <_imp___strset>

    externdef _imp___strtime:PTR cdef
    crt__strtime equ <_imp___strtime>

    externdef _imp___strupr:PTR cdef
    crt__strupr equ <_imp___strupr>

    externdef _imp___swab:PTR cdef
    crt__swab equ <_imp___swab>

    externdef _imp___sys_errlist:PTR cdef
    crt__sys_errlist equ <_imp___sys_errlist>

    externdef _imp___sys_nerr:PTR cdef
    crt__sys_nerr equ <_imp___sys_nerr>

    externdef _imp___tell:PTR cdef
    crt__tell equ <_imp___tell>

    externdef _imp___telli64:PTR cdef
    crt__telli64 equ <_imp___telli64>

    externdef _imp___tempnam:PTR cdef
    crt__tempnam equ <_imp___tempnam>

    externdef _imp___time64:PTR cdef
    crt__time64 equ <_imp___time64>

    externdef _imp___timezone:PTR cdef
    crt__timezone equ <_imp___timezone>

    externdef _imp___tolower:PTR cdef
    crt__tolower equ <_imp___tolower>

    externdef _imp___toupper:PTR cdef
    crt__toupper equ <_imp___toupper>

    externdef _imp___tzname:PTR cdef
    crt__tzname equ <_imp___tzname>

    externdef _imp___tzset:PTR cdef
    crt__tzset equ <_imp___tzset>

    externdef _imp___ui64toa:PTR cdef
    crt__ui64toa equ <_imp___ui64toa>

    externdef _imp___ui64tow:PTR cdef
    crt__ui64tow equ <_imp___ui64tow>

    externdef _imp___ultoa:PTR cdef
    crt__ultoa equ <_imp___ultoa>

    externdef _imp___ultow:PTR cdef
    crt__ultow equ <_imp___ultow>

    externdef _imp___umask:PTR cdef
    crt__umask equ <_imp___umask>

    externdef _imp___ungetch:PTR cdef
    crt__ungetch equ <_imp___ungetch>

    externdef _imp___unlink:PTR cdef
    crt__unlink equ <_imp___unlink>

    externdef _imp___unloaddll:PTR cdef
    crt__unloaddll equ <_imp___unloaddll>

    externdef _imp___unlock:PTR cdef
    crt__unlock equ <_imp___unlock>

    externdef _imp___utime:PTR cdef
    crt__utime equ <_imp___utime>

    externdef _imp___utime64:PTR cdef
    crt__utime64 equ <_imp___utime64>

    externdef _imp___vsnprintf:PTR cdef
    crt__vsnprintf equ <_imp___vsnprintf>

    externdef _imp___vsnwprintf:PTR cdef
    crt__vsnwprintf equ <_imp___vsnwprintf>

    externdef _imp___waccess:PTR cdef
    crt__waccess equ <_imp___waccess>

    externdef _imp___wasctime:PTR cdef
    crt__wasctime equ <_imp___wasctime>

    externdef _imp___wchdir:PTR cdef
    crt__wchdir equ <_imp___wchdir>

    externdef _imp___wchmod:PTR cdef
    crt__wchmod equ <_imp___wchmod>

    externdef _imp___wcmdln:PTR cdef
    crt__wcmdln equ <_imp___wcmdln>

    externdef _imp___wcreat:PTR cdef
    crt__wcreat equ <_imp___wcreat>

    externdef _imp___wcsdup:PTR cdef
    crt__wcsdup equ <_imp___wcsdup>

    externdef _imp___wcsicmp:PTR cdef
    crt__wcsicmp equ <_imp___wcsicmp>

    externdef _imp___wcsicoll:PTR cdef
    crt__wcsicoll equ <_imp___wcsicoll>

    externdef _imp___wcslwr:PTR cdef
    crt__wcslwr equ <_imp___wcslwr>

    externdef _imp___wcsncoll:PTR cdef
    crt__wcsncoll equ <_imp___wcsncoll>

    externdef _imp___wcsnicmp:PTR cdef
    crt__wcsnicmp equ <_imp___wcsnicmp>

    externdef _imp___wcsnicoll:PTR cdef
    crt__wcsnicoll equ <_imp___wcsnicoll>

    externdef _imp___wcsnset:PTR cdef
    crt__wcsnset equ <_imp___wcsnset>

    externdef _imp___wcsrev:PTR cdef
    crt__wcsrev equ <_imp___wcsrev>

    externdef _imp___wcsset:PTR cdef
    crt__wcsset equ <_imp___wcsset>

    externdef _imp___wcsupr:PTR cdef
    crt__wcsupr equ <_imp___wcsupr>

    externdef _imp___wctime:PTR cdef
    crt__wctime equ <_imp___wctime>

    externdef _imp___wctime64:PTR cdef
    crt__wctime64 equ <_imp___wctime64>

    externdef _imp___wenviron:PTR cdef
    crt__wenviron equ <_imp___wenviron>

    externdef _imp___wexecl:PTR cdef
    crt__wexecl equ <_imp___wexecl>

    externdef _imp___wexecle:PTR cdef
    crt__wexecle equ <_imp___wexecle>

    externdef _imp___wexeclp:PTR cdef
    crt__wexeclp equ <_imp___wexeclp>

    externdef _imp___wexeclpe:PTR cdef
    crt__wexeclpe equ <_imp___wexeclpe>

    externdef _imp___wexecv:PTR cdef
    crt__wexecv equ <_imp___wexecv>

    externdef _imp___wexecve:PTR cdef
    crt__wexecve equ <_imp___wexecve>

    externdef _imp___wexecvp:PTR cdef
    crt__wexecvp equ <_imp___wexecvp>

    externdef _imp___wexecvpe:PTR cdef
    crt__wexecvpe equ <_imp___wexecvpe>

    externdef _imp___wfdopen:PTR cdef
    crt__wfdopen equ <_imp___wfdopen>

    externdef _imp___wfindfirst:PTR cdef
    crt__wfindfirst equ <_imp___wfindfirst>

    externdef _imp___wfindfirst64:PTR cdef
    crt__wfindfirst64 equ <_imp___wfindfirst64>

    externdef _imp___wfindfirsti64:PTR cdef
    crt__wfindfirsti64 equ <_imp___wfindfirsti64>

    externdef _imp___wfindnext:PTR cdef
    crt__wfindnext equ <_imp___wfindnext>

    externdef _imp___wfindnext64:PTR cdef
    crt__wfindnext64 equ <_imp___wfindnext64>

    externdef _imp___wfindnexti64:PTR cdef
    crt__wfindnexti64 equ <_imp___wfindnexti64>

    externdef _imp___wfopen:PTR cdef
    crt__wfopen equ <_imp___wfopen>

    externdef _imp___wfreopen:PTR cdef
    crt__wfreopen equ <_imp___wfreopen>

    externdef _imp___wfsopen:PTR cdef
    crt__wfsopen equ <_imp___wfsopen>

    externdef _imp___wfullpath:PTR cdef
    crt__wfullpath equ <_imp___wfullpath>

    externdef _imp___wgetcwd:PTR cdef
    crt__wgetcwd equ <_imp___wgetcwd>

    externdef _imp___wgetdcwd:PTR cdef
    crt__wgetdcwd equ <_imp___wgetdcwd>

    externdef _imp___wgetenv:PTR cdef
    crt__wgetenv equ <_imp___wgetenv>

    externdef _imp___winmajor:PTR cdef
    crt__winmajor equ <_imp___winmajor>

    externdef _imp___winminor:PTR cdef
    crt__winminor equ <_imp___winminor>

    externdef _imp___winver:PTR cdef
    crt__winver equ <_imp___winver>

    externdef _imp___wmakepath:PTR cdef
    crt__wmakepath equ <_imp___wmakepath>

    externdef _imp___wmkdir:PTR cdef
    crt__wmkdir equ <_imp___wmkdir>

    externdef _imp___wmktemp:PTR cdef
    crt__wmktemp equ <_imp___wmktemp>

    externdef _imp___wopen:PTR cdef
    crt__wopen equ <_imp___wopen>

    externdef _imp___wperror:PTR cdef
    crt__wperror equ <_imp___wperror>

    externdef _imp___wpgmptr:PTR cdef
    crt__wpgmptr equ <_imp___wpgmptr>

    externdef _imp___wpopen:PTR cdef
    crt__wpopen equ <_imp___wpopen>

    externdef _imp___wputenv:PTR cdef
    crt__wputenv equ <_imp___wputenv>

    externdef _imp___wremove:PTR cdef
    crt__wremove equ <_imp___wremove>

    externdef _imp___wrename:PTR cdef
    crt__wrename equ <_imp___wrename>

    externdef _imp___write:PTR cdef
    crt__write equ <_imp___write>

    externdef _imp___wrmdir:PTR cdef
    crt__wrmdir equ <_imp___wrmdir>

    externdef _imp___wsearchenv:PTR cdef
    crt__wsearchenv equ <_imp___wsearchenv>

    externdef _imp___wsetlocale:PTR cdef
    crt__wsetlocale equ <_imp___wsetlocale>

    externdef _imp___wsopen:PTR cdef
    crt__wsopen equ <_imp___wsopen>

    externdef _imp___wspawnl:PTR cdef
    crt__wspawnl equ <_imp___wspawnl>

    externdef _imp___wspawnle:PTR cdef
    crt__wspawnle equ <_imp___wspawnle>

    externdef _imp___wspawnlp:PTR cdef
    crt__wspawnlp equ <_imp___wspawnlp>

    externdef _imp___wspawnlpe:PTR cdef
    crt__wspawnlpe equ <_imp___wspawnlpe>

    externdef _imp___wspawnv:PTR cdef
    crt__wspawnv equ <_imp___wspawnv>

    externdef _imp___wspawnve:PTR cdef
    crt__wspawnve equ <_imp___wspawnve>

    externdef _imp___wspawnvp:PTR cdef
    crt__wspawnvp equ <_imp___wspawnvp>

    externdef _imp___wspawnvpe:PTR cdef
    crt__wspawnvpe equ <_imp___wspawnvpe>

    externdef _imp___wsplitpath:PTR cdef
    crt__wsplitpath equ <_imp___wsplitpath>

    externdef _imp___wstat:PTR cdef
    crt__wstat equ <_imp___wstat>

    externdef _imp___wstat64:PTR cdef
    crt__wstat64 equ <_imp___wstat64>

    externdef _imp___wstati64:PTR cdef
    crt__wstati64 equ <_imp___wstati64>

    externdef _imp___wstrdate:PTR cdef
    crt__wstrdate equ <_imp___wstrdate>

    externdef _imp___wstrtime:PTR cdef
    crt__wstrtime equ <_imp___wstrtime>

    externdef _imp___wsystem:PTR cdef
    crt__wsystem equ <_imp___wsystem>

    externdef _imp___wtempnam:PTR cdef
    crt__wtempnam equ <_imp___wtempnam>

    externdef _imp___wtmpnam:PTR cdef
    crt__wtmpnam equ <_imp___wtmpnam>

    externdef _imp___wtoi:PTR cdef
    crt__wtoi equ <_imp___wtoi>

    externdef _imp___wtoi64:PTR cdef
    crt__wtoi64 equ <_imp___wtoi64>

    externdef _imp___wtol:PTR cdef
    crt__wtol equ <_imp___wtol>

    externdef _imp___wunlink:PTR cdef
    crt__wunlink equ <_imp___wunlink>

    externdef _imp___wutime:PTR cdef
    crt__wutime equ <_imp___wutime>

    externdef _imp___wutime64:PTR cdef
    crt__wutime64 equ <_imp___wutime64>

    externdef _imp___y0:PTR cdef
    crt__y0 equ <_imp___y0>

    externdef _imp___y1:PTR cdef
    crt__y1 equ <_imp___y1>

    externdef _imp___yn:PTR cdef
    crt__yn equ <_imp___yn>

    externdef _imp__abort:PTR cdef
    crt_abort equ <_imp__abort>

    externdef _imp__abs:PTR cdef
    crt_abs equ <_imp__abs>

    externdef _imp__acos:PTR cdef
    crt_acos equ <_imp__acos>

    externdef _imp__asctime:PTR cdef
    crt_asctime equ <_imp__asctime>

    externdef _imp__asin:PTR cdef
    crt_asin equ <_imp__asin>

    externdef _imp__atan:PTR cdef
    crt_atan equ <_imp__atan>

    externdef _imp__atan2:PTR cdef
    crt_atan2 equ <_imp__atan2>

    externdef _imp__atexit:PTR cdef
    crt_atexit equ <_imp__atexit>

    externdef _imp__atof:PTR cdef
    crt_atof equ <_imp__atof>

    externdef _imp__atoi:PTR cdef
    crt_atoi equ <_imp__atoi>

    externdef _imp__atol:PTR cdef
    crt_atol equ <_imp__atol>

    externdef _imp__bsearch:PTR cdef
    crt_bsearch equ <_imp__bsearch>

    externdef _imp__calloc:PTR cdef
    crt_calloc equ <_imp__calloc>

    externdef _imp__ceil:PTR cdef
    crt_ceil equ <_imp__ceil>

    externdef _imp__clearerr:PTR cdef
    crt_clearerr equ <_imp__clearerr>

    externdef _imp__clock:PTR cdef
    crt_clock equ <_imp__clock>

    externdef _imp__cos:PTR cdef
    crt_cos equ <_imp__cos>

    externdef _imp__cosh:PTR cdef
    crt_cosh equ <_imp__cosh>

    externdef _imp__ctime:PTR cdef
    crt_ctime equ <_imp__ctime>

    externdef _imp__difftime:PTR cdef
    crt_difftime equ <_imp__difftime>

    externdef _imp__div:PTR cdef
    crt_div equ <_imp__div>

    externdef _imp__exit:PTR cdef
    crt_exit equ <_imp__exit>

    externdef _imp__exp:PTR cdef
    crt_exp equ <_imp__exp>

    externdef _imp__fabs:PTR cdef
    crt_fabs equ <_imp__fabs>

    externdef _imp__fclose:PTR cdef
    crt_fclose equ <_imp__fclose>

    externdef _imp__feof:PTR cdef
    crt_feof equ <_imp__feof>

    externdef _imp__ferror:PTR cdef
    crt_ferror equ <_imp__ferror>

    externdef _imp__fflush:PTR cdef
    crt_fflush equ <_imp__fflush>

    externdef _imp__fgetc:PTR cdef
    crt_fgetc equ <_imp__fgetc>

    externdef _imp__fgetpos:PTR cdef
    crt_fgetpos equ <_imp__fgetpos>

    externdef _imp__fgets:PTR cdef
    crt_fgets equ <_imp__fgets>

    externdef _imp__fgetwc:PTR cdef
    crt_fgetwc equ <_imp__fgetwc>

    externdef _imp__fgetws:PTR cdef
    crt_fgetws equ <_imp__fgetws>

    externdef _imp__floor:PTR cdef
    crt_floor equ <_imp__floor>

    externdef _imp__fmod:PTR cdef
    crt_fmod equ <_imp__fmod>

    externdef _imp__fopen:PTR cdef
    crt_fopen equ <_imp__fopen>

    externdef _imp__fprintf:PTR cdef
    crt_fprintf equ <_imp__fprintf>

    externdef _imp__fputc:PTR cdef
    crt_fputc equ <_imp__fputc>

    externdef _imp__fputs:PTR cdef
    crt_fputs equ <_imp__fputs>

    externdef _imp__fputwc:PTR cdef
    crt_fputwc equ <_imp__fputwc>

    externdef _imp__fputws:PTR cdef
    crt_fputws equ <_imp__fputws>

    externdef _imp__fread:PTR cdef
    crt_fread equ <_imp__fread>

    externdef _imp__free:PTR cdef
    crt_free equ <_imp__free>

    externdef _imp__freopen:PTR cdef
    crt_freopen equ <_imp__freopen>

    externdef _imp__frexp:PTR cdef
    crt_frexp equ <_imp__frexp>

    externdef _imp__fscanf:PTR cdef
    crt_fscanf equ <_imp__fscanf>

    externdef _imp__fseek:PTR cdef
    crt_fseek equ <_imp__fseek>

    externdef _imp__fsetpos:PTR cdef
    crt_fsetpos equ <_imp__fsetpos>

    externdef _imp__ftell:PTR cdef
    crt_ftell equ <_imp__ftell>

    externdef _imp__fwprintf:PTR cdef
    crt_fwprintf equ <_imp__fwprintf>

    externdef _imp__fwrite:PTR cdef
    crt_fwrite equ <_imp__fwrite>

    externdef _imp__fwscanf:PTR cdef
    crt_fwscanf equ <_imp__fwscanf>

    externdef _imp__getc:PTR cdef
    crt_getc equ <_imp__getc>

    externdef _imp__getchar:PTR cdef
    crt_getchar equ <_imp__getchar>

    externdef _imp__getenv:PTR cdef
    crt_getenv equ <_imp__getenv>

    externdef _imp__gets:PTR cdef
    crt_gets equ <_imp__gets>

    externdef _imp__getwc:PTR cdef
    crt_getwc equ <_imp__getwc>

    externdef _imp__getwchar:PTR cdef
    crt_getwchar equ <_imp__getwchar>

    externdef _imp__gmtime:PTR cdef
    crt_gmtime equ <_imp__gmtime>

    externdef _imp__is_wctype:PTR cdef
    crt_is_wctype equ <_imp__is_wctype>

    externdef _imp__isalnum:PTR cdef
    crt_isalnum equ <_imp__isalnum>

    externdef _imp__isalpha:PTR cdef
    crt_isalpha equ <_imp__isalpha>

    externdef _imp__iscntrl:PTR cdef
    crt_iscntrl equ <_imp__iscntrl>

    externdef _imp__isdigit:PTR cdef
    crt_isdigit equ <_imp__isdigit>

    externdef _imp__isgraph:PTR cdef
    crt_isgraph equ <_imp__isgraph>

    externdef _imp__isleadbyte:PTR cdef
    crt_isleadbyte equ <_imp__isleadbyte>

    externdef _imp__islower:PTR cdef
    crt_islower equ <_imp__islower>

    externdef _imp__isprint:PTR cdef
    crt_isprint equ <_imp__isprint>

    externdef _imp__ispunct:PTR cdef
    crt_ispunct equ <_imp__ispunct>

    externdef _imp__isspace:PTR cdef
    crt_isspace equ <_imp__isspace>

    externdef _imp__isupper:PTR cdef
    crt_isupper equ <_imp__isupper>

    externdef _imp__iswalnum:PTR cdef
    crt_iswalnum equ <_imp__iswalnum>

    externdef _imp__iswalpha:PTR cdef
    crt_iswalpha equ <_imp__iswalpha>

    externdef _imp__iswascii:PTR cdef
    crt_iswascii equ <_imp__iswascii>

    externdef _imp__iswcntrl:PTR cdef
    crt_iswcntrl equ <_imp__iswcntrl>

    externdef _imp__iswctype:PTR cdef
    crt_iswctype equ <_imp__iswctype>

    externdef _imp__iswdigit:PTR cdef
    crt_iswdigit equ <_imp__iswdigit>

    externdef _imp__iswgraph:PTR cdef
    crt_iswgraph equ <_imp__iswgraph>

    externdef _imp__iswlower:PTR cdef
    crt_iswlower equ <_imp__iswlower>

    externdef _imp__iswprint:PTR cdef
    crt_iswprint equ <_imp__iswprint>

    externdef _imp__iswpunct:PTR cdef
    crt_iswpunct equ <_imp__iswpunct>

    externdef _imp__iswspace:PTR cdef
    crt_iswspace equ <_imp__iswspace>

    externdef _imp__iswupper:PTR cdef
    crt_iswupper equ <_imp__iswupper>

    externdef _imp__iswxdigit:PTR cdef
    crt_iswxdigit equ <_imp__iswxdigit>

    externdef _imp__isxdigit:PTR cdef
    crt_isxdigit equ <_imp__isxdigit>

    externdef _imp__labs:PTR cdef
    crt_labs equ <_imp__labs>

    externdef _imp__ldexp:PTR cdef
    crt_ldexp equ <_imp__ldexp>

    externdef _imp__ldiv:PTR cdef
    crt_ldiv equ <_imp__ldiv>

    externdef _imp__localeconv:PTR cdef
    crt_localeconv equ <_imp__localeconv>

    externdef _imp__localtime:PTR cdef
    crt_localtime equ <_imp__localtime>

    externdef _imp__log:PTR cdef
    crt_log equ <_imp__log>

    externdef _imp__log10:PTR cdef
    crt_log10 equ <_imp__log10>

    externdef _imp__longjmp:PTR cdef
    crt_longjmp equ <_imp__longjmp>

    externdef _imp__malloc:PTR cdef
    crt_malloc equ <_imp__malloc>

    externdef _imp__mblen:PTR cdef
    crt_mblen equ <_imp__mblen>

    externdef _imp__mbstowcs:PTR cdef
    crt_mbstowcs equ <_imp__mbstowcs>

    externdef _imp__mbtowc:PTR cdef
    crt_mbtowc equ <_imp__mbtowc>

    externdef _imp__memchr:PTR cdef
    crt_memchr equ <_imp__memchr>

    externdef _imp__memcmp:PTR cdef
    crt_memcmp equ <_imp__memcmp>

    externdef _imp__memcpy:PTR cdef
    crt_memcpy equ <_imp__memcpy>

    externdef _imp__memmove:PTR cdef
    crt_memmove equ <_imp__memmove>

    externdef _imp__memset:PTR cdef
    crt_memset equ <_imp__memset>

    externdef _imp__mktime:PTR cdef
    crt_mktime equ <_imp__mktime>

    externdef _imp__modf:PTR cdef
    crt_modf equ <_imp__modf>

    externdef _imp__perror:PTR cdef
    crt_perror equ <_imp__perror>

    externdef _imp__pow:PTR cdef
    crt_pow equ <_imp__pow>

    externdef _imp__printf:PTR cdef
    crt_printf equ <_imp__printf>

    externdef _imp__putc:PTR cdef
    crt_putc equ <_imp__putc>

    externdef _imp__putchar:PTR cdef
    crt_putchar equ <_imp__putchar>

    externdef _imp__puts:PTR cdef
    crt_puts equ <_imp__puts>

    externdef _imp__putwc:PTR cdef
    crt_putwc equ <_imp__putwc>

    externdef _imp__putwchar:PTR cdef
    crt_putwchar equ <_imp__putwchar>

    externdef _imp__qsort:PTR cdef
    crt_qsort equ <_imp__qsort>

    externdef _imp__raise:PTR cdef
    crt_raise equ <_imp__raise>

    externdef _imp__rand:PTR cdef
    crt_rand equ <_imp__rand>

    externdef _imp__realloc:PTR cdef
    crt_realloc equ <_imp__realloc>

    externdef _imp__remove:PTR cdef
    crt_remove equ <_imp__remove>

    externdef _imp__rename:PTR cdef
    crt_rename equ <_imp__rename>

    externdef _imp__rewind:PTR cdef
    crt_rewind equ <_imp__rewind>

    externdef _imp__scanf:PTR cdef
    crt_scanf equ <_imp__scanf>

    externdef _imp__setbuf:PTR cdef
    crt_setbuf equ <_imp__setbuf>

    externdef _imp__setlocale:PTR cdef
    crt_setlocale equ <_imp__setlocale>

    externdef _imp__setvbuf:PTR cdef
    crt_setvbuf equ <_imp__setvbuf>

    externdef _imp__signal:PTR cdef
    crt_signal equ <_imp__signal>

    externdef _imp__sin:PTR cdef
    crt_sin equ <_imp__sin>

    externdef _imp__sinh:PTR cdef
    crt_sinh equ <_imp__sinh>

    externdef _imp__sprintf:PTR cdef
    crt_sprintf equ <_imp__sprintf>

    externdef _imp__sqrt:PTR cdef
    crt_sqrt equ <_imp__sqrt>

    externdef _imp__srand:PTR cdef
    crt_srand equ <_imp__srand>

    externdef _imp__sscanf:PTR cdef
    crt_sscanf equ <_imp__sscanf>

    externdef _imp__strcat:PTR cdef
    crt_strcat equ <_imp__strcat>

    externdef _imp__strchr:PTR cdef
    crt_strchr equ <_imp__strchr>

    externdef _imp__strcmp:PTR cdef
    crt_strcmp equ <_imp__strcmp>

    externdef _imp__strcoll:PTR cdef
    crt_strcoll equ <_imp__strcoll>

    externdef _imp__strcpy:PTR cdef
    crt_strcpy equ <_imp__strcpy>

    externdef _imp__strcspn:PTR cdef
    crt_strcspn equ <_imp__strcspn>

    externdef _imp__strerror:PTR cdef
    crt_strerror equ <_imp__strerror>

    externdef _imp__strftime:PTR cdef
    crt_strftime equ <_imp__strftime>

    externdef _imp__strlen:PTR cdef
    crt_strlen equ <_imp__strlen>

    externdef _imp__strncat:PTR cdef
    crt_strncat equ <_imp__strncat>

    externdef _imp__strncmp:PTR cdef
    crt_strncmp equ <_imp__strncmp>

    externdef _imp__strncpy:PTR cdef
    crt_strncpy equ <_imp__strncpy>

    externdef _imp__strpbrk:PTR cdef
    crt_strpbrk equ <_imp__strpbrk>

    externdef _imp__strrchr:PTR cdef
    crt_strrchr equ <_imp__strrchr>

    externdef _imp__strspn:PTR cdef
    crt_strspn equ <_imp__strspn>

    externdef _imp__strstr:PTR cdef
    crt_strstr equ <_imp__strstr>

    externdef _imp__strtod:PTR cdef
    crt_strtod equ <_imp__strtod>

    externdef _imp__strtok:PTR cdef
    crt_strtok equ <_imp__strtok>

    externdef _imp__strtol:PTR cdef
    crt_strtol equ <_imp__strtol>

    externdef _imp__strtoul:PTR cdef
    crt_strtoul equ <_imp__strtoul>

    externdef _imp__strxfrm:PTR cdef
    crt_strxfrm equ <_imp__strxfrm>

    externdef _imp__swprintf:PTR cdef
    crt_swprintf equ <_imp__swprintf>

    externdef _imp__swscanf:PTR cdef
    crt_swscanf equ <_imp__swscanf>

    externdef _imp__system:PTR cdef
    crt_system equ <_imp__system>

    externdef _imp__tan:PTR cdef
    crt_tan equ <_imp__tan>

    externdef _imp__tanh:PTR cdef
    crt_tanh equ <_imp__tanh>

    externdef _imp__time:PTR cdef
    crt_time equ <_imp__time>

    externdef _imp__tmpfile:PTR cdef
    crt_tmpfile equ <_imp__tmpfile>

    externdef _imp__tmpnam:PTR cdef
    crt_tmpnam equ <_imp__tmpnam>

    externdef _imp__tolower:PTR cdef
    crt_tolower equ <_imp__tolower>

    externdef _imp__toupper:PTR cdef
    crt_toupper equ <_imp__toupper>

    externdef _imp__towlower:PTR cdef
    crt_towlower equ <_imp__towlower>

    externdef _imp__towupper:PTR cdef
    crt_towupper equ <_imp__towupper>

    externdef _imp__ungetc:PTR cdef
    crt_ungetc equ <_imp__ungetc>

    externdef _imp__ungetwc:PTR cdef
    crt_ungetwc equ <_imp__ungetwc>

    externdef _imp__vfprintf:PTR cdef
    crt_vfprintf equ <_imp__vfprintf>

    externdef _imp__vfwprintf:PTR cdef
    crt_vfwprintf equ <_imp__vfwprintf>

    externdef _imp__vprintf:PTR cdef
    crt_vprintf equ <_imp__vprintf>

    externdef _imp__vsprintf:PTR cdef
    crt_vsprintf equ <_imp__vsprintf>

    externdef _imp__vswprintf:PTR cdef
    crt_vswprintf equ <_imp__vswprintf>

    externdef _imp__vwprintf:PTR cdef
    crt_vwprintf equ <_imp__vwprintf>

    externdef _imp__wcscat:PTR cdef
    crt_wcscat equ <_imp__wcscat>

    externdef _imp__wcschr:PTR cdef
    crt_wcschr equ <_imp__wcschr>

    externdef _imp__wcscmp:PTR cdef
    crt_wcscmp equ <_imp__wcscmp>

    externdef _imp__wcscoll:PTR cdef
    crt_wcscoll equ <_imp__wcscoll>

    externdef _imp__wcscpy:PTR cdef
    crt_wcscpy equ <_imp__wcscpy>

    externdef _imp__wcscspn:PTR cdef
    crt_wcscspn equ <_imp__wcscspn>

    externdef _imp__wcsftime:PTR cdef
    crt_wcsftime equ <_imp__wcsftime>

    externdef _imp__wcslen:PTR cdef
    crt_wcslen equ <_imp__wcslen>

    externdef _imp__wcsncat:PTR cdef
    crt_wcsncat equ <_imp__wcsncat>

    externdef _imp__wcsncmp:PTR cdef
    crt_wcsncmp equ <_imp__wcsncmp>

    externdef _imp__wcsncpy:PTR cdef
    crt_wcsncpy equ <_imp__wcsncpy>

    externdef _imp__wcspbrk:PTR cdef
    crt_wcspbrk equ <_imp__wcspbrk>

    externdef _imp__wcsrchr:PTR cdef
    crt_wcsrchr equ <_imp__wcsrchr>

    externdef _imp__wcsspn:PTR cdef
    crt_wcsspn equ <_imp__wcsspn>

    externdef _imp__wcsstr:PTR cdef
    crt_wcsstr equ <_imp__wcsstr>

    externdef _imp__wcstod:PTR cdef
    crt_wcstod equ <_imp__wcstod>

    externdef _imp__wcstok:PTR cdef
    crt_wcstok equ <_imp__wcstok>

    externdef _imp__wcstol:PTR cdef
    crt_wcstol equ <_imp__wcstol>

    externdef _imp__wcstombs:PTR cdef
    crt_wcstombs equ <_imp__wcstombs>

    externdef _imp__wcstoul:PTR cdef
    crt_wcstoul equ <_imp__wcstoul>

    externdef _imp__wcsxfrm:PTR cdef
    crt_wcsxfrm equ <_imp__wcsxfrm>

    externdef _imp__wctomb:PTR cdef
    crt_wctomb equ <_imp__wctomb>

    externdef _imp__wprintf:PTR cdef
    crt_wprintf equ <_imp__wprintf>

    externdef _imp__wscanf:PTR cdef
    crt_wscanf equ <_imp__wscanf>

