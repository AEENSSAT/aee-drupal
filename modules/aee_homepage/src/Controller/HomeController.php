<?php
/**
 * @file
 * Contains \Drupal\aee_homepage\Controller\HelloWorldController.
 */

namespace Drupal\aee_homepage\Controller;
use Drupal\Core\Controller\ControllerBase;

/**
 * Controller routines for aee_homepage module routes.
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

    $nids = \Drupal::entityQuery('node')->execute();
    $nodes = \Drupal\node\Entity\Node::loadMultiple($nids);

    var_dump($nids);
    var_dump($nodes);

    $output['homepage'] = array(
      '#markup' => $this->t('Hello World!'),
    );
    return $output;
  }
}
