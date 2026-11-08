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

// Function: entry_001cff38
// Address: 0x1cff38 - 0x1cff64
void entry_001cff38_0x1cff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff38_0x1cff38");
#endif

    ctx->pc = 0x1cff38u;

    // 0x1cff38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff3c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cff40: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1cff40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1cff44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cff48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cff48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cff4c: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x1cff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1cff50: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cff54: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cff54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1cff58: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1cff58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1cff5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff60: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1cff60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cff64u;
}
