	.align 2
MossdeepCity_GameCorner_1F_MapBorder::
	.incbin "data/layouts/MossdeepCity_GameCorner_1F/border.bin"

	.align 2
MossdeepCity_GameCorner_1F_MapBlockdata::
	.incbin "data/layouts/MossdeepCity_GameCorner_1F/map.bin"

	.align 2
MossdeepCity_GameCorner_1F_Layout::
	.4byte 0xc
	.4byte 0xa
	.4byte MossdeepCity_GameCorner_1F_MapBorder
	.4byte MossdeepCity_GameCorner_1F_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_MossdeepGameCorner