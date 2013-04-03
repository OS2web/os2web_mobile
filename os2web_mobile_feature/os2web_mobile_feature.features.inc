<?php
/**
 * @file
 * os2web_mobile_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_mobile_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_mobile_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_mobile_feature_image_default_styles() {
  $styles = array();

  // Exported image style: mobile_focus_active.
  $styles['mobile_focus_active'] = array(
    'name' => 'mobile_focus_active',
    'effects' => array(
      4 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '328',
          'height' => '184',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: mobile_focus_thumb.
  $styles['mobile_focus_thumb'] = array(
    'name' => 'mobile_focus_thumb',
    'effects' => array(
      3 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '78',
          'height' => '62',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
