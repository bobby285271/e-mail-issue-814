/* GravatarIcon.c generated by valac 0.56.3, the Vala compiler
 * generated from GravatarIcon.vala, do not modify */

/*
* Copyright 2021 elementary, Inc. (https://elementary.io)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*/

#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_GRAVATAR_ICON (gravatar_icon_get_type ())
#define GRAVATAR_ICON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_GRAVATAR_ICON, GravatarIcon))
#define GRAVATAR_ICON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_GRAVATAR_ICON, GravatarIconClass))
#define IS_GRAVATAR_ICON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_GRAVATAR_ICON))
#define IS_GRAVATAR_ICON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_GRAVATAR_ICON))
#define GRAVATAR_ICON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_GRAVATAR_ICON, GravatarIconClass))

typedef struct _GravatarIcon GravatarIcon;
typedef struct _GravatarIconClass GravatarIconClass;
typedef struct _GravatarIconPrivate GravatarIconPrivate;
enum  {
	GRAVATAR_ICON_0_PROPERTY,
	GRAVATAR_ICON_ADDRESS_PROPERTY,
	GRAVATAR_ICON_SCALE_PROPERTY,
	GRAVATAR_ICON_NUM_PROPERTIES
};
static GParamSpec* gravatar_icon_properties[GRAVATAR_ICON_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GravatarIconLoadAsyncData GravatarIconLoadAsyncData;

struct _GravatarIcon {
	GObject parent_instance;
	GravatarIconPrivate * priv;
};

struct _GravatarIconClass {
	GObjectClass parent_class;
};

struct _GravatarIconPrivate {
	gchar* _address;
	gint _scale;
};

struct _GravatarIconLoadAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GravatarIcon* self;
	gint size;
	GCancellable* cancellable;
	gchar* type;
	GInputStream* result;
	GInputStream* _tmp0_;
	gchar* _tmp1_;
	GInputStream* _tmp2_;
	GInputStream* _tmp3_;
	GError* _inner_error0_;
};

static gint GravatarIcon_private_offset;
static gpointer gravatar_icon_parent_class = NULL;
static GIconIface * gravatar_icon_g_icon_parent_iface = NULL;
static GLoadableIconIface * gravatar_icon_g_loadable_icon_parent_iface = NULL;

VALA_EXTERN GType gravatar_icon_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GravatarIcon, g_object_unref)
VALA_EXTERN GravatarIcon* gravatar_icon_new (const gchar* address,
                                 gint scale);
VALA_EXTERN GravatarIcon* gravatar_icon_construct (GType object_type,
                                       const gchar* address,
                                       gint scale);
static gboolean gravatar_icon_real_equal (GIcon* base,
                                   GIcon* icon);
VALA_EXTERN const gchar* gravatar_icon_get_address (GravatarIcon* self);
VALA_EXTERN gint gravatar_icon_get_scale (GravatarIcon* self);
static guint gravatar_icon_real_hash (GIcon* base);
static GInputStream* gravatar_icon_real_load (GLoadableIcon* base,
                                       gint size,
                                       gchar** type,
                                       GCancellable* cancellable,
                                       GError** error);
static void gravatar_icon_real_load_async_data_free (gpointer _data);
static void gravatar_icon_real_load_async (GLoadableIcon* base,
                                    gint size,
                                    GCancellable* cancellable,
                                    GAsyncReadyCallback _callback_,
                                    gpointer _user_data_);
static gboolean gravatar_icon_real_load_async_co (GravatarIconLoadAsyncData* _data_);
static void gravatar_icon_set_address (GravatarIcon* self,
                                const gchar* value);
static void gravatar_icon_set_scale (GravatarIcon* self,
                              gint value);
static void gravatar_icon_finalize (GObject * obj);
static GType gravatar_icon_get_type_once (void);
static void _vala_gravatar_icon_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec);
static void _vala_gravatar_icon_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec);

static inline gpointer
gravatar_icon_get_instance_private (GravatarIcon* self)
{
	return G_STRUCT_MEMBER_P (self, GravatarIcon_private_offset);
}

GravatarIcon*
gravatar_icon_construct (GType object_type,
                         const gchar* address,
                         gint scale)
{
	GravatarIcon * self = NULL;
	g_return_val_if_fail (address != NULL, NULL);
	self = (GravatarIcon*) g_object_new (object_type, "address", address, "scale", scale, NULL);
	return self;
}

GravatarIcon*
gravatar_icon_new (const gchar* address,
                   gint scale)
{
	return gravatar_icon_construct (TYPE_GRAVATAR_ICON, address, scale);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static gboolean
gravatar_icon_real_equal (GIcon* base,
                          GIcon* icon)
{
	GravatarIcon * self;
	GravatarIcon* gravatar_icon = NULL;
	GravatarIcon* _tmp0_;
	GravatarIcon* _tmp1_;
	gboolean _tmp2_ = FALSE;
	const gchar* _tmp3_;
	GravatarIcon* _tmp4_;
	const gchar* _tmp5_;
	gboolean result;
	self = (GravatarIcon*) base;
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (icon, TYPE_GRAVATAR_ICON, GravatarIcon));
	gravatar_icon = _tmp0_;
	_tmp1_ = gravatar_icon;
	if (_tmp1_ == NULL) {
		result = FALSE;
		_g_object_unref0 (gravatar_icon);
		return result;
	}
	_tmp3_ = self->priv->_address;
	_tmp4_ = gravatar_icon;
	_tmp5_ = _tmp4_->priv->_address;
	if (g_strcmp0 (_tmp3_, _tmp5_) == 0) {
		gint _tmp6_;
		GravatarIcon* _tmp7_;
		gint _tmp8_;
		_tmp6_ = self->priv->_scale;
		_tmp7_ = gravatar_icon;
		_tmp8_ = _tmp7_->priv->_scale;
		_tmp2_ = _tmp6_ == _tmp8_;
	} else {
		_tmp2_ = FALSE;
	}
	result = _tmp2_;
	_g_object_unref0 (gravatar_icon);
	return result;
}

static guint
gravatar_icon_real_hash (GIcon* base)
{
	GravatarIcon * self;
	const gchar* _tmp0_;
	gint _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	guint _tmp4_;
	guint result;
	self = (GravatarIcon*) base;
	_tmp0_ = self->priv->_address;
	_tmp1_ = self->priv->_scale;
	_tmp2_ = g_strdup_printf ("%s-@%i", _tmp0_, _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_str_hash (_tmp3_);
	_g_free0 (_tmp3_);
	result = _tmp4_;
	return result;
}

static gchar*
string_strip (const gchar* self)
{
	gchar* _result_ = NULL;
	gchar* _tmp0_;
	gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup (self);
	_result_ = _tmp0_;
	g_strstrip (_result_);
	result = _result_;
	return result;
}

static GInputStream*
gravatar_icon_real_load (GLoadableIcon* base,
                         gint size,
                         gchar** type,
                         GCancellable* cancellable,
                         GError** error)
{
	GravatarIcon * self;
	gchar* _vala_type = NULL;
	gchar* uri = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gint _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	GFile* server_file = NULL;
	const gchar* _tmp10_;
	GFile* _tmp11_;
	gchar* path = NULL;
	const gchar* _tmp12_;
	GFile* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	GFile* local_file = NULL;
	const gchar* _tmp18_;
	GFile* _tmp19_;
	GFile* _tmp20_;
	GFileInputStream* _tmp23_ = NULL;
	GFile* _tmp24_;
	GFileInputStream* _tmp25_;
	GFileInputStream* _tmp26_;
	GError* _inner_error0_ = NULL;
	GInputStream* result;
	self = (GravatarIcon*) base;
	_tmp0_ = self->priv->_address;
	_tmp1_ = string_strip (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_utf8_strdown (_tmp2_, (gssize) -1);
	_tmp4_ = _tmp3_;
	_tmp5_ = g_compute_checksum_for_string (G_CHECKSUM_MD5, _tmp4_, (gsize) -1);
	_tmp6_ = _tmp5_;
	_tmp7_ = self->priv->_scale;
	_tmp8_ = g_strdup_printf ("https://secure.gravatar.com/avatar/%s?d=404&s=%d", _tmp6_, size * _tmp7_);
	_tmp9_ = _tmp8_;
	_g_free0 (_tmp6_);
	_g_free0 (_tmp4_);
	_g_free0 (_tmp2_);
	uri = _tmp9_;
	_g_free0 (_vala_type);
	_vala_type = NULL;
	_tmp10_ = uri;
	_tmp11_ = g_file_new_for_uri (_tmp10_);
	server_file = _tmp11_;
	_tmp12_ = g_get_tmp_dir ();
	_tmp13_ = server_file;
	_tmp14_ = g_file_get_basename (_tmp13_);
	_tmp15_ = _tmp14_;
	_tmp16_ = g_build_filename (_tmp12_, _tmp15_, NULL);
	_tmp17_ = _tmp16_;
	_g_free0 (_tmp15_);
	path = _tmp17_;
	_tmp18_ = path;
	_tmp19_ = g_file_new_for_path (_tmp18_);
	local_file = _tmp19_;
	_tmp20_ = local_file;
	if (!g_file_query_exists (_tmp20_, cancellable)) {
		GFile* _tmp21_;
		GFile* _tmp22_;
		_tmp21_ = server_file;
		_tmp22_ = local_file;
		g_file_copy (_tmp21_, _tmp22_, G_FILE_COPY_OVERWRITE, cancellable, NULL, NULL, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			g_propagate_error (error, _inner_error0_);
			_g_object_unref0 (local_file);
			_g_free0 (path);
			_g_object_unref0 (server_file);
			_g_free0 (uri);
			_g_free0 (_vala_type);
			return NULL;
		}
	}
	_tmp24_ = local_file;
	_tmp25_ = g_file_read (_tmp24_, NULL, &_inner_error0_);
	_tmp23_ = _tmp25_;
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_propagate_error (error, _inner_error0_);
		_g_object_unref0 (local_file);
		_g_free0 (path);
		_g_object_unref0 (server_file);
		_g_free0 (uri);
		_g_free0 (_vala_type);
		return NULL;
	}
	_tmp26_ = _tmp23_;
	_tmp23_ = NULL;
	result = (GInputStream*) _tmp26_;
	_g_object_unref0 (_tmp23_);
	_g_object_unref0 (local_file);
	_g_free0 (path);
	_g_object_unref0 (server_file);
	_g_free0 (uri);
	if (type) {
		*type = _vala_type;
	} else {
		_g_free0 (_vala_type);
	}
	return result;
}

static void
gravatar_icon_real_load_async_data_free (gpointer _data)
{
	GravatarIconLoadAsyncData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->result);
	_g_object_unref0 (_data_->self);
	g_slice_free (GravatarIconLoadAsyncData, _data_);
}

static void
gravatar_icon_real_load_async (GLoadableIcon* base,
                               gint size,
                               GCancellable* cancellable,
                               GAsyncReadyCallback _callback_,
                               gpointer _user_data_)
{
	GravatarIcon * self;
	GravatarIconLoadAsyncData* _data_;
	GravatarIcon* _tmp0_;
	GCancellable* _tmp1_;
	self = (GravatarIcon*) base;
	_data_ = g_slice_new0 (GravatarIconLoadAsyncData);
	_data_->_async_result = g_task_new (G_OBJECT (self), cancellable, _callback_, _user_data_);
	g_task_set_task_data (_data_->_async_result, _data_, gravatar_icon_real_load_async_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_data_->size = size;
	_tmp1_ = _g_object_ref0 (cancellable);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp1_;
	gravatar_icon_real_load_async_co (_data_);
}

static GInputStream*
gravatar_icon_load_finish (GLoadableIcon* base,
                           GAsyncResult* _res_,
                           gchar** type,
                           GError** error)
{
	GInputStream* result;
	GravatarIconLoadAsyncData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return NULL;
	}
	if (type) {
		*type = _data_->type;
	} else {
		_g_free0 (_data_->type);
	}
	_data_->type = NULL;
	result = _data_->result;
	_data_->result = NULL;
	return result;
}

static gboolean
gravatar_icon_real_load_async_co (GravatarIconLoadAsyncData* _data_)
{
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp1_ = NULL;
	_data_->_tmp2_ = g_loadable_icon_load ((GLoadableIcon*) _data_->self, _data_->size, &_data_->_tmp1_, _data_->cancellable, &_data_->_inner_error0_);
	_g_free0 (_data_->type);
	_data_->type = _data_->_tmp1_;
	_data_->_tmp0_ = _data_->_tmp2_;
	if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
		g_task_return_error (_data_->_async_result, _data_->_inner_error0_);
		_g_free0 (_data_->type);
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_data_->_tmp3_ = _data_->_tmp0_;
	_data_->_tmp0_ = NULL;
	_data_->result = _data_->_tmp3_;
	_g_object_unref0 (_data_->_tmp0_);
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (!g_task_get_completed (_data_->_async_result)) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}

const gchar*
gravatar_icon_get_address (GravatarIcon* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_address;
	result = _tmp0_;
	return result;
}

static void
gravatar_icon_set_address (GravatarIcon* self,
                           const gchar* value)
{
	gchar* old_value;
	g_return_if_fail (self != NULL);
	old_value = gravatar_icon_get_address (self);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_address);
		self->priv->_address = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, gravatar_icon_properties[GRAVATAR_ICON_ADDRESS_PROPERTY]);
	}
}

gint
gravatar_icon_get_scale (GravatarIcon* self)
{
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_scale;
	return result;
}

static void
gravatar_icon_set_scale (GravatarIcon* self,
                         gint value)
{
	gint old_value;
	g_return_if_fail (self != NULL);
	old_value = gravatar_icon_get_scale (self);
	if (old_value != value) {
		self->priv->_scale = value;
		g_object_notify_by_pspec ((GObject *) self, gravatar_icon_properties[GRAVATAR_ICON_SCALE_PROPERTY]);
	}
}

static void
gravatar_icon_class_init (GravatarIconClass * klass,
                          gpointer klass_data)
{
	gravatar_icon_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GravatarIcon_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_gravatar_icon_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gravatar_icon_set_property;
	G_OBJECT_CLASS (klass)->finalize = gravatar_icon_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRAVATAR_ICON_ADDRESS_PROPERTY, gravatar_icon_properties[GRAVATAR_ICON_ADDRESS_PROPERTY] = g_param_spec_string ("address", "address", "address", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GRAVATAR_ICON_SCALE_PROPERTY, gravatar_icon_properties[GRAVATAR_ICON_SCALE_PROPERTY] = g_param_spec_int ("scale", "scale", "scale", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}

static void
gravatar_icon_g_icon_interface_init (GIconIface * iface,
                                     gpointer iface_data)
{
	gravatar_icon_g_icon_parent_iface = g_type_interface_peek_parent (iface);
	iface->equal = (gboolean (*) (GIcon*, GIcon*)) gravatar_icon_real_equal;
	iface->hash = (guint (*) (GIcon*)) gravatar_icon_real_hash;
}

static void
gravatar_icon_g_loadable_icon_interface_init (GLoadableIconIface * iface,
                                              gpointer iface_data)
{
	gravatar_icon_g_loadable_icon_parent_iface = g_type_interface_peek_parent (iface);
	iface->load = (GInputStream* (*) (GLoadableIcon*, gint, gchar**, GCancellable*, GError**)) gravatar_icon_real_load;
	iface->load_async = (void (*) (GLoadableIcon*, gint, GCancellable*, GAsyncReadyCallback, gpointer)) gravatar_icon_real_load_async;
	iface->load_finish = (GInputStream* (*) (GLoadableIcon*, GAsyncResult*, gchar**, GError**)) gravatar_icon_load_finish;
}

static void
gravatar_icon_instance_init (GravatarIcon * self,
                             gpointer klass)
{
	self->priv = gravatar_icon_get_instance_private (self);
}

static void
gravatar_icon_finalize (GObject * obj)
{
	GravatarIcon * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_GRAVATAR_ICON, GravatarIcon);
	_g_free0 (self->priv->_address);
	G_OBJECT_CLASS (gravatar_icon_parent_class)->finalize (obj);
}

static GType
gravatar_icon_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GravatarIconClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gravatar_icon_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GravatarIcon), 0, (GInstanceInitFunc) gravatar_icon_instance_init, NULL };
	static const GInterfaceInfo g_icon_info = { (GInterfaceInitFunc) gravatar_icon_g_icon_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo g_loadable_icon_info = { (GInterfaceInitFunc) gravatar_icon_g_loadable_icon_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gravatar_icon_type_id;
	gravatar_icon_type_id = g_type_register_static (G_TYPE_OBJECT, "GravatarIcon", &g_define_type_info, 0);
	g_type_add_interface_static (gravatar_icon_type_id, g_icon_get_type (), &g_icon_info);
	g_type_add_interface_static (gravatar_icon_type_id, g_loadable_icon_get_type (), &g_loadable_icon_info);
	GravatarIcon_private_offset = g_type_add_instance_private (gravatar_icon_type_id, sizeof (GravatarIconPrivate));
	return gravatar_icon_type_id;
}

GType
gravatar_icon_get_type (void)
{
	static volatile gsize gravatar_icon_type_id__once = 0;
	if (g_once_init_enter (&gravatar_icon_type_id__once)) {
		GType gravatar_icon_type_id;
		gravatar_icon_type_id = gravatar_icon_get_type_once ();
		g_once_init_leave (&gravatar_icon_type_id__once, gravatar_icon_type_id);
	}
	return gravatar_icon_type_id__once;
}

static void
_vala_gravatar_icon_get_property (GObject * object,
                                  guint property_id,
                                  GValue * value,
                                  GParamSpec * pspec)
{
	GravatarIcon * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_GRAVATAR_ICON, GravatarIcon);
	switch (property_id) {
		case GRAVATAR_ICON_ADDRESS_PROPERTY:
		g_value_set_string (value, gravatar_icon_get_address (self));
		break;
		case GRAVATAR_ICON_SCALE_PROPERTY:
		g_value_set_int (value, gravatar_icon_get_scale (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gravatar_icon_set_property (GObject * object,
                                  guint property_id,
                                  const GValue * value,
                                  GParamSpec * pspec)
{
	GravatarIcon * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_GRAVATAR_ICON, GravatarIcon);
	switch (property_id) {
		case GRAVATAR_ICON_ADDRESS_PROPERTY:
		gravatar_icon_set_address (self, g_value_get_string (value));
		break;
		case GRAVATAR_ICON_SCALE_PROPERTY:
		gravatar_icon_set_scale (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

