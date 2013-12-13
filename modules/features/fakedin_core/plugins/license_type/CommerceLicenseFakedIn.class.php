<?php

/**
 * FakedIn license type.
 * Extends the role license type with usage tracking and a custom
 * checkout completion message.
 */
class CommerceLicenseFakedIn extends CommerceLicenseRole implements CommerceLicenseBillingUsageInterface  {

  /**
   * Implements CommerceLicenseBillingUsageInterface::usageGroups().
   */
  public function usageGroups() {
    return array(
      'posts' => array(
        'title' => t('Posts'),
        'type' => 'counter',
        'product' => $this->wrapper->product->field_usage_product->sku->value(),
        'free_quantity' => $this->wrapper->product->field_free_posts_quota->value(),
      ),
    );
  }

  /**
   * Implements CommerceLicenseBillingUsageInterface::usageDetails().
   */
  public function usageDetails() {
    $usage = commerce_license_billing_current_usage($this, 'posts');
    return t('Posts: @posts', array('@posts' => $usage));
  }
}
