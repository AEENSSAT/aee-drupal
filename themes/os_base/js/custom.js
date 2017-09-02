/**
 * @file
 * custom.js
 *
 * Filename:     custom.js
 * Website:      http://www.ordasoft.com
 * Description:  template
 * Author:       ordasoft dev team ordasoft.com.
 */

(function ($, Drupal) {

  'use strict';

  Drupal.behaviors.osDeltaReady = {
    attach: function (context, settings) {
      var mainMenu = $('.region-primary-menu ul');
      mainMenu.find('li.menu-item--expanded > a').once().append('<span class="arrow"></span>');
      $('.menu li a + ul').addClass('sub_menu');
      var slideButton = $('.views_slideshow_controls_text');
      $('.views_slideshow_controls_text_previous > a').addClass('previous');
      $('.views_slideshow_controls_text_next > a').addClass('next');
      slideButton.find('.previous').once().append('<i class="fa fa-angle-left"></i>');
      $('.views_slideshow_controls_text_next > a').addClass('next');
      slideButton.find('.next').once().append('<i class="fa fa-angle-Right"></i>');
      $('.switchButton span').click(function () {
        var page = $('body').removeClass();
        if ($(this).hasClass('bt-red')) {
          page.addClass('default');
        }
        if ($(this).hasClass('bt-lghtGre')) {
          page.addClass('divLghtGreen');
        }
        if ($(this).hasClass('bt-blue')) {
          page.addClass('divBlue');
        }
        if ($(this).hasClass('bt-red')) {
          page.addClass('divRed');
        }
        if ($(this).hasClass('bt-green')) {
          page.addClass('divGreen');
        }
        if ($(this).hasClass('bt-indigo')) {
          page.addClass('divIndigo');
        }
        if ($(this).hasClass('bt-orange')) {
          page.addClass('divOrange');
        }
        if ($(this).hasClass('bt-white')) {
          page.addClass('divWhite');
        }
      });
      $('.scrollup').click(function () {
        $('html,body').animate({scrollTop: 0}, 300);
        return false;
      });
    }
  };
})(jQuery, Drupal);
