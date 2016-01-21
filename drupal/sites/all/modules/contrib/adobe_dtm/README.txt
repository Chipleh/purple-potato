SUMMARY
-------

A module which allows you to set your Adobe DTM ID and Site Hash individually
for Staging and Production environments, and switch between environment
configs via a simple dropdown. It inserts header and footer scripts according
to your configuration into each page, rather than leaving you to edit your
.tpl files. It does not have any facilities for editing your DTM campaigns
or tags, but only inserts the site scripts. Hello.


REQUIREMENTS
------------

 * An account on Adobe DTM: https://dtm.adobe.com/sign_in
 * Knowledge of your Adobe DTM Account ID
 * Knowledge of your Adobe DTM Site Hash for your site


INSTALLATION
------------

 * Install as usual, see https://www.drupal.org/sandbox/kylejbertelsen/2292737
for further information.


CONFIGURATION
-------------

 * Configure user permissions in Administration » People » Permissions, granting
   permission to at least the Administrator role.
 * Configure the module settings at /admin/config/system/adobe-dtm.
 * DTM ID appears in the embed code, as the segment prior to the "satelliteLib"
   segment. If you have multiple sites serviced by the same Adobe DTM account,
   this value will be shared amongst them.
 * DTM Site Hash represents the DTM property instance specific to the account,
   and is the unique hash that follows the "satelliteLib" in the actual file
   name.  If you have multiple sites serviced by the same Adobe DTM account,
   this value will be unique to each of them.
 * Header Script Scope allows you to force the inclusion of the DTM Satellite
   script into the DOMs HEAD element, regardless of where your theme's `print
   $scripts` statement is. By default (and preferred), the script is called
   wherever your `print $scripts;` statement is, but if you're having trouble
   getting DTM to work, you can try this option.
