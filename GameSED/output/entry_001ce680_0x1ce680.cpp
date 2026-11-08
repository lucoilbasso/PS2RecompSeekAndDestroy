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

// Function: entry_001ce680
// Address: 0x1ce680 - 0x1ce6a0
void entry_001ce680_0x1ce680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce680_0x1ce680");
#endif

    ctx->pc = 0x1ce680u;

    // 0x1ce680: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce684: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1ce688: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ce688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ce68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE68Cu;
    {
        const bool branch_taken_0x1ce68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE68Cu;
        // 0x1ce690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce68c) {
            ctx->pc = 0x1CE6A0u;
            return;
        }
    }
    ctx->pc = 0x1CE694u;
    // 0x1ce694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE694u;
    {
        const bool branch_taken_0x1ce694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE694u;
        // 0x1ce698: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce694) {
            ctx->pc = 0x1CE6A4u;
            return;
        }
    }
    ctx->pc = 0x1CE69Cu;
    // 0x1ce69c: 0x0  nop
    ctx->pc = 0x1ce69cu;
    // NOP
    ctx->pc = 0x1ce6a0u;
}
