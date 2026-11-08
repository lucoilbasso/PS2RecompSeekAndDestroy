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

// Function: entry_00159074
// Address: 0x159074 - 0x1590a4
void entry_00159074_0x159074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159074_0x159074");
#endif

    ctx->pc = 0x159074u;

    // 0x159074: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x159074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x159078: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x159078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15907c: 0xc5000404  lwc1        $f0, 0x404($t0)
    ctx->pc = 0x15907cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159080: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x159080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159084: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159088: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x159088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15908c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159090: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159090u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159094: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159094u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159098: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159098u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15909c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15909cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1590a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1590a4u;
}
