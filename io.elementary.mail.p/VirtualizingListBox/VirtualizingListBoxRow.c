/* VirtualizingListBoxRow.c generated by valac 0.56.3, the Vala compiler
 * generated from VirtualizingListBoxRow.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2018 elementary LLC. (https://elementary.io)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authored by: David Hewitt <davidmhewitt@gmail.com>
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <cairo-gobject.h>
#include <float.h>
#include <math.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_VIRTUALIZING_LIST_BOX_ROW (virtualizing_list_box_row_get_type ())
#define VIRTUALIZING_LIST_BOX_ROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRow))
#define VIRTUALIZING_LIST_BOX_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRowClass))
#define IS_VIRTUALIZING_LIST_BOX_ROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_VIRTUALIZING_LIST_BOX_ROW))
#define IS_VIRTUALIZING_LIST_BOX_ROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_VIRTUALIZING_LIST_BOX_ROW))
#define VIRTUALIZING_LIST_BOX_ROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRowClass))

typedef struct _VirtualizingListBoxRow VirtualizingListBoxRow;
typedef struct _VirtualizingListBoxRowClass VirtualizingListBoxRowClass;
typedef struct _VirtualizingListBoxRowPrivate VirtualizingListBoxRowPrivate;
enum  {
	VIRTUALIZING_LIST_BOX_ROW_0_PROPERTY,
	VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY,
	VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY,
	VIRTUALIZING_LIST_BOX_ROW_NUM_PROPERTIES
};
static GParamSpec* virtualizing_list_box_row_properties[VIRTUALIZING_LIST_BOX_ROW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _VirtualizingListBoxRow {
	GtkBin parent_instance;
	VirtualizingListBoxRowPrivate * priv;
};

struct _VirtualizingListBoxRowClass {
	GtkBinClass parent_class;
};

struct _VirtualizingListBoxRowPrivate {
	gboolean _selectable;
	GObject* _model_item;
};

static gint VirtualizingListBoxRow_private_offset;
static gpointer virtualizing_list_box_row_parent_class = NULL;

VALA_EXTERN GType virtualizing_list_box_row_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (VirtualizingListBoxRow, g_object_unref)
static gboolean virtualizing_list_box_row_real_draw (GtkWidget* base,
                                              cairo_t* ct);
VALA_EXTERN VirtualizingListBoxRow* virtualizing_list_box_row_new (void);
VALA_EXTERN VirtualizingListBoxRow* virtualizing_list_box_row_construct (GType object_type);
VALA_EXTERN gboolean virtualizing_list_box_row_get_selectable (VirtualizingListBoxRow* self);
VALA_EXTERN void virtualizing_list_box_row_set_selectable (VirtualizingListBoxRow* self,
                                               gboolean value);
VALA_EXTERN GObject* virtualizing_list_box_row_get_model_item (VirtualizingListBoxRow* self);
VALA_EXTERN void virtualizing_list_box_row_set_model_item (VirtualizingListBoxRow* self,
                                               GObject* value);
static GObject * virtualizing_list_box_row_constructor (GType type,
                                                 guint n_construct_properties,
                                                 GObjectConstructParam * construct_properties);
static void virtualizing_list_box_row_finalize (GObject * obj);
static GType virtualizing_list_box_row_get_type_once (void);
static void _vala_virtualizing_list_box_row_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);
static void _vala_virtualizing_list_box_row_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec);

static inline gpointer
virtualizing_list_box_row_get_instance_private (VirtualizingListBoxRow* self)
{
	return G_STRUCT_MEMBER_P (self, VirtualizingListBoxRow_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static gboolean
virtualizing_list_box_row_real_draw (GtkWidget* base,
                                     cairo_t* ct)
{
	VirtualizingListBoxRow * self;
	GtkStyleContext* sc = NULL;
	GtkStyleContext* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkAllocation alloc = {0};
	GtkAllocation _tmp2_ = {0};
	GtkAllocation _tmp3_;
	GtkAllocation _tmp4_;
	GtkAllocation _tmp5_;
	GtkAllocation _tmp6_;
	gboolean result;
	self = (VirtualizingListBoxRow*) base;
	g_return_val_if_fail (ct != NULL, FALSE);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	sc = _tmp1_;
	gtk_widget_get_allocation ((GtkWidget*) self, &_tmp2_);
	alloc = _tmp2_;
	_tmp3_ = alloc;
	_tmp4_ = alloc;
	gtk_render_background (sc, ct, (gdouble) 0, (gdouble) 0, (gdouble) _tmp3_.width, (gdouble) _tmp4_.height);
	_tmp5_ = alloc;
	_tmp6_ = alloc;
	gtk_render_frame (sc, ct, (gdouble) 0, (gdouble) 0, (gdouble) _tmp5_.width, (gdouble) _tmp6_.height);
	result = GTK_WIDGET_CLASS (virtualizing_list_box_row_parent_class)->draw ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_bin_get_type (), GtkBin), ct);
	_g_object_unref0 (sc);
	return result;
}

VirtualizingListBoxRow*
virtualizing_list_box_row_construct (GType object_type)
{
	VirtualizingListBoxRow * self = NULL;
	self = (VirtualizingListBoxRow*) g_object_new (object_type, NULL);
	return self;
}

VirtualizingListBoxRow*
virtualizing_list_box_row_new (void)
{
	return virtualizing_list_box_row_construct (TYPE_VIRTUALIZING_LIST_BOX_ROW);
}

gboolean
virtualizing_list_box_row_get_selectable (VirtualizingListBoxRow* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_selectable;
	return result;
}

void
virtualizing_list_box_row_set_selectable (VirtualizingListBoxRow* self,
                                          gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = virtualizing_list_box_row_get_selectable (self);
	if (old_value != value) {
		self->priv->_selectable = value;
		g_object_notify_by_pspec ((GObject *) self, virtualizing_list_box_row_properties[VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY]);
	}
}

GObject*
virtualizing_list_box_row_get_model_item (VirtualizingListBoxRow* self)
{
	GObject* result;
	GObject* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_model_item;
	result = _tmp0_;
	return result;
}

void
virtualizing_list_box_row_set_model_item (VirtualizingListBoxRow* self,
                                          GObject* value)
{
	GObject* old_value;
	g_return_if_fail (self != NULL);
	old_value = virtualizing_list_box_row_get_model_item (self);
	if (old_value != value) {
		self->priv->_model_item = value;
		g_object_notify_by_pspec ((GObject *) self, virtualizing_list_box_row_properties[VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY]);
	}
}

static GObject *
virtualizing_list_box_row_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	VirtualizingListBoxRow * self;
	GtkStyleContext* _tmp0_;
	parent_class = G_OBJECT_CLASS (virtualizing_list_box_row_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRow);
	gtk_widget_set_can_focus ((GtkWidget*) self, TRUE);
	gtk_widget_set_redraw_on_allocate ((GtkWidget*) self, TRUE);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp0_, "activatable");
	return obj;
}

static void
virtualizing_list_box_row_class_init (VirtualizingListBoxRowClass * klass,
                                      gpointer klass_data)
{
	virtualizing_list_box_row_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &VirtualizingListBoxRow_private_offset);
	((GtkWidgetClass *) klass)->draw = (gboolean (*) (GtkWidget*, cairo_t*)) virtualizing_list_box_row_real_draw;
	G_OBJECT_CLASS (klass)->get_property = _vala_virtualizing_list_box_row_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_virtualizing_list_box_row_set_property;
	G_OBJECT_CLASS (klass)->constructor = virtualizing_list_box_row_constructor;
	G_OBJECT_CLASS (klass)->finalize = virtualizing_list_box_row_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY, virtualizing_list_box_row_properties[VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY] = g_param_spec_boolean ("selectable", "selectable", "selectable", TRUE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY, virtualizing_list_box_row_properties[VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY] = g_param_spec_object ("model-item", "model-item", "model-item", G_TYPE_OBJECT, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	gtk_widget_class_set_css_name (GTK_WIDGET_CLASS (klass), "row");
}

static void
virtualizing_list_box_row_instance_init (VirtualizingListBoxRow * self,
                                         gpointer klass)
{
	self->priv = virtualizing_list_box_row_get_instance_private (self);
	self->priv->_selectable = TRUE;
}

static void
virtualizing_list_box_row_finalize (GObject * obj)
{
	VirtualizingListBoxRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRow);
	G_OBJECT_CLASS (virtualizing_list_box_row_parent_class)->finalize (obj);
}

static GType
virtualizing_list_box_row_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (VirtualizingListBoxRowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) virtualizing_list_box_row_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (VirtualizingListBoxRow), 0, (GInstanceInitFunc) virtualizing_list_box_row_instance_init, NULL };
	GType virtualizing_list_box_row_type_id;
	virtualizing_list_box_row_type_id = g_type_register_static (gtk_bin_get_type (), "VirtualizingListBoxRow", &g_define_type_info, 0);
	VirtualizingListBoxRow_private_offset = g_type_add_instance_private (virtualizing_list_box_row_type_id, sizeof (VirtualizingListBoxRowPrivate));
	return virtualizing_list_box_row_type_id;
}

GType
virtualizing_list_box_row_get_type (void)
{
	static volatile gsize virtualizing_list_box_row_type_id__once = 0;
	if (g_once_init_enter (&virtualizing_list_box_row_type_id__once)) {
		GType virtualizing_list_box_row_type_id;
		virtualizing_list_box_row_type_id = virtualizing_list_box_row_get_type_once ();
		g_once_init_leave (&virtualizing_list_box_row_type_id__once, virtualizing_list_box_row_type_id);
	}
	return virtualizing_list_box_row_type_id__once;
}

static void
_vala_virtualizing_list_box_row_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	VirtualizingListBoxRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRow);
	switch (property_id) {
		case VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY:
		g_value_set_boolean (value, virtualizing_list_box_row_get_selectable (self));
		break;
		case VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY:
		g_value_set_object (value, virtualizing_list_box_row_get_model_item (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_virtualizing_list_box_row_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec)
{
	VirtualizingListBoxRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_VIRTUALIZING_LIST_BOX_ROW, VirtualizingListBoxRow);
	switch (property_id) {
		case VIRTUALIZING_LIST_BOX_ROW_SELECTABLE_PROPERTY:
		virtualizing_list_box_row_set_selectable (self, g_value_get_boolean (value));
		break;
		case VIRTUALIZING_LIST_BOX_ROW_MODEL_ITEM_PROPERTY:
		virtualizing_list_box_row_set_model_item (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

