<?php
/**
 *
 */
$plugin = array(
  'title' => t('OS2web mobile pane'),
  'single' => TRUE,
  'category' => 'OS2web mobile',
  //'edit form' => 'os2web_mobile_pane_content_type_edit_form',
  'render callback' => 'os2web_mobile_content_type_render',
);

/**
 *
 */
function os2web_mobile_content_type_render($subtype, $conf, $context = NULL) {
  $block->content = '
<div class="fixed-bottom">
<a href="/"><i class="icon-home-syddjurs"></i>Forside</a>
<a href="#search-block-form"><i class="icon-search-syddjurs"></i>Søg</a>
<a href="#contact"><i class="icon-contact-syddjurs"></i>Kontakt</a>
</div> 
  ';
  return $block;
}

function os2web_mobile_pane_content_type_edit_form(&$form, &$form_state) {
  return $form;
}

