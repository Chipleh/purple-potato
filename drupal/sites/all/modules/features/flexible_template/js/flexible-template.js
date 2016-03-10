/**
 * Toggle field visibility (disabled state) when WYSIWIG is edited.
 * This resolves a Drupal states limitation with CkEditor.
 *
 * @see field_subhead_color
 * @see field_subhead_size
 */
(function($) {
  Drupal.behaviors.editorStates = {
    attach: function(context, settings) {
      if (typeof CKEDITOR !== 'undefined') {
        CKEDITOR.on('instanceCreated', function(event) {

          // Listen for text input events.
          event.editor.on('change', function() {
            var field1 = $('#edit-field-subhead-color'),
                field2 = $('#edit-field-subhead-size');

            if (field1 && field2) {
              var hidden = field1.find(':hidden'),
                  select = field2.find('select');

              // Show and enable fields.
              if (this.getData()) {
                field1.show(0);
                field2.show(0);

                hidden.removeAttr('disabled');
                select.removeAttr('disabled');
              }

              // Hide and disable fields.
              else {
                field1.hide(0);
                field2.hide(0);

                hidden.attr('disabled', 'disabled');
                select.attr('disabled', 'disabled');
              }
            }
          });
        });
      }
    }
  };
})(jQuery);
