/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *vbox1;
  GtkWidget *menubar1;
  GtkWidget *menuitem1;
  GtkWidget *menuitem1_menu;
  GtkWidget *nuevo1;
  GtkWidget *salir2;
  GtkWidget *separatormenuitem1;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *acerca_de1;
  GtkWidget *drawingarea1;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (window1, 500, 400);
  gtk_window_set_title (GTK_WINDOW (window1), _("Serpiente"));

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (window1), vbox1);

  menubar1 = gtk_menu_bar_new ();
  gtk_widget_show (menubar1);
  gtk_box_pack_start (GTK_BOX (vbox1), menubar1, FALSE, FALSE, 0);

  menuitem1 = gtk_menu_item_new_with_mnemonic (_("_Archivo"));
  gtk_widget_show (menuitem1);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem1);

  menuitem1_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem1), menuitem1_menu);

  nuevo1 = gtk_image_menu_item_new_from_stock ("gtk-new", accel_group);
  gtk_widget_show (nuevo1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), nuevo1);

  salir2 = gtk_menu_item_new_with_mnemonic (_("_Salir"));
  gtk_widget_show (salir2);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), salir2);

  separatormenuitem1 = gtk_separator_menu_item_new ();
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  menuitem4 = gtk_menu_item_new_with_mnemonic (_("Ay_uda"));
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar1), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  acerca_de1 = gtk_menu_item_new_with_mnemonic (_("A_cerca de"));
  gtk_widget_show (acerca_de1);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), acerca_de1);

  drawingarea1 = gtk_drawing_area_new ();
  gtk_widget_show (drawingarea1);
  gtk_box_pack_start (GTK_BOX (vbox1), drawingarea1, TRUE, TRUE, 0);

  g_signal_connect ((gpointer) window1, "destroy",
                    G_CALLBACK (on_window1_destroy),
                    NULL);
  g_signal_connect ((gpointer) window1, "key_press_event",
                    G_CALLBACK (on_window1_key_press_event),
                    NULL);
  g_signal_connect ((gpointer) nuevo1, "activate",
                    G_CALLBACK (on_nuevo1_activate),
                    NULL);
  g_signal_connect ((gpointer) salir2, "activate",
                    G_CALLBACK (on_salir2_activate),
                    NULL);
  g_signal_connect ((gpointer) acerca_de1, "activate",
                    G_CALLBACK (on_acerca_de1_activate),
                    NULL);
  g_signal_connect ((gpointer) drawingarea1, "configure_event",
                    G_CALLBACK (on_drawingarea1_configure_event),
                    NULL);
  g_signal_connect ((gpointer) drawingarea1, "expose_event",
                    G_CALLBACK (on_drawingarea1_expose_event),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window1, menubar1, "menubar1");
  GLADE_HOOKUP_OBJECT (window1, menuitem1, "menuitem1");
  GLADE_HOOKUP_OBJECT (window1, menuitem1_menu, "menuitem1_menu");
  GLADE_HOOKUP_OBJECT (window1, nuevo1, "nuevo1");
  GLADE_HOOKUP_OBJECT (window1, salir2, "salir2");
  GLADE_HOOKUP_OBJECT (window1, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (window1, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (window1, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (window1, acerca_de1, "acerca_de1");
  GLADE_HOOKUP_OBJECT (window1, drawingarea1, "drawingarea1");

  gtk_window_add_accel_group (GTK_WINDOW (window1), accel_group);

  return window1;
}
