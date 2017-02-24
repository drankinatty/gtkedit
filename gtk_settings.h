#ifndef _gtk_settings_h_
#define _gtk_settings_h_  1

#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>  /* for GDK key values */

#include "gtk_appdata.h"

/* settings functions */
GtkWidget *create_settings_dlg (kwinst *app);
void settings_btncancel (GtkWidget *widget, kwinst *app);
void settings_btnok (GtkWidget *widget, kwinst *app);
void settings_fontbtn (GtkWidget *widget, kwinst *app);
void chkdynwrap_toggled (GtkWidget *widget, kwinst *app);
void chkshowdwrap_toggled (GtkWidget *widget, kwinst *app);
void chksmarthe_toggled (GtkWidget *widget, kwinst *app);
void chkwraptxtcsr_toggled (GtkWidget *widget, kwinst *app);
void chkpgudmvscsr_toggled (GtkWidget *widget, kwinst *app);
void chkexpandtab_toggled (GtkWidget *widget, kwinst *app);
void chksmartbs_toggled (GtkWidget *widget, kwinst *app);
void chkshowtabs_toggled (GtkWidget *widget, kwinst *app);
void spintab_changed (GtkWidget *widget, kwinst *app);
void chkindentwspc_toggled (GtkWidget *widget, kwinst *app);
void chkindentauto_toggled (GtkWidget *widget, kwinst *app);
void chkindentmixd_toggled (GtkWidget *widget, kwinst *app);
void spinindent_changed (GtkWidget *widget, kwinst *app);
void chktrimendws_toggled (GtkWidget *widget, kwinst *app);
void chkposixeof_toggled (GtkWidget *widget, kwinst *app);

#ifdef HAVESOURCEVIEW
void chklinehghlt_toggled (GtkWidget *widget, kwinst *app);
#endif

#endif
