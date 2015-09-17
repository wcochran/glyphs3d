#!/usr/bin/perl

use strict;

die "usage: $0 <A..Z0-9>\n" unless @ARGV == 1;

my $CHAR = $ARGV[0];

die "input must be digit or upper case letter!\n" unless $CHAR =~ /^[0-9A-Z]$/;

open(my $fh, "glyph_$CHAR.h") or die "$!\n";
my ($W, $D) = (0,0);
for (<$fh>) {
    $W = $1 if /WIDTH\s(.*)$/;
    $D = $1 if /DEPTH\s(.*)$/;	
}
close $fh;

#print "${W} x 1 x ${D}\n";

my $N = 0;
my @VERTS;

open($fh, "glyph_$CHAR.c") or die "$!\n";
for (<$fh>) {
    if (/([-+]?\d+\.\d+),\s+([-+]?\d+\.\d+),\s+([-+]?\d+\.\d+)/) {
	push @VERTS, ($1,$2,$3); 
	$N++;
    }
}
close $fh;

print<<"EOH";
var GLYPH_$CHAR = {
  "size" : [$W, 1.0, $D],
  "triangles" : [
EOH

for (my $n = 0; $n < $N; $n++) {
    printf "      %12.8f, %12.8f, %12.8f", $VERTS[3*$n], $VERTS[3*$n+1], $VERTS[3*$n+2];
    print ",\n" if $n < $N-1;
}

print<<'EOT';
  ]
}
EOT




