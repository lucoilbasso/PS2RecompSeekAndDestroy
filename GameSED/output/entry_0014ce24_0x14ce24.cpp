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

// Function: entry_0014ce24
// Address: 0x14ce24 - 0x14ce68
void entry_0014ce24_0x14ce24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ce24_0x14ce24");
#endif

    ctx->pc = 0x14ce24u;

    // 0x14ce24: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x14ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x14ce28: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x14ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x14ce2c: 0x26070210  addiu       $a3, $s0, 0x210
    ctx->pc = 0x14ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x14ce30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ce30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ce34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14ce38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ce3c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x14ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x14ce40: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x14ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x14ce44: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x14ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14ce48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ce48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ce4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ce4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ce50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ce50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ce54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ce58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ce58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ce5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ce5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ce60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ce60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ce64: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x14ce68u;
}
