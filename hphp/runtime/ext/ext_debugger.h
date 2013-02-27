/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_DEBUGGER_H__
#define __EXT_DEBUGGER_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <runtime/eval/debugger/debugger_client.h>
#include <runtime/eval/debugger/debugger_proxy.h>
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

bool f_hphpd_install_user_command(CStrRef cmd, CStrRef clsname);
Array f_hphpd_get_user_commands();
void f_hphpd_break(bool condition = true);
Variant f_hphpd_get_client(CStrRef name);
Variant f_hphpd_client_ctrl(CStrRef name, CStrRef op);

///////////////////////////////////////////////////////////////////////////////
// class DebuggerProxyCmdUser

FORWARD_DECLARE_CLASS_BUILTIN(DebuggerProxyCmdUser);
class c_DebuggerProxyCmdUser : public ExtObjectData {
 public:
  DECLARE_CLASS(DebuggerProxyCmdUser, DebuggerProxyCmdUser, ObjectData)

  // need to implement
  public: c_DebuggerProxyCmdUser(const ObjectStaticCallbacks *cb = &cw_DebuggerProxyCmdUser);
  public: ~c_DebuggerProxyCmdUser();
  public: void t___construct();
  public: bool t_islocal();
  public: Variant t_send(CObjRef cmd);


 public:
  Eval::DebuggerProxy *m_proxy;
};
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_FILENAMES;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_VARIABLES;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CONSTANTS;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASSES;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_FUNCTIONS;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_METHODS;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_PROPERTIES;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CLASS_CONSTANTS;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_KEYWORDS;
extern const int64 q_DebuggerClientCmdUser$$AUTO_COMPLETE_CODE;

///////////////////////////////////////////////////////////////////////////////
// class DebuggerClientCmdUser

FORWARD_DECLARE_CLASS_BUILTIN(DebuggerClientCmdUser);
class c_DebuggerClientCmdUser : public ExtObjectData {
 public:
  DECLARE_CLASS(DebuggerClientCmdUser, DebuggerClientCmdUser, ObjectData)

  // need to implement
  public: c_DebuggerClientCmdUser(const ObjectStaticCallbacks *cb = &cw_DebuggerClientCmdUser);
  public: ~c_DebuggerClientCmdUser();
  public: void t___construct();
  public: void t_quit();
  public: void t_print(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: void t_help(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: void t_info(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: void t_output(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: void t_error(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: void t_code(CStrRef source, int highlight_line = 0, int start_line_no = 0, int end_line_no = 0);
  public: Variant t_ask(int _argc, CStrRef format, CArrRef _argv = null_array);
  public: String t_wrap(CStrRef str);
  public: void t_helptitle(CStrRef str);
  public: void t_helpcmds(int _argc, CStrRef cmd, CStrRef desc, CArrRef _argv = null_array);
  public: void t_helpbody(CStrRef str);
  public: void t_helpsection(CStrRef str);
  public: void t_tutorial(CStrRef str);
  public: String t_getcode();
  public: String t_getcommand();
  public: bool t_arg(int index, CStrRef str);
  public: int64 t_argcount();
  public: String t_argvalue(int index);
  public: String t_linerest(int index);
  public: Array t_args();
  public: Variant t_send(CObjRef cmd);
  public: Variant t_xend(CObjRef cmd);
  public: Variant t_getcurrentlocation();
  public: Variant t_getstacktrace();
  public: int64 t_getframe();
  public: void t_printframe(int index);
  public: void t_addcompletion(CVarRef list);

  static const ClassPropTable os_prop_table;

 public:
  Eval::DebuggerClient *m_client;
};

///////////////////////////////////////////////////////////////////////////////
// class DebuggerClient

extern const int64 q_DebuggerClient$$STATE_INVALID;
extern const int64 q_DebuggerClient$$STATE_UNINIT;
extern const int64 q_DebuggerClient$$STATE_INITIALIZING;
extern const int64 q_DebuggerClient$$STATE_READY_FOR_COMMAND;
extern const int64 q_DebuggerClient$$STATE_BUSY;

FORWARD_DECLARE_CLASS_BUILTIN(DebuggerClient);
class c_DebuggerClient : public ExtObjectData, public Sweepable {
 public:
  DECLARE_CLASS(DebuggerClient, DebuggerClient, ObjectData)

  // need to implement
  public: c_DebuggerClient(const ObjectStaticCallbacks *cb = &cw_DebuggerClient);
  public: ~c_DebuggerClient();
  public: void t___construct();
  public: int64 t_getstate();
  public: Variant t_init(CVarRef options);
  public: Variant t_processcmd(CVarRef cmdName, CVarRef args);

  static const ClassPropTable os_prop_table;

 public:
  Eval::DebuggerClient *m_client;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_DEBUGGER_H__
