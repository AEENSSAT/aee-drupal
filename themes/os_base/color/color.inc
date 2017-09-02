<?php

/**
 * @file
 * Lists available colors and color schemes for the OS BAse theme.
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background top'),
    'bg' => t('Main background'),
    'menu_hover' => t('Main menu hover'),
    'elements_color' => t('Elements color'),
    'color_button' => t('Color buttons'),
    'color_button_hover' => t('Color buttons hover'),
    'footer' => t('Footer background'),
    'footer_link' => t('Footer Link'),
    'footer_link_hover' => t('Footer Link Hover'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'link_hover' => t('Link color hover'),
    'sidebar' => t('Sidebar background'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Blue'),
      'colors' => array(
        'top' => '#12abff',
        'bg' => '#066490',
        'menu_hover' => '#000000',
        'elements_color' => '#12abff',
        'color_button' => '#000000',
        'color_button_hover' => '#202020',
        'footer' => '#2c2c28',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#fffeff',
        'text' => '#fffff1',
        'link' => '#fffff2',
        'link_hover' => '#000002',
        'sidebar' => '#12abf2',
      ),
    ),
    'firehouse' => array(
      'title' => t('Red'),
      'colors' => array(
        'top' => '#e40028',
        'bg' => '#942205',
        'menu_hover' => '#000000',
        'elements_color' => '#d14242',
        'color_button' => '#000000',
        'color_button_hover' => '#202020',
        'footer' => '#2c2c28',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#fffeff',
        'text' => '#ffffff',
        'link' => '#ffffff',
        'link_hover' => '#000000',
        'sidebar' => '#e40028',
      ),
    ),
    'ice' => array(
      'title' => t('Green'),
      'colors' => array(
        'top' => '#029f26',
        'bg' => '#03b72d',
        'menu_hover' => '#000000',
        'elements_color' => '#009688',
        'color_button' => '#000000',
        'color_button_hover' => '#202020',
        'footer' => '#2c2c28',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#000000',
        'text' => '#ffffff',
        'link' => '#ffffff',
        'link_hover' => '#000000',
        'sidebar' => '#029f26',
      ),
    ),
    'plum' => array(
      'title' => t('Light Green'),
      'colors' => array(
        'top' => '#7cd01b',
        'bg' => '#579c06',
        'menu_hover' => '#000000',
        'elements_color' => '#8bc34a',
        'color_button' => '#000000',
        'color_button_hover' => '#202020',
        'footer' => '#2c2c28',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#ffffff',
        'text' => '#ffffff',
        'link' => '#ffffff',
        'link_hover' => '#000000',
        'sidebar' => '#7cd01b',
      ),
    ),
    'slate' => array(
      'title' => t('Orange'),
      'colors' => array(
        'top' => '#ff7b15',
        'bg' => '#ad4b00',
        'menu_hover' => '#000000',
        'elements_color' => '#ff7b15',
        'color_button' => '#000000',
        'color_button_hover' => '#202020',
        'footer' => '#2c2c28',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#ffffff',
        'text' => '#ffffff',
        'link' => '#ffffff',
        'link_hover' => '#000000',
        'sidebar' => '#ff7b15',
      ),
    ),
    'white' => array(
      'title' => t('White'),
      'colors' => array(
        'top' => '#000000',
        'bg' => '#ffffff',
        'menu_hover' => '#000002',
        'elements_color' => '#ebe3e3',
        'color_button' => '#c1c1c1',
        'color_button_hover' => '#202020',
        'footer' => '#000000',
        'footer_link' => '#ffffff',
        'footer_link_hover' => '#cccccc',
        'titleslogan' => '#fffeff',
        'text' => '#000000',
        'link' => '#000001',
        'link_hover' => '#2735be',
        'sidebar' => '#c3ced6',
      ),
    ),

  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/os-colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.svg',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Preview files.
  'preview_library' => 'os_base/os-color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'os_base'),
      ],
    ],
  ],
);
