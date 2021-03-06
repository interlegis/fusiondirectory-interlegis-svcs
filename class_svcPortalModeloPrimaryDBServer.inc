<?php
/*
  Portal Modelo Database Server Service
*/

class portalModeloPrimaryDBServer extends simpleService {
  var $objectclasses = array('portalModeloPrimaryDBServer');

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
        'name'  => _('Portal Modelo Primary Database Server'),
        'attrs' => array(
          new SetAttribute (
            new IntAttribute ( 
              _('Zope instance Group'), 
              _('Zope instance Group for the Portal Modelo.'), 
              'instanceGroup', 
              TRUE, 
              0, 
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
      "plShortName"       => _("Portal Modelo Primary DB"),
      "plDescription"     => _("This service allows you to configure a Portal Modelo Primary Database Server"),
      "plIcon"            => "plugins/interlegis/images/iconMiniPortalModelo.png",
      "plProvidedAcls"    => parent::generatePlProvidedAcls(self::getAttributesInfo())
    );
  }
}

?>
