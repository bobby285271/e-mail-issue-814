/* InsertLinkDialog.c generated by valac 0.56.3, the Vala compiler
 * generated from InsertLinkDialog.vala, do not modify */

/*
* Copyright (c) 2017-2018 elementary, Inc. (https://elementary.io)
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
* along with this program. If not, see <http://www.gnu.org/licenses/>
*/

#include <granite.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_INSERT_LINK_DIALOG (insert_link_dialog_get_type ())
#define INSERT_LINK_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_INSERT_LINK_DIALOG, InsertLinkDialog))
#define INSERT_LINK_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_INSERT_LINK_DIALOG, InsertLinkDialogClass))
#define IS_INSERT_LINK_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_INSERT_LINK_DIALOG))
#define IS_INSERT_LINK_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_INSERT_LINK_DIALOG))
#define INSERT_LINK_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_INSERT_LINK_DIALOG, InsertLinkDialogClass))

typedef struct _InsertLinkDialog InsertLinkDialog;
typedef struct _InsertLinkDialogClass InsertLinkDialogClass;
typedef struct _InsertLinkDialogPrivate InsertLinkDialogPrivate;
enum  {
	INSERT_LINK_DIALOG_0_PROPERTY,
	INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY,
	INSERT_LINK_DIALOG_NUM_PROPERTIES
};
static GParamSpec* insert_link_dialog_properties[INSERT_LINK_DIALOG_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _Block23Data Block23Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
enum  {
	INSERT_LINK_DIALOG_INSERT_LINK_SIGNAL,
	INSERT_LINK_DIALOG_NUM_SIGNALS
};
static guint insert_link_dialog_signals[INSERT_LINK_DIALOG_NUM_SIGNALS] = {0};

struct _InsertLinkDialog {
	GraniteDialog parent_instance;
	InsertLinkDialogPrivate * priv;
};

struct _InsertLinkDialogClass {
	GraniteDialogClass parent_class;
};

struct _InsertLinkDialogPrivate {
	gchar* _selected_text;
};

struct _Block23Data {
	int _ref_count_;
	InsertLinkDialog* self;
	GtkEntry* url_entry;
	GtkEntry* title_entry;
	GtkWidget* insert_button;
};

static gint InsertLinkDialog_private_offset;
static gpointer insert_link_dialog_parent_class = NULL;

VALA_EXTERN GType insert_link_dialog_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (InsertLinkDialog, g_object_unref)
VALA_EXTERN InsertLinkDialog* insert_link_dialog_new (const gchar* text);
VALA_EXTERN InsertLinkDialog* insert_link_dialog_construct (GType object_type,
                                                const gchar* text);
static gboolean insert_link_dialog_validate_url (InsertLinkDialog* self,
                                          const gchar* url);
VALA_EXTERN const gchar* insert_link_dialog_get_selected_text (InsertLinkDialog* self);
static void insert_link_dialog_set_selected_text (InsertLinkDialog* self,
                                           const gchar* value);
static void g_cclosure_user_marshal_VOID__STRING_STRING (GClosure * closure,
                                                  GValue * return_value,
                                                  guint n_param_values,
                                                  const GValue * param_values,
                                                  gpointer invocation_hint,
                                                  gpointer marshal_data);
static GObject * insert_link_dialog_constructor (GType type,
                                          guint n_construct_properties,
                                          GObjectConstructParam * construct_properties);
static Block23Data* block23_data_ref (Block23Data* _data23_);
static void block23_data_unref (void * _userdata_);
static void _insert_link_dialog___lambda56_ (Block23Data* _data23_);
static void __insert_link_dialog___lambda56__gtk_editable_changed (GtkEditable* _sender,
                                                            gpointer self);
static void _insert_link_dialog___lambda57_ (Block23Data* _data23_,
                                      gint response_id);
static void __insert_link_dialog___lambda57__gtk_dialog_response (GtkDialog* _sender,
                                                           gint response_id,
                                                           gpointer self);
static void insert_link_dialog_finalize (GObject * obj);
static GType insert_link_dialog_get_type_once (void);
static void _vala_insert_link_dialog_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_insert_link_dialog_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);

static inline gpointer
insert_link_dialog_get_instance_private (InsertLinkDialog* self)
{
	return G_STRUCT_MEMBER_P (self, InsertLinkDialog_private_offset);
}

InsertLinkDialog*
insert_link_dialog_construct (GType object_type,
                              const gchar* text)
{
	InsertLinkDialog * self = NULL;
	self = (InsertLinkDialog*) g_object_new (object_type, "selected-text", text, NULL);
	return self;
}

InsertLinkDialog*
insert_link_dialog_new (const gchar* text)
{
	return insert_link_dialog_construct (TYPE_INSERT_LINK_DIALOG, text);
}

static gboolean
insert_link_dialog_validate_url (InsertLinkDialog* self,
                                 const gchar* url)
{
	gboolean _tmp3_ = FALSE;
	GError* _inner_error0_ = NULL;
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (url != NULL, FALSE);
	{
		GRegex* regex = NULL;
		GRegex* _tmp0_;
		_tmp0_ = g_regex_new ("^(?:http(s)?:\\/\\/)?[\\w.-]+(?:\\.[\\w\\.-]+)+[\\w\\-\\._~:/?#[\\]@!\\" \
"$&'\\(\\)\\*\\+,;=.]+$", 0, 0, &_inner_error0_);
		regex = _tmp0_;
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
		result = g_regex_match (regex, url, 0, NULL);
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp1_;
		const gchar* _tmp2_;
		e = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp1_ = e;
		_tmp2_ = _tmp1_->message;
		g_critical ("InsertLinkDialog.vala:107: Could not create URL Regex %s", _tmp2_);
		result = TRUE;
		_g_error_free0 (e);
		return result;
	}
	__finally0:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
	g_clear_error (&_inner_error0_);
	return _tmp3_;
}

const gchar*
insert_link_dialog_get_selected_text (InsertLinkDialog* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_selected_text;
	result = _tmp0_;
	return result;
}

static void
insert_link_dialog_set_selected_text (InsertLinkDialog* self,
                                      const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = insert_link_dialog_get_selected_text (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_selected_text);
		self->priv->_selected_text = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, insert_link_dialog_properties[INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY]);
	}
}

static void
g_cclosure_user_marshal_VOID__STRING_STRING (GClosure * closure,
                                             GValue * return_value,
                                             guint n_param_values,
                                             const GValue * param_values,
                                             gpointer invocation_hint,
                                             gpointer marshal_data)
{
	typedef void (*GMarshalFunc_VOID__STRING_STRING) (gpointer data1, const char* arg_1, const char* arg_2, gpointer data2);
	register GMarshalFunc_VOID__STRING_STRING callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__STRING_STRING) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_string (param_values + 2), data2);
}

static Block23Data*
block23_data_ref (Block23Data* _data23_)
{
	g_atomic_int_inc (&_data23_->_ref_count_);
	return _data23_;
}

static void
block23_data_unref (void * _userdata_)
{
	Block23Data* _data23_;
	_data23_ = (Block23Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data23_->_ref_count_)) {
		InsertLinkDialog* self;
		self = _data23_->self;
		_g_object_unref0 (_data23_->insert_button);
		_g_object_unref0 (_data23_->title_entry);
		_g_object_unref0 (_data23_->url_entry);
		_g_object_unref0 (self);
		g_slice_free (Block23Data, _data23_);
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
_insert_link_dialog___lambda56_ (Block23Data* _data23_)
{
	InsertLinkDialog* self;
	gboolean is_valid = FALSE;
	gchar* url_entry_text = NULL;
	GtkEntry* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_;
	GtkWidget* _tmp9_;
	self = _data23_->self;
	is_valid = FALSE;
	_tmp0_ = _data23_->url_entry;
	_tmp1_ = gtk_entry_get_text (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_strdup (_tmp2_);
	url_entry_text = _tmp3_;
	_tmp4_ = url_entry_text;
	if (g_strcmp0 (_tmp4_, "") == 0) {
		GtkEntry* _tmp5_;
		_tmp5_ = _data23_->url_entry;
		g_object_set (_tmp5_, "secondary-icon-name", NULL, NULL);
	} else {
		const gchar* _tmp6_;
		_tmp6_ = url_entry_text;
		if (insert_link_dialog_validate_url (self, _tmp6_)) {
			GtkEntry* _tmp7_;
			is_valid = TRUE;
			_tmp7_ = _data23_->url_entry;
			g_object_set (_tmp7_, "secondary-icon-name", "process-completed-symbolic", NULL);
		} else {
			GtkEntry* _tmp8_;
			_tmp8_ = _data23_->url_entry;
			g_object_set (_tmp8_, "secondary-icon-name", "process-error-symbolic", NULL);
		}
	}
	_tmp9_ = _data23_->insert_button;
	gtk_widget_set_sensitive (_tmp9_, is_valid);
	_g_free0 (url_entry_text);
}

static void
__insert_link_dialog___lambda56__gtk_editable_changed (GtkEditable* _sender,
                                                       gpointer self)
{
	_insert_link_dialog___lambda56_ (self);
}

static void
_insert_link_dialog___lambda57_ (Block23Data* _data23_,
                                 gint response_id)
{
	InsertLinkDialog* self;
	self = _data23_->self;
	switch (response_id) {
		case GTK_RESPONSE_APPLY:
		{
			GtkEntry* _tmp0_;
			const gchar* _tmp1_;
			const gchar* _tmp2_;
			GtkEntry* _tmp3_;
			const gchar* _tmp4_;
			const gchar* _tmp5_;
			_tmp0_ = _data23_->url_entry;
			_tmp1_ = gtk_entry_get_text (_tmp0_);
			_tmp2_ = _tmp1_;
			_tmp3_ = _data23_->title_entry;
			_tmp4_ = gtk_entry_get_text (_tmp3_);
			_tmp5_ = _tmp4_;
			g_signal_emit (self, insert_link_dialog_signals[INSERT_LINK_DIALOG_INSERT_LINK_SIGNAL], 0, _tmp2_, _tmp5_);
			gtk_widget_destroy ((GtkWidget*) self);
			break;
		}
		case GTK_RESPONSE_CANCEL:
		{
			gtk_widget_destroy ((GtkWidget*) self);
			break;
		}
		default:
		break;
	}
}

static void
__insert_link_dialog___lambda57__gtk_dialog_response (GtkDialog* _sender,
                                                      gint response_id,
                                                      gpointer self)
{
	_insert_link_dialog___lambda57_ (self, response_id);
}

static GObject *
insert_link_dialog_constructor (GType type,
                                guint n_construct_properties,
                                GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	InsertLinkDialog * self;
	Block23Data* _data23_;
	GtkLabel* url_label = NULL;
	GtkLabel* _tmp0_;
	GtkLabel* _tmp1_;
	GtkEntry* _tmp2_;
	GtkEntry* _tmp3_;
	GtkEntry* _tmp4_;
	GtkEntry* _tmp5_;
	GtkLabel* title_label = NULL;
	GtkLabel* _tmp6_;
	GtkLabel* _tmp7_;
	GtkEntry* _tmp8_;
	GtkEntry* _tmp9_;
	GtkEntry* _tmp10_;
	const gchar* _tmp11_;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp14_ = NULL;
	GtkGrid* _tmp15_;
	GtkGrid* _tmp16_;
	GtkGrid* _tmp17_;
	GtkLabel* _tmp18_;
	GtkGrid* _tmp19_;
	GtkEntry* _tmp20_;
	GtkGrid* _tmp21_;
	GtkLabel* _tmp22_;
	GtkGrid* _tmp23_;
	GtkEntry* _tmp24_;
	GtkGrid* _tmp25_;
	GtkBox* _tmp26_;
	GtkGrid* _tmp27_;
	GtkWidget* _tmp28_;
	GtkWidget* _tmp29_;
	GtkWidget* _tmp30_;
	GtkWidget* _tmp31_;
	GtkWidget* _tmp32_;
	GtkWidget* _tmp33_;
	GtkStyleContext* _tmp34_;
	GtkEntry* _tmp35_;
	parent_class = G_OBJECT_CLASS (insert_link_dialog_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_INSERT_LINK_DIALOG, InsertLinkDialog);
	_data23_ = g_slice_new0 (Block23Data);
	_data23_->_ref_count_ = 1;
	_data23_->self = g_object_ref (self);
	_tmp0_ = (GtkLabel*) gtk_label_new (_ ("URL:"));
	g_object_ref_sink (_tmp0_);
	url_label = _tmp0_;
	_tmp1_ = url_label;
	gtk_widget_set_halign ((GtkWidget*) _tmp1_, GTK_ALIGN_END);
	_tmp2_ = (GtkEntry*) gtk_entry_new ();
	g_object_ref_sink (_tmp2_);
	_data23_->url_entry = _tmp2_;
	_tmp3_ = _data23_->url_entry;
	gtk_entry_set_activates_default (_tmp3_, TRUE);
	_tmp4_ = _data23_->url_entry;
	gtk_entry_set_input_purpose (_tmp4_, GTK_INPUT_PURPOSE_URL);
	_tmp5_ = _data23_->url_entry;
	gtk_entry_set_placeholder_text (_tmp5_, _ ("https://example.com"));
	_tmp6_ = (GtkLabel*) gtk_label_new (_ ("Link Text:"));
	g_object_ref_sink (_tmp6_);
	title_label = _tmp6_;
	_tmp7_ = title_label;
	gtk_widget_set_halign ((GtkWidget*) _tmp7_, GTK_ALIGN_END);
	_tmp8_ = (GtkEntry*) gtk_entry_new ();
	g_object_ref_sink (_tmp8_);
	_data23_->title_entry = _tmp8_;
	_tmp9_ = _data23_->title_entry;
	gtk_entry_set_activates_default (_tmp9_, TRUE);
	_tmp10_ = _data23_->title_entry;
	gtk_entry_set_placeholder_text (_tmp10_, _ ("Example Website"));
	_tmp11_ = self->priv->_selected_text;
	if (g_strcmp0 (_tmp11_, "") != 0) {
		GtkEntry* _tmp12_;
		const gchar* _tmp13_;
		_tmp12_ = _data23_->title_entry;
		_tmp13_ = self->priv->_selected_text;
		gtk_entry_set_text (_tmp12_, _tmp13_);
	}
	_tmp14_ = (GtkGrid*) gtk_grid_new ();
	g_object_set ((GtkWidget*) _tmp14_, "margin", 12, NULL);
	gtk_widget_set_margin_top ((GtkWidget*) _tmp14_, 0);
	g_object_ref_sink (_tmp14_);
	grid = _tmp14_;
	_tmp15_ = grid;
	gtk_grid_set_column_spacing (_tmp15_, 6);
	_tmp16_ = grid;
	gtk_grid_set_row_spacing (_tmp16_, 6);
	_tmp17_ = grid;
	_tmp18_ = url_label;
	gtk_grid_attach (_tmp17_, (GtkWidget*) _tmp18_, 0, 0, 1, 1);
	_tmp19_ = grid;
	_tmp20_ = _data23_->url_entry;
	gtk_grid_attach (_tmp19_, (GtkWidget*) _tmp20_, 1, 0, 1, 1);
	_tmp21_ = grid;
	_tmp22_ = title_label;
	gtk_grid_attach (_tmp21_, (GtkWidget*) _tmp22_, 0, 1, 1, 1);
	_tmp23_ = grid;
	_tmp24_ = _data23_->title_entry;
	gtk_grid_attach (_tmp23_, (GtkWidget*) _tmp24_, 1, 1, 1, 1);
	_tmp25_ = grid;
	gtk_widget_show_all ((GtkWidget*) _tmp25_);
	_tmp26_ = gtk_dialog_get_content_area ((GtkDialog*) self);
	_tmp27_ = grid;
	gtk_container_add ((GtkContainer*) _tmp26_, (GtkWidget*) _tmp27_);
	gtk_dialog_add_button ((GtkDialog*) self, _ ("Cancel"), (gint) GTK_RESPONSE_CANCEL);
	_tmp28_ = gtk_dialog_add_button ((GtkDialog*) self, _ ("Insert Link"), (gint) GTK_RESPONSE_APPLY);
	_tmp29_ = _g_object_ref0 (_tmp28_);
	_data23_->insert_button = _tmp29_;
	_tmp30_ = _data23_->insert_button;
	gtk_widget_set_can_default (_tmp30_, TRUE);
	_tmp31_ = _data23_->insert_button;
	g_object_set (_tmp31_, "has-default", TRUE, NULL);
	_tmp32_ = _data23_->insert_button;
	gtk_widget_set_sensitive (_tmp32_, FALSE);
	_tmp33_ = _data23_->insert_button;
	_tmp34_ = gtk_widget_get_style_context (_tmp33_);
	gtk_style_context_add_class (_tmp34_, GTK_STYLE_CLASS_SUGGESTED_ACTION);
	gtk_window_set_deletable ((GtkWindow*) self, FALSE);
	gtk_window_set_modal ((GtkWindow*) self, TRUE);
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) self, TRUE);
	_tmp35_ = _data23_->url_entry;
	g_signal_connect_data ((GtkEditable*) _tmp35_, "changed", (GCallback) __insert_link_dialog___lambda56__gtk_editable_changed, block23_data_ref (_data23_), (GClosureNotify) block23_data_unref, 0);
	g_signal_connect_data ((GtkDialog*) self, "response", (GCallback) __insert_link_dialog___lambda57__gtk_dialog_response, block23_data_ref (_data23_), (GClosureNotify) block23_data_unref, 0);
	_g_object_unref0 (grid);
	_g_object_unref0 (title_label);
	_g_object_unref0 (url_label);
	block23_data_unref (_data23_);
	_data23_ = NULL;
	return obj;
}

static void
insert_link_dialog_class_init (InsertLinkDialogClass * klass,
                               gpointer klass_data)
{
	insert_link_dialog_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &InsertLinkDialog_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_insert_link_dialog_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_insert_link_dialog_set_property;
	G_OBJECT_CLASS (klass)->constructor = insert_link_dialog_constructor;
	G_OBJECT_CLASS (klass)->finalize = insert_link_dialog_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY, insert_link_dialog_properties[INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY] = g_param_spec_string ("selected-text", "selected-text", "selected-text", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	insert_link_dialog_signals[INSERT_LINK_DIALOG_INSERT_LINK_SIGNAL] = g_signal_new ("insert-link", TYPE_INSERT_LINK_DIALOG, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_STRING, G_TYPE_NONE, 2, G_TYPE_STRING, G_TYPE_STRING);
}

static void
insert_link_dialog_instance_init (InsertLinkDialog * self,
                                  gpointer klass)
{
	self->priv = insert_link_dialog_get_instance_private (self);
}

static void
insert_link_dialog_finalize (GObject * obj)
{
	InsertLinkDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_INSERT_LINK_DIALOG, InsertLinkDialog);
	_g_free0 (self->priv->_selected_text);
	G_OBJECT_CLASS (insert_link_dialog_parent_class)->finalize (obj);
}

static GType
insert_link_dialog_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (InsertLinkDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) insert_link_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (InsertLinkDialog), 0, (GInstanceInitFunc) insert_link_dialog_instance_init, NULL };
	GType insert_link_dialog_type_id;
	insert_link_dialog_type_id = g_type_register_static (GRANITE_TYPE_DIALOG, "InsertLinkDialog", &g_define_type_info, 0);
	InsertLinkDialog_private_offset = g_type_add_instance_private (insert_link_dialog_type_id, sizeof (InsertLinkDialogPrivate));
	return insert_link_dialog_type_id;
}

GType
insert_link_dialog_get_type (void)
{
	static volatile gsize insert_link_dialog_type_id__once = 0;
	if (g_once_init_enter (&insert_link_dialog_type_id__once)) {
		GType insert_link_dialog_type_id;
		insert_link_dialog_type_id = insert_link_dialog_get_type_once ();
		g_once_init_leave (&insert_link_dialog_type_id__once, insert_link_dialog_type_id);
	}
	return insert_link_dialog_type_id__once;
}

static void
_vala_insert_link_dialog_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	InsertLinkDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_INSERT_LINK_DIALOG, InsertLinkDialog);
	switch (property_id) {
		case INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY:
		g_value_set_string (value, insert_link_dialog_get_selected_text (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_insert_link_dialog_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	InsertLinkDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_INSERT_LINK_DIALOG, InsertLinkDialog);
	switch (property_id) {
		case INSERT_LINK_DIALOG_SELECTED_TEXT_PROPERTY:
		insert_link_dialog_set_selected_text (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

