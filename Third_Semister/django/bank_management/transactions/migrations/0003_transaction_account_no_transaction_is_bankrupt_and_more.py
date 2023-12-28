# Generated by Django 5.0 on 2023-12-26 13:14

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('transactions', '0002_rename_load_approved_transaction_loan_approved_and_more'),
    ]

    operations = [
        migrations.AddField(
            model_name='transaction',
            name='account_no',
            field=models.IntegerField(blank=True, choices=[(1, 'Deposit'), (2, 'Withdrawal'), (3, 'Loan'), (4, 'LoanPaid'), (5, 'Transfer')], null=True),
        ),
        migrations.AddField(
            model_name='transaction',
            name='is_bankrupt',
            field=models.BooleanField(blank=True, default=False, null=True),
        ),
        migrations.AlterField(
            model_name='transaction',
            name='transaction_type',
            field=models.IntegerField(choices=[(1, 'Deposit'), (2, 'Withdrawal'), (3, 'Loan'), (4, 'LoanPaid'), (5, 'Transfer')]),
        ),
    ]