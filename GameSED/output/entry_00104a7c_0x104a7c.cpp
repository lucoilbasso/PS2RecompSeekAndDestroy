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

// Function: entry_00104a7c
// Address: 0x104a7c - 0x104a9c
void entry_00104a7c_0x104a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a7c_0x104a7c");
#endif

    ctx->pc = 0x104a7cu;

    // 0x104a7c: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104a88: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x104a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x104a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x104a90: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104A90u;
    {
        const bool branch_taken_0x104a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A90u;
        // 0x104a94: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a90) {
            ctx->pc = 0x104A9Cu;
            return;
        }
    }
    ctx->pc = 0x104A98u;
    // 0x104a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x104a9cu;
}
