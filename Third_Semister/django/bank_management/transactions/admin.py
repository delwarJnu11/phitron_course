from django.contrib import admin
from transactions.models import Transaction

# Register your models here.
@admin.register(Transaction)

class TransactionsAdmin(admin.ModelAdmin):
    list_display = ['account', 'amount', 'balance_after_transaction', 'transaction_type', 'loan_approved']

    def save_model(self, request, obj, form, change):
        if obj.loan_approved == True:
            obj.account.balance += obj.amount
            obj.balance_after_transaction = obj.account.balance
            obj.account.save()
        return super().save_model(request, obj, form, change)


