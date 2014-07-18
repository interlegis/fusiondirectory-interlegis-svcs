<?php
/*
  Portal Modelo Application Server Service
*/

class portalModeloAppServer extends simpleService {
  var $objectclasses = array('portalModeloAppServer');

  /* Construction */
  function __construct(&$config, $dn, $object = NULL)
  {
    parent::__construct($config, $dn, $object);
  }

  // The main function : information about attributes
  static function getAttributesInfo ()
  {
    return array(
      // Attributes are grouped by section
      'main' => array(
        'name'  => _('Portal Modelo Application Server'),
        'attrs' => array(
          new SetAttribute (
            new IntAttribute ( 
              _('Zope instance Group'), 
              _('Zope instance Group for the Portal Modelo.'), 
              'instanceGroup', 
              TRUE, 
              00, 
              99 
              )
           )
        ),
      ),
    );
  }

  // We also need this function that return some information about the plugin
  static function plInfo ()
  {
    return array(
      "plShortName"       => _("Portal Modelo App Server"),
      "plDescription"     => _("This service allows you to configure a Portal Modelo Application Server"),
      "plIcon"            => "plugins/interlegis/images/iconMiniPortalModelo.png",
      "plProvidedAcls"    => parent::generatePlProvidedAcls(self::getAttributesInfo())
    );
  }
}

?>
