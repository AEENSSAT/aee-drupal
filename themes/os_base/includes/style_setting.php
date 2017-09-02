<?php
/**
 * @file
 * Style stting.css.
 *
 * Filename:     style_stting.css
 * Website:      http://www.ordasoft.com
 * Description:  system styles
 * Author:       ordasoft dev team ordasoft.com.
 */

global $base_root, $base_path;
$_os_base_path_to_core = drupal_get_path('theme', 'os_base');
$tmas = array(
  "b_decor",
  "t_decor",
  "m_decor",
  "f_decor",
  "b_decor_hover",
  "t_decor_hover",
  "m_decor_hover",
  "f_decor_hover",
  "layout_pattern",
  "layout_bg",
  "layout_home_bg",
  "body_font",
  "main_menu_font",
  "top_menu_font",
  "body_links_font",
  "footer_links_font",
  "h1_font",
  "h2_font",
  "h3_font",
  "h4_font",
  "h5_font",
  "h6_font",
);
foreach ($tmas as $value) {
  $vars[$value] = theme_get_setting($value, 'os_base');
}
ob_start();
?>
body {
  <?php
    if (isset($vars['layout_pattern']) && $vars['layout_pattern'] != "") :
      print ("background-image: url(../images/" . $vars['layout_pattern'] . ".png);");
    endif;
  ?>

}
body #color p {
  font-family: <?php print $vars['body_font']; ?> !important;
}
body #color a {
  font-family: <?php print $vars['body_links_font'] ?>;
  text-decoration: <?php print (($vars['b_decor'] == 1) ? 'underline' : 'none'); ?>;
}
body #color a:hover {
  text-decoration: <?php print (($vars['b_decor_hover'] == 1) ? 'underline' : 'none'); ?>;
}
#main-navbar-collapse li a {
  font-family: <?php print $vars['main_menu_font']; ?>;
  text-decoration: <?php print (($vars['m_decor'] == 1) ? 'underline' : 'none'); ?>;
}
#main-navbar-collapse li a:hover {
  text-decoration: <?php print (($vars['m_decor_hover'] == 1) ? 'underline' : 'none'); ?>;
}
#color #footer a {
  font-family: <?php print $vars['footer_links_font']; ?>;
  text-decoration: <?php print (($vars['f_decor'] == 1) ? 'underline' : 'none'); ?>;
}
#color #footer a:hover {
  text-decoration: <?php print (($vars['f_decor_hover'] == 1) ? 'underline' : 'none'); ?>;
}

#color h1 {
  font-family: <?php print $vars['h1_font']; ?>!important;
}
#color h2 {
  font-family: <?php print $vars['h2_font']; ?>!important;
}
#color h3 {
  font-family: <?php print $vars['h3_font']; ?>!important;
}
#color h4 {
  font-family: <?php print $vars['h4_font']; ?>!important;
}
#color h5 {
  font-family: <?php print $vars['h5_font']; ?>!important;
}
#color h6 {
  font-family: <?php print $vars['h6_font']; ?>!important;
}
<?php

$theme_path = $_os_base_path_to_core . '/css/test.css';
$file = fopen($theme_path, "w");
fwrite($file, ob_get_contents());
fclose($file);
$css = ob_get_contents();
ob_clean();
echo '<style>' . $css . '</style>';
