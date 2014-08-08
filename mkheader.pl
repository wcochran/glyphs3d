#!/usr/bin/perl

use strict;

print<<'EOH';
#ifndef GLYPH_H
#define GLYPH_H

EOH

for (<glyph_*.h>) {
    open(my $fh, "<$_") or die "$!\n";
    foreach my $line (<$fh>) {
	print $line if $line =~ /WIDTH|VERT|DEPTH/;
	print "$line\n" if $line =~ /extern/;
    }
    close($fh);
}

print<<'EOT';

#endif
EOT

