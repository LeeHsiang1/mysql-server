source include/have_log_bin.inc;

let $have_binlog_format_mixed_or_statement= `SELECT @@binlog_format LIKE 'MIXED'
                                             OR @@binlog_format LIKE 'STATEMENT'`;
if (!$have_binlog_format_mixed_or_statement)
{
  --skip Test requires binlog_format = MIXED or STATEMENT
}
