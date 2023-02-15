/* HeaderBar.c generated by valac 0.56.3, the Vala compiler
 * generated from HeaderBar.vala, do not modify */

/*-
 * Copyright 2017-2020 elementary, Inc. (https://elementary.io)
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

#include <handy.h>
#include <glib-object.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <granite.h>
#include <glib/gi18n-lib.h>
#include <stdlib.h>
#include <string.h>

#define MAIL_MAIN_WINDOW_ACTION_GROUP_PREFIX "win"
#define MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_GROUP_PREFIX "."
#define MAIL_MAIN_WINDOW_ACTION_REPLY "reply"
#define MAIL_MAIN_WINDOW_ACTION_REPLY_ALL "reply-all"
#define MAIL_MAIN_WINDOW_ACTION_FORWARD "forward"
#define MAIL_MAIN_WINDOW_ACTION_MARK_UNREAD "mark-unread"
#define MAIL_MAIN_WINDOW_ACTION_MARK_READ "mark-read"
#define MAIL_MAIN_WINDOW_ACTION_MARK_STAR "mark-star"
#define MAIL_MAIN_WINDOW_ACTION_MARK_UNSTAR "mark-unstar"
#define MAIL_MAIN_WINDOW_ACTION_ARCHIVE "archive"
#define MAIL_MAIN_WINDOW_ACTION_MOVE_TO_TRASH "trash"
#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define MAIL_TYPE_HEADER_BAR (mail_header_bar_get_type ())
#define MAIL_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAIL_TYPE_HEADER_BAR, MailHeaderBar))
#define MAIL_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAIL_TYPE_HEADER_BAR, MailHeaderBarClass))
#define MAIL_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAIL_TYPE_HEADER_BAR))
#define MAIL_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAIL_TYPE_HEADER_BAR))
#define MAIL_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAIL_TYPE_HEADER_BAR, MailHeaderBarClass))

typedef struct _MailHeaderBar MailHeaderBar;
typedef struct _MailHeaderBarClass MailHeaderBarClass;
typedef struct _MailHeaderBarPrivate MailHeaderBarPrivate;
enum  {
	MAIL_HEADER_BAR_0_PROPERTY,
	MAIL_HEADER_BAR_CAN_MARK_PROPERTY,
	MAIL_HEADER_BAR_NUM_PROPERTIES
};
static GParamSpec* mail_header_bar_properties[MAIL_HEADER_BAR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _MailHeaderBar {
	HdyHeaderBar parent_instance;
	MailHeaderBarPrivate * priv;
};

struct _MailHeaderBarClass {
	HdyHeaderBarClass parent_class;
};

struct _MailHeaderBarPrivate {
	gboolean _can_mark;
};

static gint MailHeaderBar_private_offset;
static gpointer mail_header_bar_parent_class = NULL;

VALA_EXTERN GType mail_header_bar_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MailHeaderBar, g_object_unref)
VALA_EXTERN MailHeaderBar* mail_header_bar_new (void);
VALA_EXTERN MailHeaderBar* mail_header_bar_construct (GType object_type);
VALA_EXTERN gboolean mail_header_bar_get_can_mark (MailHeaderBar* self);
VALA_EXTERN void mail_header_bar_set_can_mark (MailHeaderBar* self,
                                   gboolean value);
static GObject * mail_header_bar_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties);
static void _mail_header_bar___lambda13_ (MailHeaderBar* self);
static void __mail_header_bar___lambda13__gtk_button_clicked (GtkButton* _sender,
                                                       gpointer self);
static void mail_header_bar_finalize (GObject * obj);
static GType mail_header_bar_get_type_once (void);
static void _vala_mail_header_bar_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec);
static void _vala_mail_header_bar_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);
static gssize _vala_array_length (gpointer array);

static inline gpointer
mail_header_bar_get_instance_private (MailHeaderBar* self)
{
	return G_STRUCT_MEMBER_P (self, MailHeaderBar_private_offset);
}

MailHeaderBar*
mail_header_bar_construct (GType object_type)
{
	MailHeaderBar * self = NULL;
	GtkGrid* _tmp0_;
	GtkGrid* _tmp1_;
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp0_);
	_tmp1_ = _tmp0_;
	self = (MailHeaderBar*) g_object_new (object_type, "show-close-button", TRUE, "custom-title", _tmp1_, NULL);
	_g_object_unref0 (_tmp1_);
	return self;
}

MailHeaderBar*
mail_header_bar_new (void)
{
	return mail_header_bar_construct (MAIL_TYPE_HEADER_BAR);
}

gboolean
mail_header_bar_get_can_mark (MailHeaderBar* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_can_mark;
	return result;
}

void
mail_header_bar_set_can_mark (MailHeaderBar* self,
                              gboolean value)
{
	gboolean old_value;
	g_return_if_fail (self != NULL);
	old_value = mail_header_bar_get_can_mark (self);
	if (old_value != value) {
		self->priv->_can_mark = value;
		g_object_notify_by_pspec ((GObject *) self, mail_header_bar_properties[MAIL_HEADER_BAR_CAN_MARK_PROPERTY]);
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static void
_mail_header_bar___lambda13_ (MailHeaderBar* self)
{
	GError* _inner_error0_ = NULL;
	{
		g_app_info_launch_default_for_uri ("settings://accounts/online", NULL, &_inner_error0_);
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp0_;
		const gchar* _tmp1_;
		e = _inner_error0_;
		_inner_error0_ = NULL;
		_tmp0_ = e;
		_tmp1_ = _tmp0_->message;
		g_warning ("HeaderBar.vala:146: Failed to open account settings: %s", _tmp1_);
		_g_error_free0 (e);
	}
	__finally0:
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
		g_clear_error (&_inner_error0_);
		return;
	}
}

static void
__mail_header_bar___lambda13__gtk_button_clicked (GtkButton* _sender,
                                                  gpointer self)
{
	_mail_header_bar___lambda13_ ((MailHeaderBar*) self);
}

static GObject *
mail_header_bar_constructor (GType type,
                             guint n_construct_properties,
                             GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	MailHeaderBar * self;
	GtkApplication* application_instance = NULL;
	GApplication* _tmp0_;
	GtkApplication* _tmp1_;
	GraniteSwitchModelButton* load_images_menuitem = NULL;
	GraniteSwitchModelButton* _tmp2_;
	GtkModelButton* account_settings_menuitem = NULL;
	GtkModelButton* _tmp3_;
	GtkModelButton* _tmp4_;
	GtkSeparator* app_menu_separator = NULL;
	GtkSeparator* _tmp5_ = NULL;
	GtkGrid* app_menu_grid = NULL;
	GtkGrid* _tmp6_ = NULL;
	GtkGrid* _tmp7_;
	GraniteSwitchModelButton* _tmp8_;
	GtkGrid* _tmp9_;
	GtkSeparator* _tmp10_;
	GtkGrid* _tmp11_;
	GtkModelButton* _tmp12_;
	GtkGrid* _tmp13_;
	GtkPopover* app_menu_popover = NULL;
	GtkPopover* _tmp14_;
	GtkPopover* _tmp15_;
	GtkGrid* _tmp16_;
	GtkMenuButton* app_menu = NULL;
	GtkImage* _tmp17_;
	GtkPopover* _tmp18_;
	GtkPopover* _tmp19_;
	gchar* _tmp20_;
	GtkMenuButton* _tmp21_ = NULL;
	GtkButton* reply_button = NULL;
	GtkButton* _tmp22_;
	GtkButton* _tmp23_;
	GtkButton* _tmp24_;
	GtkApplication* _tmp25_;
	GtkButton* _tmp26_;
	const gchar* _tmp27_;
	const gchar* _tmp28_;
	gchar** _tmp29_;
	gchar** _tmp30_;
	gchar** _tmp31_;
	gint _tmp31__length1;
	gchar* _tmp32_;
	gchar* _tmp33_;
	GtkButton* reply_all_button = NULL;
	GtkButton* _tmp34_;
	GtkButton* _tmp35_;
	GtkButton* _tmp36_;
	GtkApplication* _tmp37_;
	GtkButton* _tmp38_;
	const gchar* _tmp39_;
	const gchar* _tmp40_;
	gchar** _tmp41_;
	gchar** _tmp42_;
	gchar** _tmp43_;
	gint _tmp43__length1;
	gchar* _tmp44_;
	gchar* _tmp45_;
	GtkButton* forward_button = NULL;
	GtkButton* _tmp46_;
	GtkButton* _tmp47_;
	GtkButton* _tmp48_;
	GtkApplication* _tmp49_;
	GtkButton* _tmp50_;
	const gchar* _tmp51_;
	const gchar* _tmp52_;
	gchar** _tmp53_;
	gchar** _tmp54_;
	gchar** _tmp55_;
	gint _tmp55__length1;
	gchar* _tmp56_;
	gchar* _tmp57_;
	GtkMenuItem* mark_unread_item = NULL;
	GtkMenuItem* _tmp58_;
	GtkMenuItem* _tmp59_;
	GtkMenuItem* _tmp60_;
	GtkMenuItem* _tmp61_;
	GtkMenuItem* _tmp62_;
	GtkMenuItem* _tmp63_;
	const gchar* _tmp64_;
	const gchar* _tmp65_;
	GraniteAccelLabel* _tmp66_;
	GraniteAccelLabel* _tmp67_;
	GtkMenuItem* mark_read_item = NULL;
	GtkMenuItem* _tmp68_;
	GtkMenuItem* _tmp69_;
	GtkMenuItem* _tmp70_;
	GtkMenuItem* _tmp71_;
	GtkMenuItem* _tmp72_;
	GtkMenuItem* _tmp73_;
	const gchar* _tmp74_;
	const gchar* _tmp75_;
	GraniteAccelLabel* _tmp76_;
	GraniteAccelLabel* _tmp77_;
	GtkMenuItem* mark_star_item = NULL;
	GtkMenuItem* _tmp78_;
	GtkMenuItem* _tmp79_;
	GtkMenuItem* _tmp80_;
	GtkMenuItem* _tmp81_;
	GtkMenuItem* _tmp82_;
	GtkMenuItem* _tmp83_;
	const gchar* _tmp84_;
	const gchar* _tmp85_;
	GraniteAccelLabel* _tmp86_;
	GraniteAccelLabel* _tmp87_;
	GtkMenuItem* mark_unstar_item = NULL;
	GtkMenuItem* _tmp88_;
	GtkMenuItem* _tmp89_;
	GtkMenuItem* _tmp90_;
	GtkMenuItem* _tmp91_;
	GtkMenuItem* _tmp92_;
	GtkMenuItem* _tmp93_;
	const gchar* _tmp94_;
	const gchar* _tmp95_;
	GraniteAccelLabel* _tmp96_;
	GraniteAccelLabel* _tmp97_;
	GtkMenu* mark_menu = NULL;
	GtkMenu* _tmp98_;
	GtkMenu* _tmp99_;
	GtkMenuItem* _tmp100_;
	GtkMenu* _tmp101_;
	GtkMenuItem* _tmp102_;
	GtkMenu* _tmp103_;
	GtkMenuItem* _tmp104_;
	GtkMenu* _tmp105_;
	GtkMenuItem* _tmp106_;
	GtkMenu* _tmp107_;
	GtkMenuButton* mark_button = NULL;
	GtkImage* _tmp108_;
	GtkMenu* _tmp109_;
	GtkMenu* _tmp110_;
	gchar* _tmp111_;
	GtkMenuButton* _tmp112_ = NULL;
	GtkButton* archive_button = NULL;
	GtkButton* _tmp113_;
	GtkButton* _tmp114_;
	GtkButton* _tmp115_;
	GtkApplication* _tmp116_;
	GtkButton* _tmp117_;
	const gchar* _tmp118_;
	const gchar* _tmp119_;
	gchar** _tmp120_;
	gchar** _tmp121_;
	gchar** _tmp122_;
	gint _tmp122__length1;
	gchar* _tmp123_;
	gchar* _tmp124_;
	GtkButton* trash_button = NULL;
	GtkButton* _tmp125_;
	GtkButton* _tmp126_;
	GtkButton* _tmp127_;
	GtkApplication* _tmp128_;
	GtkButton* _tmp129_;
	const gchar* _tmp130_;
	const gchar* _tmp131_;
	gchar** _tmp132_;
	gchar** _tmp133_;
	gchar** _tmp134_;
	gint _tmp134__length1;
	gchar* _tmp135_;
	gchar* _tmp136_;
	GtkButton* _tmp137_;
	GtkButton* _tmp138_;
	GtkButton* _tmp139_;
	GtkSeparator* _tmp140_;
	GtkSeparator* _tmp141_;
	GtkMenuButton* _tmp142_;
	GtkButton* _tmp143_;
	GtkButton* _tmp144_;
	GtkMenuButton* _tmp145_;
	GtkMenuButton* _tmp146_;
	GSettings* settings = NULL;
	GSettings* _tmp147_;
	GSettings* _tmp148_;
	GraniteSwitchModelButton* _tmp149_;
	GtkModelButton* _tmp150_;
	parent_class = G_OBJECT_CLASS (mail_header_bar_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAIL_TYPE_HEADER_BAR, MailHeaderBar);
	_tmp0_ = g_application_get_default ();
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_application_get_type (), GtkApplication));
	application_instance = _tmp1_;
	_tmp2_ = granite_switch_model_button_new (_ ("Always Show Remote Images"));
	g_object_ref_sink (_tmp2_);
	load_images_menuitem = _tmp2_;
	_tmp3_ = (GtkModelButton*) gtk_model_button_new ();
	g_object_ref_sink (_tmp3_);
	account_settings_menuitem = _tmp3_;
	_tmp4_ = account_settings_menuitem;
	g_object_set (_tmp4_, "text", _ ("Account Settings…"), NULL);
	_tmp5_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp5_, 3);
	gtk_widget_set_margin_top ((GtkWidget*) _tmp5_, 3);
	g_object_ref_sink (_tmp5_);
	app_menu_separator = _tmp5_;
	_tmp6_ = (GtkGrid*) gtk_grid_new ();
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp6_, 3);
	gtk_widget_set_margin_top ((GtkWidget*) _tmp6_, 3);
	gtk_orientable_set_orientation ((GtkOrientable*) _tmp6_, GTK_ORIENTATION_VERTICAL);
	g_object_ref_sink (_tmp6_);
	app_menu_grid = _tmp6_;
	_tmp7_ = app_menu_grid;
	_tmp8_ = load_images_menuitem;
	gtk_container_add ((GtkContainer*) _tmp7_, (GtkWidget*) _tmp8_);
	_tmp9_ = app_menu_grid;
	_tmp10_ = app_menu_separator;
	gtk_container_add ((GtkContainer*) _tmp9_, (GtkWidget*) _tmp10_);
	_tmp11_ = app_menu_grid;
	_tmp12_ = account_settings_menuitem;
	gtk_container_add ((GtkContainer*) _tmp11_, (GtkWidget*) _tmp12_);
	_tmp13_ = app_menu_grid;
	gtk_widget_show_all ((GtkWidget*) _tmp13_);
	_tmp14_ = (GtkPopover*) gtk_popover_new (NULL);
	g_object_ref_sink (_tmp14_);
	app_menu_popover = _tmp14_;
	_tmp15_ = app_menu_popover;
	_tmp16_ = app_menu_grid;
	gtk_container_add ((GtkContainer*) _tmp15_, (GtkWidget*) _tmp16_);
	_tmp17_ = (GtkImage*) gtk_image_new_from_icon_name ("open-menu", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp17_);
	_tmp18_ = app_menu_popover;
	_tmp19_ = _g_object_ref0 (_tmp18_);
	_tmp20_ = g_strdup (_ ("Menu"));
	_tmp21_ = (GtkMenuButton*) gtk_menu_button_new ();
	gtk_button_set_image ((GtkButton*) _tmp21_, (GtkWidget*) _tmp17_);
	_g_object_unref0 (_tmp17_);
	gtk_menu_button_set_popover (_tmp21_, _tmp19_);
	_g_object_unref0 (_tmp19_);
	gtk_widget_set_tooltip_text ((GtkWidget*) _tmp21_, _tmp20_);
	_g_free0 (_tmp20_);
	g_object_ref_sink (_tmp21_);
	app_menu = _tmp21_;
	_tmp22_ = (GtkButton*) gtk_button_new_from_icon_name ("mail-reply-sender", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp22_);
	reply_button = _tmp22_;
	_tmp23_ = reply_button;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp23_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_REPLY);
	_tmp24_ = reply_button;
	_tmp25_ = application_instance;
	_tmp26_ = reply_button;
	_tmp27_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp26_);
	_tmp28_ = _tmp27_;
	_tmp30_ = _tmp29_ = gtk_application_get_accels_for_action (_tmp25_, _tmp28_);
	_tmp31_ = _tmp30_;
	_tmp31__length1 = _vala_array_length (_tmp29_);
	_tmp32_ = granite_markup_accel_tooltip (_tmp31_, (gint) _vala_array_length (_tmp29_), _ ("Reply"));
	_tmp33_ = _tmp32_;
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp24_, _tmp33_);
	_g_free0 (_tmp33_);
	_tmp31_ = (_vala_array_free (_tmp31_, _tmp31__length1, (GDestroyNotify) g_free), NULL);
	_tmp34_ = (GtkButton*) gtk_button_new_from_icon_name ("mail-reply-all", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp34_);
	reply_all_button = _tmp34_;
	_tmp35_ = reply_all_button;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp35_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_REPLY_ALL);
	_tmp36_ = reply_all_button;
	_tmp37_ = application_instance;
	_tmp38_ = reply_all_button;
	_tmp39_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp38_);
	_tmp40_ = _tmp39_;
	_tmp42_ = _tmp41_ = gtk_application_get_accels_for_action (_tmp37_, _tmp40_);
	_tmp43_ = _tmp42_;
	_tmp43__length1 = _vala_array_length (_tmp41_);
	_tmp44_ = granite_markup_accel_tooltip (_tmp43_, (gint) _vala_array_length (_tmp41_), _ ("Reply All"));
	_tmp45_ = _tmp44_;
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp36_, _tmp45_);
	_g_free0 (_tmp45_);
	_tmp43_ = (_vala_array_free (_tmp43_, _tmp43__length1, (GDestroyNotify) g_free), NULL);
	_tmp46_ = (GtkButton*) gtk_button_new_from_icon_name ("mail-forward", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp46_);
	forward_button = _tmp46_;
	_tmp47_ = forward_button;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp47_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_FORWARD);
	_tmp48_ = forward_button;
	_tmp49_ = application_instance;
	_tmp50_ = forward_button;
	_tmp51_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp50_);
	_tmp52_ = _tmp51_;
	_tmp54_ = _tmp53_ = gtk_application_get_accels_for_action (_tmp49_, _tmp52_);
	_tmp55_ = _tmp54_;
	_tmp55__length1 = _vala_array_length (_tmp53_);
	_tmp56_ = granite_markup_accel_tooltip (_tmp55_, (gint) _vala_array_length (_tmp53_), _ ("Forward"));
	_tmp57_ = _tmp56_;
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp48_, _tmp57_);
	_g_free0 (_tmp57_);
	_tmp55_ = (_vala_array_free (_tmp55_, _tmp55__length1, (GDestroyNotify) g_free), NULL);
	_tmp58_ = (GtkMenuItem*) gtk_menu_item_new ();
	g_object_ref_sink (_tmp58_);
	mark_unread_item = _tmp58_;
	_tmp59_ = mark_unread_item;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp59_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_MARK_UNREAD);
	_tmp60_ = mark_unread_item;
	_tmp61_ = mark_unread_item;
	g_object_bind_property_with_closures ((GObject*) _tmp60_, "sensitive", (GObject*) _tmp61_, "visible", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)));
	_tmp62_ = mark_unread_item;
	_tmp63_ = mark_unread_item;
	_tmp64_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp63_);
	_tmp65_ = _tmp64_;
	_tmp66_ = granite_accel_label_new_from_action_name (_ ("Mark as Unread"), _tmp65_);
	g_object_ref_sink (_tmp66_);
	_tmp67_ = _tmp66_;
	gtk_container_add ((GtkContainer*) _tmp62_, (GtkWidget*) _tmp67_);
	_g_object_unref0 (_tmp67_);
	_tmp68_ = (GtkMenuItem*) gtk_menu_item_new ();
	g_object_ref_sink (_tmp68_);
	mark_read_item = _tmp68_;
	_tmp69_ = mark_read_item;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp69_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_MARK_READ);
	_tmp70_ = mark_read_item;
	_tmp71_ = mark_read_item;
	g_object_bind_property_with_closures ((GObject*) _tmp70_, "sensitive", (GObject*) _tmp71_, "visible", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)));
	_tmp72_ = mark_read_item;
	_tmp73_ = mark_read_item;
	_tmp74_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp73_);
	_tmp75_ = _tmp74_;
	_tmp76_ = granite_accel_label_new_from_action_name (_ ("Mark as Read"), _tmp75_);
	g_object_ref_sink (_tmp76_);
	_tmp77_ = _tmp76_;
	gtk_container_add ((GtkContainer*) _tmp72_, (GtkWidget*) _tmp77_);
	_g_object_unref0 (_tmp77_);
	_tmp78_ = (GtkMenuItem*) gtk_menu_item_new ();
	g_object_ref_sink (_tmp78_);
	mark_star_item = _tmp78_;
	_tmp79_ = mark_star_item;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp79_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_MARK_STAR);
	_tmp80_ = mark_star_item;
	_tmp81_ = mark_star_item;
	g_object_bind_property_with_closures ((GObject*) _tmp80_, "sensitive", (GObject*) _tmp81_, "visible", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)));
	_tmp82_ = mark_star_item;
	_tmp83_ = mark_star_item;
	_tmp84_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp83_);
	_tmp85_ = _tmp84_;
	_tmp86_ = granite_accel_label_new_from_action_name (_ ("Star"), _tmp85_);
	g_object_ref_sink (_tmp86_);
	_tmp87_ = _tmp86_;
	gtk_container_add ((GtkContainer*) _tmp82_, (GtkWidget*) _tmp87_);
	_g_object_unref0 (_tmp87_);
	_tmp88_ = (GtkMenuItem*) gtk_menu_item_new ();
	g_object_ref_sink (_tmp88_);
	mark_unstar_item = _tmp88_;
	_tmp89_ = mark_unstar_item;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp89_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_MARK_UNSTAR);
	_tmp90_ = mark_unstar_item;
	_tmp91_ = mark_unstar_item;
	g_object_bind_property_with_closures ((GObject*) _tmp90_, "sensitive", (GObject*) _tmp91_, "visible", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)));
	_tmp92_ = mark_unstar_item;
	_tmp93_ = mark_unstar_item;
	_tmp94_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp93_);
	_tmp95_ = _tmp94_;
	_tmp96_ = granite_accel_label_new_from_action_name (_ ("Unstar"), _tmp95_);
	g_object_ref_sink (_tmp96_);
	_tmp97_ = _tmp96_;
	gtk_container_add ((GtkContainer*) _tmp92_, (GtkWidget*) _tmp97_);
	_g_object_unref0 (_tmp97_);
	_tmp98_ = (GtkMenu*) gtk_menu_new ();
	g_object_ref_sink (_tmp98_);
	mark_menu = _tmp98_;
	_tmp99_ = mark_menu;
	_tmp100_ = mark_unread_item;
	gtk_container_add ((GtkContainer*) _tmp99_, (GtkWidget*) _tmp100_);
	_tmp101_ = mark_menu;
	_tmp102_ = mark_read_item;
	gtk_container_add ((GtkContainer*) _tmp101_, (GtkWidget*) _tmp102_);
	_tmp103_ = mark_menu;
	_tmp104_ = mark_star_item;
	gtk_container_add ((GtkContainer*) _tmp103_, (GtkWidget*) _tmp104_);
	_tmp105_ = mark_menu;
	_tmp106_ = mark_unstar_item;
	gtk_container_add ((GtkContainer*) _tmp105_, (GtkWidget*) _tmp106_);
	_tmp107_ = mark_menu;
	gtk_widget_show_all ((GtkWidget*) _tmp107_);
	_tmp108_ = (GtkImage*) gtk_image_new_from_icon_name ("edit-mark", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp108_);
	_tmp109_ = mark_menu;
	_tmp110_ = _g_object_ref0 (_tmp109_);
	_tmp111_ = g_strdup (_ ("Mark Conversation"));
	_tmp112_ = (GtkMenuButton*) gtk_menu_button_new ();
	gtk_button_set_image ((GtkButton*) _tmp112_, (GtkWidget*) _tmp108_);
	_g_object_unref0 (_tmp108_);
	gtk_menu_button_set_popup (_tmp112_, _tmp110_);
	_g_object_unref0 (_tmp110_);
	gtk_widget_set_tooltip_text ((GtkWidget*) _tmp112_, _tmp111_);
	_g_free0 (_tmp111_);
	g_object_ref_sink (_tmp112_);
	mark_button = _tmp112_;
	_tmp113_ = (GtkButton*) gtk_button_new_from_icon_name ("mail-archive", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp113_);
	archive_button = _tmp113_;
	_tmp114_ = archive_button;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp114_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_ARCHIVE);
	_tmp115_ = archive_button;
	_tmp116_ = application_instance;
	_tmp117_ = archive_button;
	_tmp118_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp117_);
	_tmp119_ = _tmp118_;
	_tmp121_ = _tmp120_ = gtk_application_get_accels_for_action (_tmp116_, _tmp119_);
	_tmp122_ = _tmp121_;
	_tmp122__length1 = _vala_array_length (_tmp120_);
	_tmp123_ = granite_markup_accel_tooltip (_tmp122_, (gint) _vala_array_length (_tmp120_), _ ("Move conversations to archive"));
	_tmp124_ = _tmp123_;
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp115_, _tmp124_);
	_g_free0 (_tmp124_);
	_tmp122_ = (_vala_array_free (_tmp122_, _tmp122__length1, (GDestroyNotify) g_free), NULL);
	_tmp125_ = (GtkButton*) gtk_button_new_from_icon_name ("edit-delete", (GtkIconSize) GTK_ICON_SIZE_LARGE_TOOLBAR);
	g_object_ref_sink (_tmp125_);
	trash_button = _tmp125_;
	_tmp126_ = trash_button;
	gtk_actionable_set_action_name ((GtkActionable*) _tmp126_, MAIL_MAIN_WINDOW_ACTION_PREFIX MAIL_MAIN_WINDOW_ACTION_MOVE_TO_TRASH);
	_tmp127_ = trash_button;
	_tmp128_ = application_instance;
	_tmp129_ = trash_button;
	_tmp130_ = gtk_actionable_get_action_name ((GtkActionable*) _tmp129_);
	_tmp131_ = _tmp130_;
	_tmp133_ = _tmp132_ = gtk_application_get_accels_for_action (_tmp128_, _tmp131_);
	_tmp134_ = _tmp133_;
	_tmp134__length1 = _vala_array_length (_tmp132_);
	_tmp135_ = granite_markup_accel_tooltip (_tmp134_, (gint) _vala_array_length (_tmp132_), _ ("Move conversations to Trash"));
	_tmp136_ = _tmp135_;
	gtk_widget_set_tooltip_markup ((GtkWidget*) _tmp127_, _tmp136_);
	_g_free0 (_tmp136_);
	_tmp134_ = (_vala_array_free (_tmp134_, _tmp134__length1, (GDestroyNotify) g_free), NULL);
	_tmp137_ = reply_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp137_);
	_tmp138_ = reply_all_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp138_);
	_tmp139_ = forward_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp139_);
	_tmp140_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_VERTICAL);
	g_object_ref_sink (_tmp140_);
	_tmp141_ = _tmp140_;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp141_);
	_g_object_unref0 (_tmp141_);
	_tmp142_ = mark_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp142_);
	_tmp143_ = archive_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp143_);
	_tmp144_ = trash_button;
	hdy_header_bar_pack_start ((HdyHeaderBar*) self, (GtkWidget*) _tmp144_);
	_tmp145_ = app_menu;
	hdy_header_bar_pack_end ((HdyHeaderBar*) self, (GtkWidget*) _tmp145_);
	_tmp146_ = mark_button;
	g_object_bind_property_with_closures ((GObject*) self, "can-mark", (GObject*) _tmp146_, "sensitive", G_BINDING_DEFAULT, (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)), (GClosure*) ((NULL == NULL) ? NULL : g_cclosure_new ((GCallback) NULL, NULL, (GClosureNotify) NULL)));
	_tmp147_ = g_settings_new ("io.elementary.mail");
	settings = _tmp147_;
	_tmp148_ = settings;
	_tmp149_ = load_images_menuitem;
	g_settings_bind (_tmp148_, "always-load-remote-images", (GObject*) _tmp149_, "active", G_SETTINGS_BIND_DEFAULT);
	_tmp150_ = account_settings_menuitem;
	g_signal_connect_object ((GtkButton*) _tmp150_, "clicked", (GCallback) __mail_header_bar___lambda13__gtk_button_clicked, self, 0);
	_g_object_unref0 (settings);
	_g_object_unref0 (trash_button);
	_g_object_unref0 (archive_button);
	_g_object_unref0 (mark_button);
	_g_object_unref0 (mark_menu);
	_g_object_unref0 (mark_unstar_item);
	_g_object_unref0 (mark_star_item);
	_g_object_unref0 (mark_read_item);
	_g_object_unref0 (mark_unread_item);
	_g_object_unref0 (forward_button);
	_g_object_unref0 (reply_all_button);
	_g_object_unref0 (reply_button);
	_g_object_unref0 (app_menu);
	_g_object_unref0 (app_menu_popover);
	_g_object_unref0 (app_menu_grid);
	_g_object_unref0 (app_menu_separator);
	_g_object_unref0 (account_settings_menuitem);
	_g_object_unref0 (load_images_menuitem);
	_g_object_unref0 (application_instance);
	return obj;
}

static void
mail_header_bar_class_init (MailHeaderBarClass * klass,
                            gpointer klass_data)
{
	mail_header_bar_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &MailHeaderBar_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_mail_header_bar_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_mail_header_bar_set_property;
	G_OBJECT_CLASS (klass)->constructor = mail_header_bar_constructor;
	G_OBJECT_CLASS (klass)->finalize = mail_header_bar_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), MAIL_HEADER_BAR_CAN_MARK_PROPERTY, mail_header_bar_properties[MAIL_HEADER_BAR_CAN_MARK_PROPERTY] = g_param_spec_boolean ("can-mark", "can-mark", "can-mark", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static void
mail_header_bar_instance_init (MailHeaderBar * self,
                               gpointer klass)
{
	self->priv = mail_header_bar_get_instance_private (self);
}

static void
mail_header_bar_finalize (GObject * obj)
{
	MailHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAIL_TYPE_HEADER_BAR, MailHeaderBar);
	G_OBJECT_CLASS (mail_header_bar_parent_class)->finalize (obj);
}

static GType
mail_header_bar_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (MailHeaderBarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) mail_header_bar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MailHeaderBar), 0, (GInstanceInitFunc) mail_header_bar_instance_init, NULL };
	GType mail_header_bar_type_id;
	mail_header_bar_type_id = g_type_register_static (hdy_header_bar_get_type (), "MailHeaderBar", &g_define_type_info, 0);
	MailHeaderBar_private_offset = g_type_add_instance_private (mail_header_bar_type_id, sizeof (MailHeaderBarPrivate));
	return mail_header_bar_type_id;
}

GType
mail_header_bar_get_type (void)
{
	static volatile gsize mail_header_bar_type_id__once = 0;
	if (g_once_init_enter (&mail_header_bar_type_id__once)) {
		GType mail_header_bar_type_id;
		mail_header_bar_type_id = mail_header_bar_get_type_once ();
		g_once_init_leave (&mail_header_bar_type_id__once, mail_header_bar_type_id);
	}
	return mail_header_bar_type_id__once;
}

static void
_vala_mail_header_bar_get_property (GObject * object,
                                    guint property_id,
                                    GValue * value,
                                    GParamSpec * pspec)
{
	MailHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAIL_TYPE_HEADER_BAR, MailHeaderBar);
	switch (property_id) {
		case MAIL_HEADER_BAR_CAN_MARK_PROPERTY:
		g_value_set_boolean (value, mail_header_bar_get_can_mark (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_mail_header_bar_set_property (GObject * object,
                                    guint property_id,
                                    const GValue * value,
                                    GParamSpec * pspec)
{
	MailHeaderBar * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAIL_TYPE_HEADER_BAR, MailHeaderBar);
	switch (property_id) {
		case MAIL_HEADER_BAR_CAN_MARK_PROPERTY:
		mail_header_bar_set_can_mark (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_array_destroy (gpointer array,
                     gssize array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gssize i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gssize array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}

static gssize
_vala_array_length (gpointer array)
{
	gssize length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}
