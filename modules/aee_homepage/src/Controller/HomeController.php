<?php
/**
 * @file
 * Contains \Drupal\hello_world\Controller\HelloWorldController.
 */

namespace Drupal\hello_world\Controller;
use Drupal\Core\Controller\ControllerBase;

/**
 * Controller routines for hello_world module routes.
 */
class HomeController extends ControllerBase {

 /**
  * Return the 'Hello World' page.
  *
  * @return string
  *   A render array containing our 'Hello World' page content.
  */
  public function home() {
    $output = array();

    $output['homepage'] = array(
      '#markup' => $this->t('Hello World!'),
    );
    return $output;
  }
}
