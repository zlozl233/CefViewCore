﻿#ifndef CefViewCoreProtocol_h
#define CefViewCoreProtocol_h
#pragma once

/// <summary>
///
/// </summary>
#define CEFVIEW_SCHEMA "CefView"

/// <summary>
///
/// </summary>
#define CEFVIEW_QUERY_NAME "CefViewQuery"

/// <summary>
///
/// </summary>
#define CEFVIEW_QUERY_CANCEL_NAME "CefViewQueryCancel"

/// <summary>
///
/// </summary>
#define CEFVIEW_BRIDGE_OBJ_NAME_KEY "bridge-obj-name"

/// <summary>
///
/// </summary>
#define CEFVIEW_OBJECT_NAME "CefViewClient"

/// <summary>
/// CEFVIEWClient.invokeMethod("method_name", ...)
/// </summary>
#define CEFVIEW_INVOKEMETHOD "invokeMethod"

/// <summary>
/// CEFVIEWClient.postMessage("postMessage", ...)
/// </summary>
#define CEFVIEW_POSTMESSAGE "postMessage"

/// <summary>
/// CEFVIEWClient.addEventListener(type, listener)
/// </summary>
#define CEFVIEW_ADDEVENTLISTENER "addEventListener"

/// <summary>
/// CEFVIEWClient.removeEventListener(type, listener)
/// </summary>
#define CEFVIEW_REMOVEEVENTLISTENER "removeEventListener"

/// <summary>
/// window.__report_js_result__(context, result)
/// context must be double
/// </summary>
#define CEFVIEW_REPORTJSRESULT "__report_js_result__"

/// <summary>
/// this message is sent from render process to browser process
/// and is processed in the Qt UI thread
///
/// format
///   msg.name
///   msg.arg[0]: function name
///   msg.arg[1~...]: function parameters
/// </summary>
#define INVOKEMETHOD_NOTIFY_MESSAGE "CefViewClient#InvokeMethodNotify"

///
#define REPORTJSRESULT_NOTIFY_MESSAGE "ReportJSResultNotify"

/// <summary>
/// this message is sent from browser process to render process
/// and is processed in the CefRenderer_Main thread
///
/// format:
///   msg.name:
///   msg.arg[0]: function name
///   msg.arg[1~...]: function parameters
/// </summary>
#define TRIGGEREVENT_NOTIFY_MESSAGE "CefViewClient#TriggerEventNotify"

/// <summary>
///
/// </summary>
#define RENDER_PROCESS_NAME "CefViewWing"

/// <summary>
///
/// </summary>
#define RESOURCE_DIRECTORY_NAME "resources"

/// <summary>
///
/// </summary>
#define LOCALES_DIRECTORY_NAME "locales"

/// <summary>
///
/// </summary>
#define CEFVIEW_USER_AGENT "CefView/1.0 (macOS; en-us)"

#endif
