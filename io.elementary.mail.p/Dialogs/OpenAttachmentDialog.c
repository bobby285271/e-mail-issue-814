/* OpenAttachmentDialog.c generated by valac 0.56.3, the Vala compiler
 * generated from OpenAttachmentDialog.vala, do not modify */

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

#include <granite.h>
#include <glib-object.h>
#include <camel/camel.h>
#include <gtk/gtk.h>
#include <glib.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define MAIL_TYPE_OPEN_ATTACHMENT_DIALOG (mail_open_attachment_dialog_get_type ())
#define MAIL_OPEN_ATTACHMENT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialog))
#define MAIL_OPEN_ATTACHMENT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialogClass))
#define MAIL_IS_OPEN_ATTACHMENT_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAIL_TYPE_OPEN_ATTACHMENT_DIALOG))
#define MAIL_IS_OPEN_ATTACHMENT_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAIL_TYPE_OPEN_ATTACHMENT_DIALOG))
#define MAIL_OPEN_ATTACHMENT_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialogClass))

typedef struct _MailOpenAttachmentDialog MailOpenAttachmentDialog;
typedef struct _MailOpenAttachmentDialogClass MailOpenAttachmentDialogClass;
typedef struct _MailOpenAttachmentDialogPrivate MailOpenAttachmentDialogPrivate;
enum  {
	MAIL_OPEN_ATTACHMENT_DIALOG_0_PROPERTY,
	MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY,
	MAIL_OPEN_ATTACHMENT_DIALOG_NUM_PROPERTIES
};
static GParamSpec* mail_open_attachment_dialog_properties[MAIL_OPEN_ATTACHMENT_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _MailOpenAttachmentDialogShowFileAnywayData MailOpenAttachmentDialogShowFileAnywayData;

struct _MailOpenAttachmentDialog {
	GraniteMessageDialog parent_instance;
	MailOpenAttachmentDialogPrivate * priv;
};

struct _MailOpenAttachmentDialogClass {
	GraniteMessageDialogClass parent_class;
};

struct _MailOpenAttachmentDialogPrivate {
	CamelMimePart* _mime_part;
};

struct _MailOpenAttachmentDialogShowFileAnywayData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	MailOpenAttachmentDialog* self;
	GFileIOStream* iostream;
	GFile* file;
	CamelMimePart* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	GFileIOStream* _tmp4_;
	GFile* _tmp5_;
	GFile* _tmp6_;
	CamelMimePart* _tmp7_;
	CamelDataWrapper* _tmp8_;
	CamelDataWrapper* _tmp9_;
	GFileIOStream* _tmp10_;
	GOutputStream* _tmp11_;
	GOutputStream* _tmp12_;
	GFile* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	GError* e;
	GError* _tmp16_;
	const gchar* _tmp17_;
	GError* _inner_error0_;
};

static gint MailOpenAttachmentDialog_private_offset;
static gpointer mail_open_attachment_dialog_parent_class = NULL;

VALA_EXTERN GType mail_open_attachment_dialog_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MailOpenAttachmentDialog, g_object_unref)
VALA_EXTERN MailOpenAttachmentDialog* mail_open_attachment_dialog_new (GtkWindow* parent,
                                                           CamelMimePart* mime_part);
VALA_EXTERN MailOpenAttachmentDialog* mail_open_attachment_dialog_construct (GType object_type,
                                                                 GtkWindow* parent,
                                                                 CamelMimePart* mime_part);
static void mail_open_attachment_dialog_show_file_anyway_data_free (gpointer _data);
static void mail_open_attachment_dialog_show_file_anyway (MailOpenAttachmentDialog* self,
                                                   GAsyncReadyCallback _callback_,
                                                   gpointer _user_data_);
static void mail_open_attachment_dialog_show_file_anyway_finish (MailOpenAttachmentDialog* self,
                                                          GAsyncResult* _res_);
static gboolean mail_open_attachment_dialog_show_file_anyway_co (MailOpenAttachmentDialogShowFileAnywayData* _data_);
VALA_EXTERN CamelMimePart* mail_open_attachment_dialog_get_mime_part (MailOpenAttachmentDialog* self);
static void mail_open_attachment_dialog_show_file_anyway_ready (GObject* source_object,
                                                         GAsyncResult* _res_,
                                                         gpointer _user_data_);
static void mail_open_attachment_dialog_set_mime_part (MailOpenAttachmentDialog* self,
                                                CamelMimePart* value);
static GObject * mail_open_attachment_dialog_constructor (GType type,
                                                   guint n_construct_properties,
                                                   GObjectConstructParam * construct_properties);
static void _mail_open_attachment_dialog___lambda50_ (MailOpenAttachmentDialog* self,
                                               gint response_id);
static void __mail_open_attachment_dialog___lambda50__gtk_dialog_response (GtkDialog* _sender,
                                                                    gint response_id,
                                                                    gpointer self);
static void mail_open_attachment_dialog_finalize (GObject * obj);
static GType mail_open_attachment_dialog_get_type_once (void);
static void _vala_mail_open_attachment_dialog_get_property (GObject * object,
                                                     guint property_id,
                                                     GValue * value,
                                                     GParamSpec * pspec);
static void _vala_mail_open_attachment_dialog_set_property (GObject * object,
                                                     guint property_id,
                                                     const GValue * value,
                                                     GParamSpec * pspec);

static inline gpointer
mail_open_attachment_dialog_get_instance_private (MailOpenAttachmentDialog* self)
{
	return G_STRUCT_MEMBER_P (self, MailOpenAttachmentDialog_private_offset);
}

MailOpenAttachmentDialog*
mail_open_attachment_dialog_construct (GType object_type,
                                       GtkWindow* parent,
                                       CamelMimePart* mime_part)
{
	MailOpenAttachmentDialog * self = NULL;
	GThemedIcon* _tmp0_;
	GThemedIcon* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (mime_part != NULL, NULL);
	_tmp0_ = (GThemedIcon*) g_themed_icon_new ("dialog-warning");
	_tmp1_ = _tmp0_;
	_tmp2_ = camel_mime_part_get_filename (mime_part);
	_tmp3_ = g_strdup_printf (_ ("Are you sure you want to open %s?"), _tmp2_);
	_tmp4_ = _tmp3_;
	self = (MailOpenAttachmentDialog*) g_object_new (object_type, "image-icon", _tmp1_, "mime-part", mime_part, "primary-text", _tmp4_, "secondary-text", _ ("Attachments may cause damage to your system if opened. Only open files" \
" from trusted sources."), "transient-for", parent, "buttons", GTK_BUTTONS_CANCEL, NULL);
	_g_free0 (_tmp4_);
	_g_object_unref0 (_tmp1_);
	return self;
}

MailOpenAttachmentDialog*
mail_open_attachment_dialog_new (GtkWindow* parent,
                                 CamelMimePart* mime_part)
{
	return mail_open_attachment_dialog_construct (MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, parent, mime_part);
}

static void
mail_open_attachment_dialog_show_file_anyway_data_free (gpointer _data)
{
	MailOpenAttachmentDialogShowFileAnywayData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (MailOpenAttachmentDialogShowFileAnywayData, _data_);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
mail_open_attachment_dialog_show_file_anyway (MailOpenAttachmentDialog* self,
                                              GAsyncReadyCallback _callback_,
                                              gpointer _user_data_)
{
	MailOpenAttachmentDialogShowFileAnywayData* _data_;
	MailOpenAttachmentDialog* _tmp0_;
	g_return_if_fail (self != NULL);
	_data_ = g_slice_new0 (MailOpenAttachmentDialogShowFileAnywayData);
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, _callback_, _user_data_);
	g_task_set_task_data (_data_->_async_result, _data_, mail_open_attachment_dialog_show_file_anyway_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	mail_open_attachment_dialog_show_file_anyway_co (_data_);
}

static void
mail_open_attachment_dialog_show_file_anyway_finish (MailOpenAttachmentDialog* self,
                                                     GAsyncResult* _res_)
{
	MailOpenAttachmentDialogShowFileAnywayData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), NULL);
}

static void
mail_open_attachment_dialog_show_file_anyway_ready (GObject* source_object,
                                                    GAsyncResult* _res_,
                                                    gpointer _user_data_)
{
	MailOpenAttachmentDialogShowFileAnywayData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	mail_open_attachment_dialog_show_file_anyway_co (_data_);
}

static gboolean
mail_open_attachment_dialog_show_file_anyway_co (MailOpenAttachmentDialogShowFileAnywayData* _data_)
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
		_data_->_tmp0_ = _data_->self->priv->_mime_part;
		_data_->_tmp1_ = camel_mime_part_get_filename (_data_->_tmp0_);
		_data_->_tmp2_ = g_strdup_printf ("XXXXXX-%s", _data_->_tmp1_);
		_data_->_tmp3_ = _data_->_tmp2_;
		_data_->_tmp4_ = NULL;
		_data_->_tmp5_ = g_file_new_tmp (_data_->_tmp3_, &_data_->_tmp4_, &_data_->_inner_error0_);
		_g_object_unref0 (_data_->iostream);
		_data_->iostream = _data_->_tmp4_;
		_data_->_tmp6_ = _data_->_tmp5_;
		_g_free0 (_data_->_tmp3_);
		_data_->file = _data_->_tmp6_;
		if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
			_g_object_unref0 (_data_->iostream);
			goto __catch0_g_error;
		}
		_data_->_tmp7_ = _data_->self->priv->_mime_part;
		_data_->_tmp8_ = camel_medium_get_content ((CamelMedium*) _data_->_tmp7_);
		_data_->_tmp9_ = _data_->_tmp8_;
		_data_->_tmp10_ = _data_->iostream;
		_data_->_tmp11_ = g_io_stream_get_output_stream ((GIOStream*) _data_->_tmp10_);
		_data_->_tmp12_ = _data_->_tmp11_;
		_data_->_state_ = 1;
		camel_data_wrapper_decode_to_output_stream (_data_->_tmp9_, _data_->_tmp12_, G_PRIORITY_DEFAULT, NULL, mail_open_attachment_dialog_show_file_anyway_ready, _data_);
		return FALSE;
		_state_1:
		camel_data_wrapper_decode_to_output_stream_finish (_data_->_tmp9_, _data_->_res_, &_data_->_inner_error0_);
		if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
			_g_object_unref0 (_data_->file);
			_g_object_unref0 (_data_->iostream);
			goto __catch0_g_error;
		}
		_data_->_tmp13_ = _data_->file;
		_data_->_tmp14_ = g_file_get_uri (_data_->_tmp13_);
		_data_->_tmp15_ = _data_->_tmp14_;
		_data_->_state_ = 2;
		g_app_info_launch_default_for_uri_async (_data_->_tmp15_, G_TYPE_CHECK_INSTANCE_CAST (NULL, g_app_launch_context_get_type (), GAppLaunchContext), NULL, mail_open_attachment_dialog_show_file_anyway_ready, _data_);
		return FALSE;
		_state_2:
		g_app_info_launch_default_for_uri_finish (_data_->_res_, &_data_->_inner_error0_);
		_g_free0 (_data_->_tmp15_);
		if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
			_g_object_unref0 (_data_->file);
			_g_object_unref0 (_data_->iostream);
			goto __catch0_g_error;
		}
		_g_object_unref0 (_data_->file);
		_g_object_unref0 (_data_->iostream);
	}
	goto __finally0;
	__catch0_g_error:
	{
		_data_->e = _data_->_inner_error0_;
		_data_->_inner_error0_ = NULL;
		_data_->_tmp16_ = _data_->e;
		_data_->_tmp17_ = _data_->_tmp16_->message;
		g_critical ("OpenAttachmentDialog.vala:55: %s", _data_->_tmp17_);
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
mail_open_attachment_dialog_get_mime_part (MailOpenAttachmentDialog* self)
{
	CamelMimePart* result;
	CamelMimePart* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_mime_part;
	result = _tmp0_;
	return result;
}

static void
mail_open_attachment_dialog_set_mime_part (MailOpenAttachmentDialog* self,
                                           CamelMimePart* value)
{
	CamelMimePart* old_value;
	g_return_if_fail (self != NULL);
	old_value = mail_open_attachment_dialog_get_mime_part (self);
	if (old_value != value) {
		CamelMimePart* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_mime_part);
		self->priv->_mime_part = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, mail_open_attachment_dialog_properties[MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY]);
	}
}

static void
_mail_open_attachment_dialog___lambda50_ (MailOpenAttachmentDialog* self,
                                          gint response_id)
{
	if (response_id == ((gint) GTK_RESPONSE_OK)) {
		mail_open_attachment_dialog_show_file_anyway (self, NULL, NULL);
	}
}

static void
__mail_open_attachment_dialog___lambda50__gtk_dialog_response (GtkDialog* _sender,
                                                               gint response_id,
                                                               gpointer self)
{
	_mail_open_attachment_dialog___lambda50_ ((MailOpenAttachmentDialog*) self, response_id);
}

static GObject *
mail_open_attachment_dialog_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	MailOpenAttachmentDialog * self;
	GtkButton* open_button = NULL;
	GtkButton* _tmp0_;
	GtkButton* _tmp1_;
	GtkStyleContext* _tmp2_;
	GtkButton* _tmp3_;
	parent_class = G_OBJECT_CLASS (mail_open_attachment_dialog_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialog);
	_tmp0_ = (GtkButton*) gtk_button_new_with_label (_ ("Open Anyway"));
	g_object_ref_sink (_tmp0_);
	open_button = _tmp0_;
	_tmp1_ = open_button;
	_tmp2_ = gtk_widget_get_style_context ((GtkWidget*) _tmp1_);
	gtk_style_context_add_class (_tmp2_, GTK_STYLE_CLASS_DESTRUCTIVE_ACTION);
	_tmp3_ = open_button;
	gtk_dialog_add_action_widget ((GtkDialog*) self, (GtkWidget*) _tmp3_, (gint) GTK_RESPONSE_OK);
	g_signal_connect_object ((GtkDialog*) self, "response", (GCallback) __mail_open_attachment_dialog___lambda50__gtk_dialog_response, self, 0);
	_g_object_unref0 (open_button);
	return obj;
}

static void
mail_open_attachment_dialog_class_init (MailOpenAttachmentDialogClass * klass,
                                        gpointer klass_data)
{
	mail_open_attachment_dialog_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &MailOpenAttachmentDialog_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_mail_open_attachment_dialog_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_mail_open_attachment_dialog_set_property;
	G_OBJECT_CLASS (klass)->constructor = mail_open_attachment_dialog_constructor;
	G_OBJECT_CLASS (klass)->finalize = mail_open_attachment_dialog_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY, mail_open_attachment_dialog_properties[MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY] = g_param_spec_object ("mime-part", "mime-part", "mime-part", camel_mime_part_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}

static void
mail_open_attachment_dialog_instance_init (MailOpenAttachmentDialog * self,
                                           gpointer klass)
{
	self->priv = mail_open_attachment_dialog_get_instance_private (self);
}

static void
mail_open_attachment_dialog_finalize (GObject * obj)
{
	MailOpenAttachmentDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialog);
	_g_object_unref0 (self->priv->_mime_part);
	G_OBJECT_CLASS (mail_open_attachment_dialog_parent_class)->finalize (obj);
}

static GType
mail_open_attachment_dialog_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (MailOpenAttachmentDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) mail_open_attachment_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MailOpenAttachmentDialog), 0, (GInstanceInitFunc) mail_open_attachment_dialog_instance_init, NULL };
	GType mail_open_attachment_dialog_type_id;
	mail_open_attachment_dialog_type_id = g_type_register_static (GRANITE_TYPE_MESSAGE_DIALOG, "MailOpenAttachmentDialog", &g_define_type_info, 0);
	MailOpenAttachmentDialog_private_offset = g_type_add_instance_private (mail_open_attachment_dialog_type_id, sizeof (MailOpenAttachmentDialogPrivate));
	return mail_open_attachment_dialog_type_id;
}

GType
mail_open_attachment_dialog_get_type (void)
{
	static volatile gsize mail_open_attachment_dialog_type_id__once = 0;
	if (g_once_init_enter (&mail_open_attachment_dialog_type_id__once)) {
		GType mail_open_attachment_dialog_type_id;
		mail_open_attachment_dialog_type_id = mail_open_attachment_dialog_get_type_once ();
		g_once_init_leave (&mail_open_attachment_dialog_type_id__once, mail_open_attachment_dialog_type_id);
	}
	return mail_open_attachment_dialog_type_id__once;
}

static void
_vala_mail_open_attachment_dialog_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec)
{
	MailOpenAttachmentDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialog);
	switch (property_id) {
		case MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY:
		g_value_set_object (value, mail_open_attachment_dialog_get_mime_part (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_mail_open_attachment_dialog_set_property (GObject * object,
                                                guint property_id,
                                                const GValue * value,
                                                GParamSpec * pspec)
{
	MailOpenAttachmentDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAIL_TYPE_OPEN_ATTACHMENT_DIALOG, MailOpenAttachmentDialog);
	switch (property_id) {
		case MAIL_OPEN_ATTACHMENT_DIALOG_MIME_PART_PROPERTY:
		mail_open_attachment_dialog_set_mime_part (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

