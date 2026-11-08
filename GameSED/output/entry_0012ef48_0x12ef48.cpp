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

// Function: entry_0012ef48
// Address: 0x12ef48 - 0x12ef78
void entry_0012ef48_0x12ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef48_0x12ef48");
#endif

    ctx->pc = 0x12ef48u;

    // 0x12ef48: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x12ef4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ef50: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EF50u;
    {
        const bool branch_taken_0x12ef50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF50u;
        // 0x12ef54: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef50) {
            ctx->pc = 0x12EFA0u;
            return;
        }
    }
    ctx->pc = 0x12EF58u;
    // 0x12ef58: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x12ef5c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x12ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12ef60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12ef60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12ef64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12EF64u;
    {
        const bool branch_taken_0x12ef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF64u;
        // 0x12ef68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef64) {
            ctx->pc = 0x12EFA4u;
            return;
        }
    }
    ctx->pc = 0x12EF6Cu;
    // 0x12ef6c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x12ef6cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x12ef70: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EF70u;
    {
        const bool branch_taken_0x12ef70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef70) {
            ctx->pc = 0x12EF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EF70u;
            // 0x12ef74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EF78u;
            return;
        }
    }
    ctx->pc = 0x12EF78u;
}
