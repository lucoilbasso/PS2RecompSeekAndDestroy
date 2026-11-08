#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001842b0
// Address: 0x1842b0 - 0x1846b8
void entry_001842b0_0x1842b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001842b0_0x1842b0");
#endif

    ctx->pc = 0x1842b0u;

    // 0x1842b0: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1842b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1842b4: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x1842b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1842b8: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x1842b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1842bc: 0x78a90030  lq          $t1, 0x30($a1)
    ctx->pc = 0x1842bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1842c0: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1842c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1842c4: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x1842c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x1842c8: 0x7c480080  sq          $t0, 0x80($v0)
    ctx->pc = 0x1842c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 8));
    // 0x1842cc: 0x7c490090  sq          $t1, 0x90($v0)
    ctx->pc = 0x1842ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 9));
    // 0x1842d0: 0x78a60040  lq          $a2, 0x40($a1)
    ctx->pc = 0x1842d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1842d4: 0x78a70050  lq          $a3, 0x50($a1)
    ctx->pc = 0x1842d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1842d8: 0x78a80060  lq          $t0, 0x60($a1)
    ctx->pc = 0x1842d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1842dc: 0x78a90070  lq          $t1, 0x70($a1)
    ctx->pc = 0x1842dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1842e0: 0x7c460100  sq          $a2, 0x100($v0)
    ctx->pc = 0x1842e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), GPR_VEC(ctx, 6));
    // 0x1842e4: 0x7c470110  sq          $a3, 0x110($v0)
    ctx->pc = 0x1842e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 272), GPR_VEC(ctx, 7));
    // 0x1842e8: 0x7c480180  sq          $t0, 0x180($v0)
    ctx->pc = 0x1842e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 384), GPR_VEC(ctx, 8));
    // 0x1842ec: 0x7c490190  sq          $t1, 0x190($v0)
    ctx->pc = 0x1842ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 9));
    // 0x1842f0: 0x78a60080  lq          $a2, 0x80($a1)
    ctx->pc = 0x1842f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1842f4: 0x78a70090  lq          $a3, 0x90($a1)
    ctx->pc = 0x1842f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1842f8: 0x78a800a0  lq          $t0, 0xA0($a1)
    ctx->pc = 0x1842f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x1842fc: 0x78a900b0  lq          $t1, 0xB0($a1)
    ctx->pc = 0x1842fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x184300: 0x7c460200  sq          $a2, 0x200($v0)
    ctx->pc = 0x184300u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 6));
    // 0x184304: 0x7c470210  sq          $a3, 0x210($v0)
    ctx->pc = 0x184304u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 7));
    // 0x184308: 0x7c480280  sq          $t0, 0x280($v0)
    ctx->pc = 0x184308u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 640), GPR_VEC(ctx, 8));
    // 0x18430c: 0x7c490290  sq          $t1, 0x290($v0)
    ctx->pc = 0x18430cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 656), GPR_VEC(ctx, 9));
    // 0x184310: 0x78a600c0  lq          $a2, 0xC0($a1)
    ctx->pc = 0x184310u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x184314: 0x78a700d0  lq          $a3, 0xD0($a1)
    ctx->pc = 0x184314u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x184318: 0x78a800e0  lq          $t0, 0xE0($a1)
    ctx->pc = 0x184318u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x18431c: 0x78a900f0  lq          $t1, 0xF0($a1)
    ctx->pc = 0x18431cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x184320: 0x7c460300  sq          $a2, 0x300($v0)
    ctx->pc = 0x184320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 768), GPR_VEC(ctx, 6));
    // 0x184324: 0x7c470310  sq          $a3, 0x310($v0)
    ctx->pc = 0x184324u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 784), GPR_VEC(ctx, 7));
    // 0x184328: 0x7c480380  sq          $t0, 0x380($v0)
    ctx->pc = 0x184328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 896), GPR_VEC(ctx, 8));
    // 0x18432c: 0x7c490390  sq          $t1, 0x390($v0)
    ctx->pc = 0x18432cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 912), GPR_VEC(ctx, 9));
    // 0x184330: 0x78a60100  lq          $a2, 0x100($a1)
    ctx->pc = 0x184330u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x184334: 0x78a70110  lq          $a3, 0x110($a1)
    ctx->pc = 0x184334u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x184338: 0x78a80120  lq          $t0, 0x120($a1)
    ctx->pc = 0x184338u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x18433c: 0x78a90130  lq          $t1, 0x130($a1)
    ctx->pc = 0x18433cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x184340: 0x7c460400  sq          $a2, 0x400($v0)
    ctx->pc = 0x184340u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1024), GPR_VEC(ctx, 6));
    // 0x184344: 0x7c470410  sq          $a3, 0x410($v0)
    ctx->pc = 0x184344u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1040), GPR_VEC(ctx, 7));
    // 0x184348: 0x7c480480  sq          $t0, 0x480($v0)
    ctx->pc = 0x184348u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1152), GPR_VEC(ctx, 8));
    // 0x18434c: 0x7c490490  sq          $t1, 0x490($v0)
    ctx->pc = 0x18434cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1168), GPR_VEC(ctx, 9));
    // 0x184350: 0x78a60140  lq          $a2, 0x140($a1)
    ctx->pc = 0x184350u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x184354: 0x78a70150  lq          $a3, 0x150($a1)
    ctx->pc = 0x184354u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x184358: 0x78a80160  lq          $t0, 0x160($a1)
    ctx->pc = 0x184358u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x18435c: 0x78a90170  lq          $t1, 0x170($a1)
    ctx->pc = 0x18435cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 368)));
    // 0x184360: 0x7c460500  sq          $a2, 0x500($v0)
    ctx->pc = 0x184360u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1280), GPR_VEC(ctx, 6));
    // 0x184364: 0x7c470510  sq          $a3, 0x510($v0)
    ctx->pc = 0x184364u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1296), GPR_VEC(ctx, 7));
    // 0x184368: 0x7c480580  sq          $t0, 0x580($v0)
    ctx->pc = 0x184368u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1408), GPR_VEC(ctx, 8));
    // 0x18436c: 0x7c490590  sq          $t1, 0x590($v0)
    ctx->pc = 0x18436cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1424), GPR_VEC(ctx, 9));
    // 0x184370: 0x78a60180  lq          $a2, 0x180($a1)
    ctx->pc = 0x184370u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x184374: 0x78a70190  lq          $a3, 0x190($a1)
    ctx->pc = 0x184374u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x184378: 0x78a801a0  lq          $t0, 0x1A0($a1)
    ctx->pc = 0x184378u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x18437c: 0x78a901b0  lq          $t1, 0x1B0($a1)
    ctx->pc = 0x18437cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x184380: 0x7c460600  sq          $a2, 0x600($v0)
    ctx->pc = 0x184380u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1536), GPR_VEC(ctx, 6));
    // 0x184384: 0x7c470610  sq          $a3, 0x610($v0)
    ctx->pc = 0x184384u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1552), GPR_VEC(ctx, 7));
    // 0x184388: 0x7c480680  sq          $t0, 0x680($v0)
    ctx->pc = 0x184388u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1664), GPR_VEC(ctx, 8));
    // 0x18438c: 0x7c490690  sq          $t1, 0x690($v0)
    ctx->pc = 0x18438cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1680), GPR_VEC(ctx, 9));
    // 0x184390: 0x78a601c0  lq          $a2, 0x1C0($a1)
    ctx->pc = 0x184390u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x184394: 0x78a701d0  lq          $a3, 0x1D0($a1)
    ctx->pc = 0x184394u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 464)));
    // 0x184398: 0x78a801e0  lq          $t0, 0x1E0($a1)
    ctx->pc = 0x184398u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 480)));
    // 0x18439c: 0x78a901f0  lq          $t1, 0x1F0($a1)
    ctx->pc = 0x18439cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 496)));
    // 0x1843a0: 0x7c460700  sq          $a2, 0x700($v0)
    ctx->pc = 0x1843a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1792), GPR_VEC(ctx, 6));
    // 0x1843a4: 0x7c470710  sq          $a3, 0x710($v0)
    ctx->pc = 0x1843a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1808), GPR_VEC(ctx, 7));
    // 0x1843a8: 0x7c480780  sq          $t0, 0x780($v0)
    ctx->pc = 0x1843a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1920), GPR_VEC(ctx, 8));
    // 0x1843ac: 0x7c490790  sq          $t1, 0x790($v0)
    ctx->pc = 0x1843acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1936), GPR_VEC(ctx, 9));
    // 0x1843b0: 0x78a60200  lq          $a2, 0x200($a1)
    ctx->pc = 0x1843b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 512)));
    // 0x1843b4: 0x78a70210  lq          $a3, 0x210($a1)
    ctx->pc = 0x1843b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x1843b8: 0x78a80220  lq          $t0, 0x220($a1)
    ctx->pc = 0x1843b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x1843bc: 0x78a90230  lq          $t1, 0x230($a1)
    ctx->pc = 0x1843bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 560)));
    // 0x1843c0: 0x7c460800  sq          $a2, 0x800($v0)
    ctx->pc = 0x1843c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2048), GPR_VEC(ctx, 6));
    // 0x1843c4: 0x7c470810  sq          $a3, 0x810($v0)
    ctx->pc = 0x1843c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2064), GPR_VEC(ctx, 7));
    // 0x1843c8: 0x7c480880  sq          $t0, 0x880($v0)
    ctx->pc = 0x1843c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2176), GPR_VEC(ctx, 8));
    // 0x1843cc: 0x7c490890  sq          $t1, 0x890($v0)
    ctx->pc = 0x1843ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2192), GPR_VEC(ctx, 9));
    // 0x1843d0: 0x78a60240  lq          $a2, 0x240($a1)
    ctx->pc = 0x1843d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 576)));
    // 0x1843d4: 0x78a70250  lq          $a3, 0x250($a1)
    ctx->pc = 0x1843d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x1843d8: 0x78a80260  lq          $t0, 0x260($a1)
    ctx->pc = 0x1843d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 608)));
    // 0x1843dc: 0x78a90270  lq          $t1, 0x270($a1)
    ctx->pc = 0x1843dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x1843e0: 0x7c460900  sq          $a2, 0x900($v0)
    ctx->pc = 0x1843e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2304), GPR_VEC(ctx, 6));
    // 0x1843e4: 0x7c470910  sq          $a3, 0x910($v0)
    ctx->pc = 0x1843e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2320), GPR_VEC(ctx, 7));
    // 0x1843e8: 0x7c480980  sq          $t0, 0x980($v0)
    ctx->pc = 0x1843e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2432), GPR_VEC(ctx, 8));
    // 0x1843ec: 0x7c490990  sq          $t1, 0x990($v0)
    ctx->pc = 0x1843ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2448), GPR_VEC(ctx, 9));
    // 0x1843f0: 0x78a60280  lq          $a2, 0x280($a1)
    ctx->pc = 0x1843f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x1843f4: 0x78a70290  lq          $a3, 0x290($a1)
    ctx->pc = 0x1843f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 656)));
    // 0x1843f8: 0x78a802a0  lq          $t0, 0x2A0($a1)
    ctx->pc = 0x1843f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 672)));
    // 0x1843fc: 0x78a902b0  lq          $t1, 0x2B0($a1)
    ctx->pc = 0x1843fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x184400: 0x7c460a00  sq          $a2, 0xA00($v0)
    ctx->pc = 0x184400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2560), GPR_VEC(ctx, 6));
    // 0x184404: 0x7c470a10  sq          $a3, 0xA10($v0)
    ctx->pc = 0x184404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2576), GPR_VEC(ctx, 7));
    // 0x184408: 0x7c480a80  sq          $t0, 0xA80($v0)
    ctx->pc = 0x184408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2688), GPR_VEC(ctx, 8));
    // 0x18440c: 0x7c490a90  sq          $t1, 0xA90($v0)
    ctx->pc = 0x18440cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2704), GPR_VEC(ctx, 9));
    // 0x184410: 0x78a602c0  lq          $a2, 0x2C0($a1)
    ctx->pc = 0x184410u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 704)));
    // 0x184414: 0x78a702d0  lq          $a3, 0x2D0($a1)
    ctx->pc = 0x184414u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x184418: 0x78a802e0  lq          $t0, 0x2E0($a1)
    ctx->pc = 0x184418u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 736)));
    // 0x18441c: 0x78a902f0  lq          $t1, 0x2F0($a1)
    ctx->pc = 0x18441cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x184420: 0x7c460b00  sq          $a2, 0xB00($v0)
    ctx->pc = 0x184420u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2816), GPR_VEC(ctx, 6));
    // 0x184424: 0x7c470b10  sq          $a3, 0xB10($v0)
    ctx->pc = 0x184424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2832), GPR_VEC(ctx, 7));
    // 0x184428: 0x7c480b80  sq          $t0, 0xB80($v0)
    ctx->pc = 0x184428u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2944), GPR_VEC(ctx, 8));
    // 0x18442c: 0x7c490b90  sq          $t1, 0xB90($v0)
    ctx->pc = 0x18442cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 2960), GPR_VEC(ctx, 9));
    // 0x184430: 0x78a60300  lq          $a2, 0x300($a1)
    ctx->pc = 0x184430u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 768)));
    // 0x184434: 0x78a70310  lq          $a3, 0x310($a1)
    ctx->pc = 0x184434u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 784)));
    // 0x184438: 0x78a80320  lq          $t0, 0x320($a1)
    ctx->pc = 0x184438u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 800)));
    // 0x18443c: 0x78a90330  lq          $t1, 0x330($a1)
    ctx->pc = 0x18443cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x184440: 0x7c460c00  sq          $a2, 0xC00($v0)
    ctx->pc = 0x184440u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3072), GPR_VEC(ctx, 6));
    // 0x184444: 0x7c470c10  sq          $a3, 0xC10($v0)
    ctx->pc = 0x184444u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3088), GPR_VEC(ctx, 7));
    // 0x184448: 0x7c480c80  sq          $t0, 0xC80($v0)
    ctx->pc = 0x184448u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3200), GPR_VEC(ctx, 8));
    // 0x18444c: 0x7c490c90  sq          $t1, 0xC90($v0)
    ctx->pc = 0x18444cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3216), GPR_VEC(ctx, 9));
    // 0x184450: 0x78a60340  lq          $a2, 0x340($a1)
    ctx->pc = 0x184450u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 832)));
    // 0x184454: 0x78a70350  lq          $a3, 0x350($a1)
    ctx->pc = 0x184454u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 848)));
    // 0x184458: 0x78a80360  lq          $t0, 0x360($a1)
    ctx->pc = 0x184458u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 864)));
    // 0x18445c: 0x78a90370  lq          $t1, 0x370($a1)
    ctx->pc = 0x18445cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x184460: 0x7c460d00  sq          $a2, 0xD00($v0)
    ctx->pc = 0x184460u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3328), GPR_VEC(ctx, 6));
    // 0x184464: 0x7c470d10  sq          $a3, 0xD10($v0)
    ctx->pc = 0x184464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3344), GPR_VEC(ctx, 7));
    // 0x184468: 0x7c480d80  sq          $t0, 0xD80($v0)
    ctx->pc = 0x184468u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3456), GPR_VEC(ctx, 8));
    // 0x18446c: 0x7c490d90  sq          $t1, 0xD90($v0)
    ctx->pc = 0x18446cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3472), GPR_VEC(ctx, 9));
    // 0x184470: 0x78a60380  lq          $a2, 0x380($a1)
    ctx->pc = 0x184470u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x184474: 0x78a70390  lq          $a3, 0x390($a1)
    ctx->pc = 0x184474u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x184478: 0x78a803a0  lq          $t0, 0x3A0($a1)
    ctx->pc = 0x184478u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 928)));
    // 0x18447c: 0x78a903b0  lq          $t1, 0x3B0($a1)
    ctx->pc = 0x18447cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 944)));
    // 0x184480: 0x7c460e00  sq          $a2, 0xE00($v0)
    ctx->pc = 0x184480u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3584), GPR_VEC(ctx, 6));
    // 0x184484: 0x7c470e10  sq          $a3, 0xE10($v0)
    ctx->pc = 0x184484u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3600), GPR_VEC(ctx, 7));
    // 0x184488: 0x7c480e80  sq          $t0, 0xE80($v0)
    ctx->pc = 0x184488u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3712), GPR_VEC(ctx, 8));
    // 0x18448c: 0x7c490e90  sq          $t1, 0xE90($v0)
    ctx->pc = 0x18448cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3728), GPR_VEC(ctx, 9));
    // 0x184490: 0x78a603c0  lq          $a2, 0x3C0($a1)
    ctx->pc = 0x184490u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 960)));
    // 0x184494: 0x78a703d0  lq          $a3, 0x3D0($a1)
    ctx->pc = 0x184494u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 976)));
    // 0x184498: 0x78a803e0  lq          $t0, 0x3E0($a1)
    ctx->pc = 0x184498u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 992)));
    // 0x18449c: 0x78a903f0  lq          $t1, 0x3F0($a1)
    ctx->pc = 0x18449cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1008)));
    // 0x1844a0: 0x7c460f00  sq          $a2, 0xF00($v0)
    ctx->pc = 0x1844a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3840), GPR_VEC(ctx, 6));
    // 0x1844a4: 0x7c470f10  sq          $a3, 0xF10($v0)
    ctx->pc = 0x1844a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3856), GPR_VEC(ctx, 7));
    // 0x1844a8: 0x7c480f80  sq          $t0, 0xF80($v0)
    ctx->pc = 0x1844a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3968), GPR_VEC(ctx, 8));
    // 0x1844ac: 0x7c490f90  sq          $t1, 0xF90($v0)
    ctx->pc = 0x1844acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3984), GPR_VEC(ctx, 9));
    // 0x1844b0: 0x78a60400  lq          $a2, 0x400($a1)
    ctx->pc = 0x1844b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x1844b4: 0x78a70410  lq          $a3, 0x410($a1)
    ctx->pc = 0x1844b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1040)));
    // 0x1844b8: 0x78a80420  lq          $t0, 0x420($a1)
    ctx->pc = 0x1844b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1056)));
    // 0x1844bc: 0x78a90430  lq          $t1, 0x430($a1)
    ctx->pc = 0x1844bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1072)));
    // 0x1844c0: 0x7c461000  sq          $a2, 0x1000($v0)
    ctx->pc = 0x1844c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4096), GPR_VEC(ctx, 6));
    // 0x1844c4: 0x7c471010  sq          $a3, 0x1010($v0)
    ctx->pc = 0x1844c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4112), GPR_VEC(ctx, 7));
    // 0x1844c8: 0x7c481080  sq          $t0, 0x1080($v0)
    ctx->pc = 0x1844c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4224), GPR_VEC(ctx, 8));
    // 0x1844cc: 0x7c491090  sq          $t1, 0x1090($v0)
    ctx->pc = 0x1844ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4240), GPR_VEC(ctx, 9));
    // 0x1844d0: 0x78a60440  lq          $a2, 0x440($a1)
    ctx->pc = 0x1844d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1088)));
    // 0x1844d4: 0x78a70450  lq          $a3, 0x450($a1)
    ctx->pc = 0x1844d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1104)));
    // 0x1844d8: 0x78a80460  lq          $t0, 0x460($a1)
    ctx->pc = 0x1844d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1120)));
    // 0x1844dc: 0x78a90470  lq          $t1, 0x470($a1)
    ctx->pc = 0x1844dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1136)));
    // 0x1844e0: 0x7c461100  sq          $a2, 0x1100($v0)
    ctx->pc = 0x1844e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4352), GPR_VEC(ctx, 6));
    // 0x1844e4: 0x7c471110  sq          $a3, 0x1110($v0)
    ctx->pc = 0x1844e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4368), GPR_VEC(ctx, 7));
    // 0x1844e8: 0x7c481180  sq          $t0, 0x1180($v0)
    ctx->pc = 0x1844e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4480), GPR_VEC(ctx, 8));
    // 0x1844ec: 0x7c491190  sq          $t1, 0x1190($v0)
    ctx->pc = 0x1844ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4496), GPR_VEC(ctx, 9));
    // 0x1844f0: 0x78a60480  lq          $a2, 0x480($a1)
    ctx->pc = 0x1844f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1152)));
    // 0x1844f4: 0x78a70490  lq          $a3, 0x490($a1)
    ctx->pc = 0x1844f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1168)));
    // 0x1844f8: 0x78a804a0  lq          $t0, 0x4A0($a1)
    ctx->pc = 0x1844f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1184)));
    // 0x1844fc: 0x78a904b0  lq          $t1, 0x4B0($a1)
    ctx->pc = 0x1844fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1200)));
    // 0x184500: 0x7c461200  sq          $a2, 0x1200($v0)
    ctx->pc = 0x184500u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4608), GPR_VEC(ctx, 6));
    // 0x184504: 0x7c471210  sq          $a3, 0x1210($v0)
    ctx->pc = 0x184504u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4624), GPR_VEC(ctx, 7));
    // 0x184508: 0x7c481280  sq          $t0, 0x1280($v0)
    ctx->pc = 0x184508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4736), GPR_VEC(ctx, 8));
    // 0x18450c: 0x7c491290  sq          $t1, 0x1290($v0)
    ctx->pc = 0x18450cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4752), GPR_VEC(ctx, 9));
    // 0x184510: 0x78a604c0  lq          $a2, 0x4C0($a1)
    ctx->pc = 0x184510u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1216)));
    // 0x184514: 0x78a704d0  lq          $a3, 0x4D0($a1)
    ctx->pc = 0x184514u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1232)));
    // 0x184518: 0x78a804e0  lq          $t0, 0x4E0($a1)
    ctx->pc = 0x184518u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1248)));
    // 0x18451c: 0x78a904f0  lq          $t1, 0x4F0($a1)
    ctx->pc = 0x18451cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1264)));
    // 0x184520: 0x7c461300  sq          $a2, 0x1300($v0)
    ctx->pc = 0x184520u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4864), GPR_VEC(ctx, 6));
    // 0x184524: 0x7c471310  sq          $a3, 0x1310($v0)
    ctx->pc = 0x184524u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4880), GPR_VEC(ctx, 7));
    // 0x184528: 0x7c481380  sq          $t0, 0x1380($v0)
    ctx->pc = 0x184528u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4992), GPR_VEC(ctx, 8));
    // 0x18452c: 0x7c491390  sq          $t1, 0x1390($v0)
    ctx->pc = 0x18452cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5008), GPR_VEC(ctx, 9));
    // 0x184530: 0x78a60500  lq          $a2, 0x500($a1)
    ctx->pc = 0x184530u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x184534: 0x78a70510  lq          $a3, 0x510($a1)
    ctx->pc = 0x184534u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1296)));
    // 0x184538: 0x78a80520  lq          $t0, 0x520($a1)
    ctx->pc = 0x184538u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1312)));
    // 0x18453c: 0x78a90530  lq          $t1, 0x530($a1)
    ctx->pc = 0x18453cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1328)));
    // 0x184540: 0x7c461400  sq          $a2, 0x1400($v0)
    ctx->pc = 0x184540u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5120), GPR_VEC(ctx, 6));
    // 0x184544: 0x7c471410  sq          $a3, 0x1410($v0)
    ctx->pc = 0x184544u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5136), GPR_VEC(ctx, 7));
    // 0x184548: 0x7c481480  sq          $t0, 0x1480($v0)
    ctx->pc = 0x184548u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5248), GPR_VEC(ctx, 8));
    // 0x18454c: 0x7c491490  sq          $t1, 0x1490($v0)
    ctx->pc = 0x18454cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5264), GPR_VEC(ctx, 9));
    // 0x184550: 0x78a60540  lq          $a2, 0x540($a1)
    ctx->pc = 0x184550u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1344)));
    // 0x184554: 0x78a70550  lq          $a3, 0x550($a1)
    ctx->pc = 0x184554u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1360)));
    // 0x184558: 0x78a80560  lq          $t0, 0x560($a1)
    ctx->pc = 0x184558u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1376)));
    // 0x18455c: 0x78a90570  lq          $t1, 0x570($a1)
    ctx->pc = 0x18455cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1392)));
    // 0x184560: 0x7c461500  sq          $a2, 0x1500($v0)
    ctx->pc = 0x184560u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5376), GPR_VEC(ctx, 6));
    // 0x184564: 0x7c471510  sq          $a3, 0x1510($v0)
    ctx->pc = 0x184564u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5392), GPR_VEC(ctx, 7));
    // 0x184568: 0x7c481580  sq          $t0, 0x1580($v0)
    ctx->pc = 0x184568u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5504), GPR_VEC(ctx, 8));
    // 0x18456c: 0x7c491590  sq          $t1, 0x1590($v0)
    ctx->pc = 0x18456cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5520), GPR_VEC(ctx, 9));
    // 0x184570: 0x78a60580  lq          $a2, 0x580($a1)
    ctx->pc = 0x184570u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1408)));
    // 0x184574: 0x78a70590  lq          $a3, 0x590($a1)
    ctx->pc = 0x184574u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1424)));
    // 0x184578: 0x78a805a0  lq          $t0, 0x5A0($a1)
    ctx->pc = 0x184578u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1440)));
    // 0x18457c: 0x78a905b0  lq          $t1, 0x5B0($a1)
    ctx->pc = 0x18457cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x184580: 0x7c461600  sq          $a2, 0x1600($v0)
    ctx->pc = 0x184580u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5632), GPR_VEC(ctx, 6));
    // 0x184584: 0x7c471610  sq          $a3, 0x1610($v0)
    ctx->pc = 0x184584u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5648), GPR_VEC(ctx, 7));
    // 0x184588: 0x7c481680  sq          $t0, 0x1680($v0)
    ctx->pc = 0x184588u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5760), GPR_VEC(ctx, 8));
    // 0x18458c: 0x7c491690  sq          $t1, 0x1690($v0)
    ctx->pc = 0x18458cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5776), GPR_VEC(ctx, 9));
    // 0x184590: 0x78a605c0  lq          $a2, 0x5C0($a1)
    ctx->pc = 0x184590u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1472)));
    // 0x184594: 0x78a705d0  lq          $a3, 0x5D0($a1)
    ctx->pc = 0x184594u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1488)));
    // 0x184598: 0x78a805e0  lq          $t0, 0x5E0($a1)
    ctx->pc = 0x184598u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1504)));
    // 0x18459c: 0x78a905f0  lq          $t1, 0x5F0($a1)
    ctx->pc = 0x18459cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1520)));
    // 0x1845a0: 0x7c461700  sq          $a2, 0x1700($v0)
    ctx->pc = 0x1845a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5888), GPR_VEC(ctx, 6));
    // 0x1845a4: 0x7c471710  sq          $a3, 0x1710($v0)
    ctx->pc = 0x1845a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 5904), GPR_VEC(ctx, 7));
    // 0x1845a8: 0x7c481780  sq          $t0, 0x1780($v0)
    ctx->pc = 0x1845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6016), GPR_VEC(ctx, 8));
    // 0x1845ac: 0x7c491790  sq          $t1, 0x1790($v0)
    ctx->pc = 0x1845acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6032), GPR_VEC(ctx, 9));
    // 0x1845b0: 0x78a60600  lq          $a2, 0x600($a1)
    ctx->pc = 0x1845b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1536)));
    // 0x1845b4: 0x78a70610  lq          $a3, 0x610($a1)
    ctx->pc = 0x1845b4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1552)));
    // 0x1845b8: 0x78a80620  lq          $t0, 0x620($a1)
    ctx->pc = 0x1845b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1568)));
    // 0x1845bc: 0x78a90630  lq          $t1, 0x630($a1)
    ctx->pc = 0x1845bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1584)));
    // 0x1845c0: 0x7c461800  sq          $a2, 0x1800($v0)
    ctx->pc = 0x1845c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6144), GPR_VEC(ctx, 6));
    // 0x1845c4: 0x7c471810  sq          $a3, 0x1810($v0)
    ctx->pc = 0x1845c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6160), GPR_VEC(ctx, 7));
    // 0x1845c8: 0x7c481880  sq          $t0, 0x1880($v0)
    ctx->pc = 0x1845c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6272), GPR_VEC(ctx, 8));
    // 0x1845cc: 0x7c491890  sq          $t1, 0x1890($v0)
    ctx->pc = 0x1845ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6288), GPR_VEC(ctx, 9));
    // 0x1845d0: 0x78a60640  lq          $a2, 0x640($a1)
    ctx->pc = 0x1845d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x1845d4: 0x78a70650  lq          $a3, 0x650($a1)
    ctx->pc = 0x1845d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1616)));
    // 0x1845d8: 0x78a80660  lq          $t0, 0x660($a1)
    ctx->pc = 0x1845d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1632)));
    // 0x1845dc: 0x78a90670  lq          $t1, 0x670($a1)
    ctx->pc = 0x1845dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1648)));
    // 0x1845e0: 0x7c461900  sq          $a2, 0x1900($v0)
    ctx->pc = 0x1845e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6400), GPR_VEC(ctx, 6));
    // 0x1845e4: 0x7c471910  sq          $a3, 0x1910($v0)
    ctx->pc = 0x1845e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6416), GPR_VEC(ctx, 7));
    // 0x1845e8: 0x7c481980  sq          $t0, 0x1980($v0)
    ctx->pc = 0x1845e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6528), GPR_VEC(ctx, 8));
    // 0x1845ec: 0x7c491990  sq          $t1, 0x1990($v0)
    ctx->pc = 0x1845ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6544), GPR_VEC(ctx, 9));
    // 0x1845f0: 0x78a60680  lq          $a2, 0x680($a1)
    ctx->pc = 0x1845f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1664)));
    // 0x1845f4: 0x78a70690  lq          $a3, 0x690($a1)
    ctx->pc = 0x1845f4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1680)));
    // 0x1845f8: 0x78a806a0  lq          $t0, 0x6A0($a1)
    ctx->pc = 0x1845f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1696)));
    // 0x1845fc: 0x78a906b0  lq          $t1, 0x6B0($a1)
    ctx->pc = 0x1845fcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1712)));
    // 0x184600: 0x7c461a00  sq          $a2, 0x1A00($v0)
    ctx->pc = 0x184600u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6656), GPR_VEC(ctx, 6));
    // 0x184604: 0x7c471a10  sq          $a3, 0x1A10($v0)
    ctx->pc = 0x184604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6672), GPR_VEC(ctx, 7));
    // 0x184608: 0x7c481a80  sq          $t0, 0x1A80($v0)
    ctx->pc = 0x184608u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6784), GPR_VEC(ctx, 8));
    // 0x18460c: 0x7c491a90  sq          $t1, 0x1A90($v0)
    ctx->pc = 0x18460cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6800), GPR_VEC(ctx, 9));
    // 0x184610: 0x78a606c0  lq          $a2, 0x6C0($a1)
    ctx->pc = 0x184610u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1728)));
    // 0x184614: 0x78a706d0  lq          $a3, 0x6D0($a1)
    ctx->pc = 0x184614u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1744)));
    // 0x184618: 0x78a806e0  lq          $t0, 0x6E0($a1)
    ctx->pc = 0x184618u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1760)));
    // 0x18461c: 0x78a906f0  lq          $t1, 0x6F0($a1)
    ctx->pc = 0x18461cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1776)));
    // 0x184620: 0x7c461b00  sq          $a2, 0x1B00($v0)
    ctx->pc = 0x184620u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6912), GPR_VEC(ctx, 6));
    // 0x184624: 0x7c471b10  sq          $a3, 0x1B10($v0)
    ctx->pc = 0x184624u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 6928), GPR_VEC(ctx, 7));
    // 0x184628: 0x7c481b80  sq          $t0, 0x1B80($v0)
    ctx->pc = 0x184628u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7040), GPR_VEC(ctx, 8));
    // 0x18462c: 0x7c491b90  sq          $t1, 0x1B90($v0)
    ctx->pc = 0x18462cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7056), GPR_VEC(ctx, 9));
    // 0x184630: 0x78a60700  lq          $a2, 0x700($a1)
    ctx->pc = 0x184630u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1792)));
    // 0x184634: 0x78a70710  lq          $a3, 0x710($a1)
    ctx->pc = 0x184634u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1808)));
    // 0x184638: 0x78a80720  lq          $t0, 0x720($a1)
    ctx->pc = 0x184638u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1824)));
    // 0x18463c: 0x78a90730  lq          $t1, 0x730($a1)
    ctx->pc = 0x18463cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x184640: 0x7c461c00  sq          $a2, 0x1C00($v0)
    ctx->pc = 0x184640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7168), GPR_VEC(ctx, 6));
    // 0x184644: 0x7c471c10  sq          $a3, 0x1C10($v0)
    ctx->pc = 0x184644u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7184), GPR_VEC(ctx, 7));
    // 0x184648: 0x7c481c80  sq          $t0, 0x1C80($v0)
    ctx->pc = 0x184648u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7296), GPR_VEC(ctx, 8));
    // 0x18464c: 0x7c491c90  sq          $t1, 0x1C90($v0)
    ctx->pc = 0x18464cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7312), GPR_VEC(ctx, 9));
    // 0x184650: 0x78a60740  lq          $a2, 0x740($a1)
    ctx->pc = 0x184650u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1856)));
    // 0x184654: 0x78a70750  lq          $a3, 0x750($a1)
    ctx->pc = 0x184654u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1872)));
    // 0x184658: 0x78a80760  lq          $t0, 0x760($a1)
    ctx->pc = 0x184658u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1888)));
    // 0x18465c: 0x78a90770  lq          $t1, 0x770($a1)
    ctx->pc = 0x18465cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1904)));
    // 0x184660: 0x7c461d00  sq          $a2, 0x1D00($v0)
    ctx->pc = 0x184660u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7424), GPR_VEC(ctx, 6));
    // 0x184664: 0x7c471d10  sq          $a3, 0x1D10($v0)
    ctx->pc = 0x184664u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7440), GPR_VEC(ctx, 7));
    // 0x184668: 0x7c481d80  sq          $t0, 0x1D80($v0)
    ctx->pc = 0x184668u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7552), GPR_VEC(ctx, 8));
    // 0x18466c: 0x7c491d90  sq          $t1, 0x1D90($v0)
    ctx->pc = 0x18466cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7568), GPR_VEC(ctx, 9));
    // 0x184670: 0x78a60780  lq          $a2, 0x780($a1)
    ctx->pc = 0x184670u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1920)));
    // 0x184674: 0x78a70790  lq          $a3, 0x790($a1)
    ctx->pc = 0x184674u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 1936)));
    // 0x184678: 0x78a807a0  lq          $t0, 0x7A0($a1)
    ctx->pc = 0x184678u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 1952)));
    // 0x18467c: 0x78a907b0  lq          $t1, 0x7B0($a1)
    ctx->pc = 0x18467cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 1968)));
    // 0x184680: 0x7c461e00  sq          $a2, 0x1E00($v0)
    ctx->pc = 0x184680u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7680), GPR_VEC(ctx, 6));
    // 0x184684: 0x7c471e10  sq          $a3, 0x1E10($v0)
    ctx->pc = 0x184684u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7696), GPR_VEC(ctx, 7));
    // 0x184688: 0x7c481e80  sq          $t0, 0x1E80($v0)
    ctx->pc = 0x184688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7808), GPR_VEC(ctx, 8));
    // 0x18468c: 0x7c491e90  sq          $t1, 0x1E90($v0)
    ctx->pc = 0x18468cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7824), GPR_VEC(ctx, 9));
    // 0x184690: 0x78a607c0  lq          $a2, 0x7C0($a1)
    ctx->pc = 0x184690u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 1984)));
    // 0x184694: 0x78a707d0  lq          $a3, 0x7D0($a1)
    ctx->pc = 0x184694u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 2000)));
    // 0x184698: 0x78a807e0  lq          $t0, 0x7E0($a1)
    ctx->pc = 0x184698u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 2016)));
    // 0x18469c: 0x78a907f0  lq          $t1, 0x7F0($a1)
    ctx->pc = 0x18469cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 2032)));
    // 0x1846a0: 0x7c461f00  sq          $a2, 0x1F00($v0)
    ctx->pc = 0x1846a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7936), GPR_VEC(ctx, 6));
    // 0x1846a4: 0x7c471f10  sq          $a3, 0x1F10($v0)
    ctx->pc = 0x1846a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 7952), GPR_VEC(ctx, 7));
    // 0x1846a8: 0x7c481f80  sq          $t0, 0x1F80($v0)
    ctx->pc = 0x1846a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 8064), GPR_VEC(ctx, 8));
    // 0x1846ac: 0x7c491f90  sq          $t1, 0x1F90($v0)
    ctx->pc = 0x1846acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 8080), GPR_VEC(ctx, 9));
    // 0x1846b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1846B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1846B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1846B8u;
}
