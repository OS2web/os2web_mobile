<?php
/**
 * @file
 * os2web_mobile_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_mobile_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_mobile_news';
  $view->description = '';
  $view->tag = 'os2web mobile';
  $view->base_table = 'node';
  $view->human_name = 'OS2Web mobile news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'I fokus';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotate_image' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotate_image' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotating_image' => 'rotating_image',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_promoteto) */
  $handler->display->display_options['filters']['field_promoteto_tid']['id'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['table'] = 'field_data_field_promoteto';
  $handler->display->display_options['filters']['field_promoteto_tid']['field'] = 'field_promoteto_tid';
  $handler->display->display_options['filters']['field_promoteto_tid']['value'] = array(
    12264 => '12264',
  );
  $handler->display->display_options['filters']['field_promoteto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_promoteto_tid']['vocabulary'] = 'forfrem_til';
  /* Filterkriterie: Indhold: Indløb / Udløb -  startdato (field_rotate_publish) */
  $handler->display->display_options['filters']['field_rotate_publish_value']['id'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value']['field'] = 'field_rotate_publish_value';
  $handler->display->display_options['filters']['field_rotate_publish_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_rotate_publish_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Indløb / Udløb - slutdato (field_rotate_publish:value2) */
  $handler->display->display_options['filters']['field_rotate_publish_value2']['id'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['table'] = 'field_data_field_rotate_publish';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['field'] = 'field_rotate_publish_value2';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_rotate_publish_value2']['default_date'] = 'now';

  /* Display: Liste */
  $handler = $view->new_display('block', 'Liste', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['changed']['element_wrapper_class'] = 'news-date';
  $handler->display->display_options['fields']['changed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd.m.Y';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Fokus */
  $handler = $view->new_display('block', 'Fokus', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'title' => 0,
    'body' => 0,
    'field_rotate_image_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotate_image_1' => 'field_rotate_image_1',
    'field_rotating_link' => 0,
    'field_rotate_image' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_rotating_link']['id'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['table'] = 'field_data_field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['field'] = 'field_rotating_link';
  $handler->display->display_options['fields']['field_rotating_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotating_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotating_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotating_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotating_link']['type'] = 'link_plain';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image']['id'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image']['alter']['text'] = '<img src="[field_rotate_image]" />';
  $handler->display->display_options['fields']['field_rotate_image']['alter']['path'] = '[field_rotating_link]';
  $handler->display->display_options['fields']['field_rotate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image']['settings'] = array(
    'image_style' => 'mobile_focus_active',
    'image_link' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="slideshow-container"><a href="[field_rotating_link]"><span class="slideshow-title">[title]</span>[body]</a></div>';
  $handler->display->display_options['fields']['body']['alter']['path'] = '[field_rotating_link]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_rotate_image_1']['id'] = 'field_rotate_image_1';
  $handler->display->display_options['fields']['field_rotate_image_1']['table'] = 'field_data_field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['field'] = 'field_rotate_image';
  $handler->display->display_options['fields']['field_rotate_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_rotate_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rotate_image_1']['alter']['text'] = '<img src="[field_rotate_image_1]"/>';
  $handler->display->display_options['fields']['field_rotate_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rotate_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotate_image_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_rotate_image_1']['settings'] = array(
    'image_style' => 'mobile_focus_thumb',
    'image_link' => '',
  );
  $translatables['os2web_mobile_news'] = array(
    t('Master'),
    t('I fokus'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Billede'),
    t('Liste'),
    t('Nyheder'),
    t('Fokus'),
    t('<img src="[field_rotate_image]" />'),
    t('<div class="slideshow-container"><a href="[field_rotating_link]"><span class="slideshow-title">[title]</span>[body]</a></div>'),
    t('<img src="[field_rotate_image_1]"/>'),
  );
  $export['os2web_mobile_news'] = $view;

  return $export;
}
