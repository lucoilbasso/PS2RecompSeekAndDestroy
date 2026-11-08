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

// Function: entry_001bf0f8
// Address: 0x1bf0f8 - 0x1bf134
void entry_001bf0f8_0x1bf0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf0f8_0x1bf0f8");
#endif

    ctx->pc = 0x1bf0f8u;

    // 0x1bf0f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bf0fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf104: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf10c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1bf10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1bf110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf114: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1bf114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1bf118: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1bf118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1bf11c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1bf11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1bf120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf124: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1bf124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1bf128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bf128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf12c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF12Cu;
        // 0x1bf130: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF2B4u;
            return;
        }
    }
    ctx->pc = 0x1BF134u;
}
