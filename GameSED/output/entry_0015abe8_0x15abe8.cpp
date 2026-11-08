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

// Function: entry_0015abe8
// Address: 0x15abe8 - 0x15ac14
void entry_0015abe8_0x15abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015abe8_0x15abe8");
#endif

    ctx->pc = 0x15abe8u;

    // 0x15abe8: 0x26660190  addiu       $a2, $s3, 0x190
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
    // 0x15abec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15abecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15abf0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15abf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15abf4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15abf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15abf8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15abf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15abfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15ac00: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15ac00u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15ac04: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15ac04u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15ac08: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15ac08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15ac0c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x15ac10: 0x26670180  addiu       $a3, $s3, 0x180
    ctx->pc = 0x15ac10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    ctx->pc = 0x15ac14u;
}
