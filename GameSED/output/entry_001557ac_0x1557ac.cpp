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

// Function: entry_001557ac
// Address: 0x1557ac - 0x1557e8
void entry_001557ac_0x1557ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001557ac_0x1557ac");
#endif

    ctx->pc = 0x1557acu;

    // 0x1557ac: 0x24e60450  addiu       $a2, $a3, 0x450
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1104));
    // 0x1557b0: 0xace00444  sw          $zero, 0x444($a3)
    ctx->pc = 0x1557b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1092), GPR_U32(ctx, 0));
    // 0x1557b4: 0xace00448  sw          $zero, 0x448($a3)
    ctx->pc = 0x1557b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1096), GPR_U32(ctx, 0));
    // 0x1557b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1557b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1557bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1557bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1557c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1557c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1557c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1557c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1557c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1557cc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1557ccu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1557d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1557d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1557d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1557d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1557d8: 0xa0e0044f  sb          $zero, 0x44F($a3)
    ctx->pc = 0x1557d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557dc: 0xa0e0044e  sb          $zero, 0x44E($a3)
    ctx->pc = 0x1557dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557e0: 0xa0e0044d  sb          $zero, 0x44D($a3)
    ctx->pc = 0x1557e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1101), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557e4: 0xa0e0044c  sb          $zero, 0x44C($a3)
    ctx->pc = 0x1557e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1100), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1557e8u;
}
