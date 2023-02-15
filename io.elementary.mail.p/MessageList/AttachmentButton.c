/* AttachmentButton.c generated by valac 0.56.3, the Vala compiler
 * generated from AttachmentButton.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2017 elementary LLC. (https://elementary.io)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Corentin Noël <corentin@elementary.io>
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <camel/camel.h>
#include <gio/gio.h>
#include <glib.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
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

#define TYPE_ATTACHMENT_BUTTON (attachment_button_get_type ())
#define ATTACHMENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ATTACHMENT_BUTTON, AttachmentButton))
#define ATTACHMENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ATTACHMENT_BUTTON, AttachmentButtonClass))
#define IS_ATTACHMENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ATTACHMENT_BUTTON))
#define IS_ATTACHMENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ATTACHMENT_BUTTON))
#define ATTACHMENT_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ATTACHMENT_BUTTON, AttachmentButtonClass))

typedef struct _AttachmentButton AttachmentButton;
typedef struct _AttachmentButtonClass AttachmentButtonClass;
typedef struct _AttachmentButtonPrivate AttachmentButtonPrivate;
enum  {
	ATTACHMENT_BUTTON_0_PROPERTY,
	ATTACHMENT_BUTTON_MIME_PART_PROPERTY,
	ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY,
	ATTACHMENT_BUTTON_NUM_PROPERTIES
};
static GParamSpec* attachment_button_properties[ATTACHMENT_BUTTON_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _AttachmentButtonWriteToFileData AttachmentButtonWriteToFileData;
typedef struct _Block29Data Block29Data;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_thread_unref0(var) ((var == NULL) ? NULL : (var = (g_thread_unref (var), NULL)))

struct _AttachmentButton {
	GtkFlowBoxChild parent_instance;
	AttachmentButtonPrivate * priv;
};

struct _AttachmentButtonClass {
	GtkFlowBoxChildClass parent_class;
};

struct _AttachmentButtonPrivate {
	CamelMimePart* _mime_part;
	GCancellable* _loading_cancellable;
	GtkImage* preview_image;
	GtkLabel* name_label;
	GtkLabel* size_label;
};

struct _AttachmentButtonWriteToFileData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	AttachmentButton* self;
	GFile* file;
	GFileIOStream* iostream;
	GFileIOStream* _tmp0_;
	CamelMimePart* _tmp1_;
	CamelDataWrapper* _tmp2_;
	CamelDataWrapper* _tmp3_;
	GFileIOStream* _tmp4_;
	GOutputStream* _tmp5_;
	GOutputStream* _tmp6_;
	GError* e;
	GError* _tmp7_;
	const gchar* _tmp8_;
	GError* _inner_error0_;
};

struct _Block29Data {
	int _ref_count_;
	AttachmentButton* self;
	gchar* size_text;
};

static gint AttachmentButton_private_offset;
static gpointer attachment_button_parent_class = NULL;

VALA_EXTERN GType attachment_button_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (AttachmentButton, g_object_unref)
VALA_EXTERN AttachmentButton* attachment_button_new (CamelMimePart* mime_part,
                                         GCancellable* loading_cancellable);
VALA_EXTERN AttachmentButton* attachment_button_construct (GType object_type,
                                               CamelMimePart* mime_part,
                                               GCancellable* loading_cancellable);
static void attachment_button_save_as_activated (AttachmentButton* self);
VALA_EXTERN CamelMimePart* attachment_button_get_mime_part (AttachmentButton* self);
static void attachment_button_write_to_file (AttachmentButton* self,
                                      GFile* file,
                                      GAsyncReadyCallback _callback_,
                                      gpointer _user_data_);
static void attachment_button_write_to_file_finish (AttachmentButton* self,
                                             GAsyncResult* _res_);
static void attachment_button_write_to_file_data_free (gpointer _data);
static gboolean attachment_button_write_to_file_co (AttachmentButtonWriteToFileData* _data_);
static void attachment_button_write_to_file_ready (GObject* source_object,
                                            GAsyncResult* _res_,
                                            gpointer _user_data_);
static void attachment_button_set_mime_part (AttachmentButton* self,
                                      CamelMimePart* value);
VALA_EXTERN GCancellable* attachment_button_get_loading_cancellable (AttachmentButton* self);
static void attachment_button_set_loading_cancellable (AttachmentButton* self,
                                                GCancellable* value);
static GObject * attachment_button_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
static gboolean _attachment_button___lambda44_ (AttachmentButton* self,
                                         GdkEventButton* event);
static void ___lambda45_ (AttachmentButton* self);
static void ____lambda45__gtk_menu_item_activate (GtkMenuItem* _sender,
                                           gpointer self);
static void ___lambda46_ (AttachmentButton* self);
static void ____lambda46__gtk_menu_item_activate (GtkMenuItem* _sender,
                                           gpointer self);
static gboolean __attachment_button___lambda44__gtk_widget_button_press_event (GtkWidget* _sender,
                                                                        GdkEventButton* event,
                                                                        gpointer self);
static void* _attachment_button___lambda47_ (AttachmentButton* self);
static Block29Data* block29_data_ref (Block29Data* _data29_);
static void block29_data_unref (void * _userdata_);
static gboolean __lambda48_ (Block29Data* _data29_);
static gboolean ___lambda48__gsource_func (gpointer self);
static gpointer __attachment_button___lambda47__gthread_func (gpointer self);
static void attachment_button_finalize (GObject * obj);
static GType attachment_button_get_type_once (void);
static void _vala_attachment_button_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec);
static void _vala_attachment_button_set_property (GObject * object,
                                           guint property_id,
                                           const GValue * value,
                                           GParamSpec * pspec);

static inline gpointer
attachment_button_get_instance_private (AttachmentButton* self)
{
	return G_STRUCT_MEMBER_P (self, AttachmentButton_private_offset);
}

AttachmentButton*
attachment_button_construct (GType object_type,
                             CamelMimePart* mime_part,
                             GCancellable* loading_cancellable)
{
	AttachmentButton * self = NULL;
	g_return_val_if_fail (mime_part != NULL, NULL);
	g_return_val_if_fail (loading_cancellable != NULL, NULL);
	self = (AttachmentButton*) g_object_new (object_type, "mime-part", mime_part, "loading-cancellable", loading_cancellable, NULL);
	return self;
}

AttachmentButton*
attachment_button_new (CamelMimePart* mime_part,
                       GCancellable* loading_cancellable)
{
	return attachment_button_construct (TYPE_ATTACHMENT_BUTTON, mime_part, loading_cancellable);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
attachment_button_save_as_activated (AttachmentButton* self)
{
	GtkWindow* parent_window = NULL;
	GtkWidget* _tmp0_;
	GtkWindow* _tmp1_;
	GtkFileChooserNative* chooser = NULL;
	GtkWindow* _tmp2_;
	GtkFileChooserNative* _tmp3_;
	GtkFileChooserNative* _tmp4_;
	CamelMimePart* _tmp5_;
	const gchar* _tmp6_;
	GtkFileChooserNative* _tmp7_;
	GtkFileChooserNative* _tmp8_;
	GtkFileChooserNative* _tmp12_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_widget_get_toplevel ((GtkWidget*) self);
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, gtk_window_get_type ()) ? ((GtkWindow*) _tmp0_) : NULL);
	parent_window = _tmp1_;
	_tmp2_ = parent_window;
	_tmp3_ = gtk_file_chooser_native_new (NULL, _tmp2_, GTK_FILE_CHOOSER_ACTION_SAVE, _ ("Save"), _ ("Cancel"));
	chooser = _tmp3_;
	_tmp4_ = chooser;
	_tmp5_ = self->priv->_mime_part;
	_tmp6_ = camel_mime_part_get_filename (_tmp5_);
	gtk_file_chooser_set_current_name ((GtkFileChooser*) _tmp4_, _tmp6_);
	_tmp7_ = chooser;
	gtk_file_chooser_set_do_overwrite_confirmation ((GtkFileChooser*) _tmp7_, TRUE);
	_tmp8_ = chooser;
	if (gtk_native_dialog_run ((GtkNativeDialog*) _tmp8_) == ((gint) GTK_RESPONSE_ACCEPT)) {
		GtkFileChooserNative* _tmp9_;
		GFile* _tmp10_;
		GFile* _tmp11_;
		_tmp9_ = chooser;
		_tmp10_ = gtk_file_chooser_get_file ((GtkFileChooser*) _tmp9_);
		_tmp11_ = _tmp10_;
		attachment_button_write_to_file (self, _tmp11_, NULL, NULL);
		_g_object_unref0 (_tmp11_);
	}
	_tmp12_ = chooser;
	gtk_native_dialog_destroy ((GtkNativeDialog*) _tmp12_);
	_g_object_unref0 (chooser);
	_g_object_unref0 (parent_window);
}

static void
attachment_button_write_to_file_data_free (gpointer _data)
{
	AttachmentButtonWriteToFileData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->file);
	_g_object_unref0 (_data_->self);
	g_slice_free (AttachmentButtonWriteToFileData, _data_);
}

static void
attachment_button_write_to_file (AttachmentButton* self,
                                 GFile* file,
                                 GAsyncReadyCallback _callback_,
                                 gpointer _user_data_)
{
	AttachmentButtonWriteToFileData* _data_;
	AttachmentButton* _tmp0_;
	GFile* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (file != NULL);
	_data_ = g_slice_new0 (AttachmentButtonWriteToFileData);
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, _callback_, _user_data_);
	g_task_set_task_data (_data_->_async_result, _data_, attachment_button_write_to_file_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = _g_object_ref0 (file);
	_g_object_unref0 (_data_->file);
	_data_->file = _tmp1_;
	attachment_button_write_to_file_co (_data_);
}

static void
attachment_button_write_to_file_finish (AttachmentButton* self,
                                        GAsyncResult* _res_)
{
	AttachmentButtonWriteToFileData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), NULL);
}

static void
attachment_button_write_to_file_ready (GObject* source_object,
                                       GAsyncResult* _res_,
                                       gpointer _user_data_)
{
	AttachmentButtonWriteToFileData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	attachment_button_write_to_file_co (_data_);
}

static gboolean
attachment_button_write_to_file_co (AttachmentButtonWriteToFileData* _data_)
{
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		case 2:
		goto _state_2;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	{
		_data_->_state_ = 1;
		g_file_create_readwrite_async (_data_->file, G_FILE_CREATE_REPLACE_DESTINATION, G_PRIORITY_DEFAULT, NULL, attachment_button_write_to_file_ready, _data_);
		return FALSE;
		_state_1:
		_data_->_tmp0_ = g_file_create_readwrite_finish (_data_->file, _data_->_res_, &_data_->_inner_error0_);
		_data_->iostream = _data_->_tmp0_;
		if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
		_data_->_tmp1_ = _data_->self->priv->_mime_part;
		_data_->_tmp2_ = camel_medium_get_content ((CamelMedium*) _data_->_tmp1_);
		_data_->_tmp3_ = _data_->_tmp2_;
		_data_->_tmp4_ = _data_->iostream;
		_data_->_tmp5_ = g_io_stream_get_output_stream ((GIOStream*) _data_->_tmp4_);
		_data_->_tmp6_ = _data_->_tmp5_;
		_data_->_state_ = 2;
		camel_data_wrapper_decode_to_output_stream (_data_->_tmp3_, _data_->_tmp6_, G_PRIORITY_DEFAULT, NULL, attachment_button_write_to_file_ready, _data_);
		return FALSE;
		_state_2:
		camel_data_wrapper_decode_to_output_stream_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error0_);
		if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
			_g_object_unref0 (_data_->iostream);
			goto __catch0_g_error;
		}
		_g_object_unref0 (_data_->iostream);
	}
	goto __finally0;
	__catch0_g_error:
	{
		_data_->e = _data_->_inner_error0_;
		_data_->_inner_error0_ = NULL;
		_data_->_tmp7_ = _data_->e;
		_data_->_tmp8_ = _data_->_tmp7_->message;
		g_critical ("AttachmentButton.vala:132: %s", _data_->_tmp8_);
		_g_error_free0 (_data_->e);
	}
	__finally0:
	if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error0_->message, g_quark_to_string (_data_->_inner_error0_->domain), _data_->_inner_error0_->code);
		g_clear_error (&_data_->_inner_error0_);
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (!g_task_get_completed (_data_->_async_result)) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}

CamelMimePart*
attachment_button_get_mime_part (AttachmentButton* self)
{
	CamelMimePart* result;
	CamelMimePart* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_mime_part;
	result = _tmp0_;
	return result;
}

static void
attachment_button_set_mime_part (AttachmentButton* self,
                                 CamelMimePart* value)
{
	CamelMimePart* old_value;
	g_return_if_fail (self != NULL);
	old_value = attachment_button_get_mime_part (self);
	if (old_value != value) {
		CamelMimePart* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_mime_part);
		self->priv->_mime_part = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, attachment_button_properties[ATTACHMENT_BUTTON_MIME_PART_PROPERTY]);
	}
}

GCancellable*
attachment_button_get_loading_cancellable (AttachmentButton* self)
{
	GCancellable* result;
	GCancellable* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_loading_cancellable;
	result = _tmp0_;
	return result;
}

static void
attachment_button_set_loading_cancellable (AttachmentButton* self,
                                           GCancellable* value)
{
	GCancellable* old_value;
	g_return_if_fail (self != NULL);
	old_value = attachment_button_get_loading_cancellable (self);
	if (old_value != value) {
		self->priv->_loading_cancellable = value;
		g_object_notify_by_pspec ((GObject *) self, attachment_button_properties[ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY]);
	}
}

static void
___lambda45_ (AttachmentButton* self)
{
	g_signal_emit_by_name ((GtkFlowBoxChild*) self, "activate");
}

static void
____lambda45__gtk_menu_item_activate (GtkMenuItem* _sender,
                                      gpointer self)
{
	___lambda45_ ((AttachmentButton*) self);
}

static void
___lambda46_ (AttachmentButton* self)
{
	attachment_button_save_as_activated (self);
}

static void
____lambda46__gtk_menu_item_activate (GtkMenuItem* _sender,
                                      gpointer self)
{
	___lambda46_ ((AttachmentButton*) self);
}

static gboolean
_attachment_button___lambda44_ (AttachmentButton* self,
                                GdkEventButton* event)
{
	gboolean result;
	g_return_val_if_fail (event != NULL, FALSE);
	if (event->button == ((guint) GDK_BUTTON_SECONDARY)) {
		GtkMenuItem* item_open = NULL;
		GtkMenuItem* _tmp0_;
		GtkMenuItem* _tmp1_;
		GtkMenuItem* item_save = NULL;
		GtkMenuItem* _tmp2_;
		GtkMenuItem* _tmp3_;
		GtkMenu* menu = NULL;
		GtkMenu* _tmp4_;
		GtkMenu* _tmp5_;
		GtkMenuItem* _tmp6_;
		GtkMenu* _tmp7_;
		GtkMenuItem* _tmp8_;
		GtkMenu* _tmp9_;
		GtkMenu* _tmp10_;
		GtkMenu* _tmp11_;
		_tmp0_ = (GtkMenuItem*) gtk_menu_item_new_with_label (_ ("Open"));
		g_object_ref_sink (_tmp0_);
		item_open = _tmp0_;
		_tmp1_ = item_open;
		g_signal_connect_object (_tmp1_, "activate", (GCallback) ____lambda45__gtk_menu_item_activate, self, 0);
		_tmp2_ = (GtkMenuItem*) gtk_menu_item_new_with_label (_ ("Save As…"));
		g_object_ref_sink (_tmp2_);
		item_save = _tmp2_;
		_tmp3_ = item_save;
		g_signal_connect_object (_tmp3_, "activate", (GCallback) ____lambda46__gtk_menu_item_activate, self, 0);
		_tmp4_ = (GtkMenu*) gtk_menu_new ();
		g_object_ref_sink (_tmp4_);
		menu = _tmp4_;
		_tmp5_ = menu;
		_tmp6_ = item_open;
		gtk_container_add ((GtkContainer*) _tmp5_, (GtkWidget*) _tmp6_);
		_tmp7_ = menu;
		_tmp8_ = item_save;
		gtk_container_add ((GtkContainer*) _tmp7_, (GtkWidget*) _tmp8_);
		_tmp9_ = menu;
		g_object_set (_tmp9_, "attach-widget", (GtkWidget*) self, NULL);
		_tmp10_ = menu;
		gtk_widget_show_all ((GtkWidget*) _tmp10_);
		_tmp11_ = menu;
		gtk_menu_popup_at_pointer (_tmp11_, (GdkEvent*) event);
		_g_object_unref0 (menu);
		_g_object_unref0 (item_save);
		_g_object_unref0 (item_open);
	} else {
		g_signal_emit_by_name ((GtkFlowBoxChild*) self, "activate");
	}
	result = TRUE;
	return result;
}

static gboolean
__attachment_button___lambda44__gtk_widget_button_press_event (GtkWidget* _sender,
                                                               GdkEventButton* event,
                                                               gpointer self)
{
	gboolean result;
	result = _attachment_button___lambda44_ ((AttachmentButton*) self, event);
	return result;
}

static Block29Data*
block29_data_ref (Block29Data* _data29_)
{
	g_atomic_int_inc (&_data29_->_ref_count_);
	return _data29_;
}

static void
block29_data_unref (void * _userdata_)
{
	Block29Data* _data29_;
	_data29_ = (Block29Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data29_->_ref_count_)) {
		AttachmentButton* self;
		self = _data29_->self;
		_g_free0 (_data29_->size_text);
		_g_object_unref0 (self);
		g_slice_free (Block29Data, _data29_);
	}
}

static gboolean
__lambda48_ (Block29Data* _data29_)
{
	AttachmentButton* self;
	const gchar* _tmp0_;
	gboolean result;
	self = _data29_->self;
	_tmp0_ = _data29_->size_text;
	if (_tmp0_ != NULL) {
		GtkLabel* _tmp1_;
		const gchar* _tmp2_;
		_tmp1_ = self->priv->size_label;
		_tmp2_ = _data29_->size_text;
		gtk_label_set_label (_tmp1_, _tmp2_);
	} else {
		GtkLabel* _tmp3_;
		GtkLabel* _tmp4_;
		GtkStyleContext* _tmp5_;
		_tmp3_ = self->priv->size_label;
		gtk_label_set_label (_tmp3_, _ ("Unknown"));
		_tmp4_ = self->priv->size_label;
		_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
		gtk_style_context_add_class (_tmp5_, GTK_STYLE_CLASS_ERROR);
	}
	result = G_SOURCE_REMOVE;
	return result;
}

static gboolean
___lambda48__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda48_ (self);
	return result;
}

static void*
_attachment_button___lambda47_ (AttachmentButton* self)
{
	Block29Data* _data29_;
	GError* _inner_error0_ = NULL;
	void* result;
	_data29_ = g_slice_new0 (Block29Data);
	_data29_->_ref_count_ = 1;
	_data29_->self = g_object_ref (self);
	_data29_->size_text = NULL;
	{
		gsize size = 0UL;
		CamelMimePart* _tmp0_;
		GCancellable* _tmp1_;
		gchar* _tmp2_;
		_tmp0_ = self->priv->_mime_part;
		_tmp1_ = self->priv->_loading_cancellable;
		size = camel_data_wrapper_calculate_decoded_size_sync ((CamelDataWrapper*) _tmp0_, _tmp1_, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
		_tmp2_ = g_format_size_full ((guint64) size, G_FORMAT_SIZE_DEFAULT);
		_g_free0 (_data29_->size_text);
		_data29_->size_text = _tmp2_;
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp3_;
		const gchar* _tmp4_;
		e = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp3_ = e;
		_tmp4_ = _tmp3_->message;
		g_critical ("AttachmentButton.vala:82: %s", _tmp4_);
		_g_error_free0 (e);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		block29_data_unref (_data29_);
		_data29_ = NULL;
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return NULL;
	}
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda48__gsource_func, block29_data_ref (_data29_), block29_data_unref);
	result = NULL;
	block29_data_unref (_data29_);
	_data29_ = NULL;
	return result;
}

static gpointer
__attachment_button___lambda47__gthread_func (gpointer self)
{
	gpointer result;
	result = _attachment_button___lambda47_ ((AttachmentButton*) self);
	g_object_unref (self);
	return result;
}

static GObject *
attachment_button_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	AttachmentButton * self;
	GtkEventBox* event_box = NULL;
	GtkEventBox* _tmp0_;
	GtkEventBox* _tmp1_;
	GtkEventBox* _tmp2_;
	GdkEventMask _tmp3_;
	GdkEventMask _tmp4_;
	GtkEventBox* _tmp5_;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp6_;
	GtkGrid* _tmp7_;
	GtkGrid* _tmp8_;
	gchar* mime_type = NULL;
	CamelMimePart* _tmp9_;
	CamelContentType* _tmp10_;
	gchar* _tmp11_;
	gchar* glib_type = NULL;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	GIcon* content_icon = NULL;
	const gchar* _tmp14_;
	GIcon* _tmp15_;
	GIcon* _tmp16_;
	GtkImage* _tmp17_;
	GtkImage* _tmp18_;
	CamelMimePart* _tmp19_;
	const gchar* _tmp20_;
	GtkLabel* _tmp21_;
	GtkLabel* _tmp22_;
	GtkLabel* _tmp23_;
	GtkLabel* _tmp24_;
	GtkLabel* _tmp25_;
	GtkStyleContext* _tmp26_;
	GThread* _tmp27_;
	GThread* _tmp28_;
	GtkGrid* _tmp29_;
	GtkImage* _tmp30_;
	GtkGrid* _tmp31_;
	GtkLabel* _tmp32_;
	GtkGrid* _tmp33_;
	GtkLabel* _tmp34_;
	GtkEventBox* _tmp35_;
	GtkGrid* _tmp36_;
	GtkEventBox* _tmp37_;
	parent_class = G_OBJECT_CLASS (attachment_button_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_ATTACHMENT_BUTTON, AttachmentButton);
	g_object_set ((GtkWidget*) self, "margin", 6, NULL);
	_tmp0_ = (GtkEventBox*) gtk_event_box_new ();
	g_object_ref_sink (_tmp0_);
	event_box = _tmp0_;
	_tmp1_ = event_box;
	_tmp2_ = event_box;
	_tmp3_ = gtk_widget_get_events ((GtkWidget*) _tmp2_);
	_tmp4_ = _tmp3_;
	gtk_widget_set_events ((GtkWidget*) _tmp2_, _tmp4_ | GDK_BUTTON_PRESS_MASK);
	_tmp5_ = event_box;
	g_signal_connect_object ((GtkWidget*) _tmp5_, "button-press-event", (GCallback) __attachment_button___lambda44__gtk_widget_button_press_event, self, 0);
	_tmp6_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp6_);
	grid = _tmp6_;
	_tmp7_ = grid;
	g_object_set ((GtkWidget*) _tmp7_, "margin", 6, NULL);
	_tmp8_ = grid;
	gtk_grid_set_column_spacing (_tmp8_, 6);
	_tmp9_ = self->priv->_mime_part;
	_tmp10_ = camel_mime_part_get_content_type (_tmp9_);
	_tmp11_ = camel_content_type_simple (_tmp10_);
	mime_type = _tmp11_;
	_tmp12_ = mime_type;
	_tmp13_ = g_content_type_from_mime_type (_tmp12_);
	glib_type = _tmp13_;
	_tmp14_ = glib_type;
	_tmp15_ = g_content_type_get_icon (_tmp14_);
	content_icon = _tmp15_;
	_tmp16_ = content_icon;
	_tmp17_ = (GtkImage*) gtk_image_new_from_gicon (_tmp16_, (GtkIconSize) GTK_ICON_SIZE_DND);
	g_object_ref_sink (_tmp17_);
	_g_object_unref0 (self->priv->preview_image);
	self->priv->preview_image = _tmp17_;
	_tmp18_ = self->priv->preview_image;
	gtk_widget_set_valign ((GtkWidget*) _tmp18_, GTK_ALIGN_CENTER);
	_tmp19_ = self->priv->_mime_part;
	_tmp20_ = camel_mime_part_get_filename (_tmp19_);
	_tmp21_ = (GtkLabel*) gtk_label_new (_tmp20_);
	g_object_ref_sink (_tmp21_);
	_g_object_unref0 (self->priv->name_label);
	self->priv->name_label = _tmp21_;
	_tmp22_ = self->priv->name_label;
	gtk_label_set_xalign (_tmp22_, (gfloat) 0);
	_tmp23_ = (GtkLabel*) gtk_label_new (NULL);
	g_object_ref_sink (_tmp23_);
	_g_object_unref0 (self->priv->size_label);
	self->priv->size_label = _tmp23_;
	_tmp24_ = self->priv->size_label;
	gtk_label_set_xalign (_tmp24_, (gfloat) 0);
	_tmp25_ = self->priv->size_label;
	_tmp26_ = gtk_widget_get_style_context ((GtkWidget*) _tmp25_);
	gtk_style_context_add_class (_tmp26_, GTK_STYLE_CLASS_DIM_LABEL);
	_tmp27_ = g_thread_new (NULL, __attachment_button___lambda47__gthread_func, g_object_ref (self));
	_tmp28_ = _tmp27_;
	_g_thread_unref0 (_tmp28_);
	_tmp29_ = grid;
	_tmp30_ = self->priv->preview_image;
	gtk_grid_attach (_tmp29_, (GtkWidget*) _tmp30_, 0, 0, 1, 2);
	_tmp31_ = grid;
	_tmp32_ = self->priv->name_label;
	gtk_grid_attach (_tmp31_, (GtkWidget*) _tmp32_, 1, 0, 1, 1);
	_tmp33_ = grid;
	_tmp34_ = self->priv->size_label;
	gtk_grid_attach (_tmp33_, (GtkWidget*) _tmp34_, 1, 1, 1, 1);
	_tmp35_ = event_box;
	_tmp36_ = grid;
	gtk_container_add ((GtkContainer*) _tmp35_, (GtkWidget*) _tmp36_);
	_tmp37_ = event_box;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp37_);
	gtk_widget_show_all ((GtkWidget*) self);
	_g_object_unref0 (content_icon);
	_g_free0 (glib_type);
	_g_free0 (mime_type);
	_g_object_unref0 (grid);
	_g_object_unref0 (event_box);
	return obj;
}

static void
attachment_button_class_init (AttachmentButtonClass * klass,
                              gpointer klass_data)
{
	attachment_button_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &AttachmentButton_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_attachment_button_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_attachment_button_set_property;
	G_OBJECT_CLASS (klass)->constructor = attachment_button_constructor;
	G_OBJECT_CLASS (klass)->finalize = attachment_button_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), ATTACHMENT_BUTTON_MIME_PART_PROPERTY, attachment_button_properties[ATTACHMENT_BUTTON_MIME_PART_PROPERTY] = g_param_spec_object ("mime-part", "mime-part", "mime-part", camel_mime_part_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY, attachment_button_properties[ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY] = g_param_spec_object ("loading-cancellable", "loading-cancellable", "loading-cancellable", g_cancellable_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}

static void
attachment_button_instance_init (AttachmentButton * self,
                                 gpointer klass)
{
	self->priv = attachment_button_get_instance_private (self);
}

static void
attachment_button_finalize (GObject * obj)
{
	AttachmentButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_ATTACHMENT_BUTTON, AttachmentButton);
	_g_object_unref0 (self->priv->_mime_part);
	_g_object_unref0 (self->priv->preview_image);
	_g_object_unref0 (self->priv->name_label);
	_g_object_unref0 (self->priv->size_label);
	G_OBJECT_CLASS (attachment_button_parent_class)->finalize (obj);
}

static GType
attachment_button_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (AttachmentButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) attachment_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AttachmentButton), 0, (GInstanceInitFunc) attachment_button_instance_init, NULL };
	GType attachment_button_type_id;
	attachment_button_type_id = g_type_register_static (gtk_flow_box_child_get_type (), "AttachmentButton", &g_define_type_info, 0);
	AttachmentButton_private_offset = g_type_add_instance_private (attachment_button_type_id, sizeof (AttachmentButtonPrivate));
	return attachment_button_type_id;
}

GType
attachment_button_get_type (void)
{
	static volatile gsize attachment_button_type_id__once = 0;
	if (g_once_init_enter (&attachment_button_type_id__once)) {
		GType attachment_button_type_id;
		attachment_button_type_id = attachment_button_get_type_once ();
		g_once_init_leave (&attachment_button_type_id__once, attachment_button_type_id);
	}
	return attachment_button_type_id__once;
}

static void
_vala_attachment_button_get_property (GObject * object,
                                      guint property_id,
                                      GValue * value,
                                      GParamSpec * pspec)
{
	AttachmentButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_ATTACHMENT_BUTTON, AttachmentButton);
	switch (property_id) {
		case ATTACHMENT_BUTTON_MIME_PART_PROPERTY:
		g_value_set_object (value, attachment_button_get_mime_part (self));
		break;
		case ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY:
		g_value_set_object (value, attachment_button_get_loading_cancellable (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_attachment_button_set_property (GObject * object,
                                      guint property_id,
                                      const GValue * value,
                                      GParamSpec * pspec)
{
	AttachmentButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_ATTACHMENT_BUTTON, AttachmentButton);
	switch (property_id) {
		case ATTACHMENT_BUTTON_MIME_PART_PROPERTY:
		attachment_button_set_mime_part (self, g_value_get_object (value));
		break;
		case ATTACHMENT_BUTTON_LOADING_CANCELLABLE_PROPERTY:
		attachment_button_set_loading_cancellable (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
