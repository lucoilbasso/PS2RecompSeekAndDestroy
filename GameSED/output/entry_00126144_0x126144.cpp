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

// Function: entry_00126144
// Address: 0x126144 - 0x126190
void entry_00126144_0x126144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126144_0x126144");
#endif

    ctx->pc = 0x126144u;

    // 0x126144: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x126144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x126148: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x12614c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x126150: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x126154: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x126154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126158: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x126158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12615c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x126160: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x126160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x126164: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x126168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12616c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x12616cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x126170: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x126170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x126174: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x126174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x126178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12617c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12617cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x126180: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x126180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126188: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x126188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12618c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12618cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x126190u;
}
