<?php

function _svgimg_field_formatter_settings_summary(&$field, &$instance, $view_mode,$display) {
	$text = "";
	$settings = $display['settings'];
	if (isset($settings['wrapper_tag'])) {
		$text .= t("Wrapper tag") . ": " . $settings['wrapper_tag'];
	}
	return $text;
}

function _svgimg_field_formatter_settings_form(&$field, &$display,&$form, &$form_state) {
	$element = array();
	$settings = $display['settings'];
	$tags = array(
		'figure',
		'div',
		'section'
	);
	$element['wrapper_tag'] = array(
		'#type' => 'select',
		'#title' =>  t("Wrapper tag"),
		'#options' => drupal_map_assoc($tags),
		'#default_value' => $settings['wrapper_tag']
	);
	return $element;
}
