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

// Function: entry_001d6ee0
// Address: 0x1d6ee0 - 0x1d6f08
void entry_001d6ee0_0x1d6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6ee0_0x1d6ee0");
#endif

    ctx->pc = 0x1d6ee0u;

    // 0x1d6ee0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1d6ee4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d6ee8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6ef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6EF8u;
    {
        const bool branch_taken_0x1d6ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EF8u;
        // 0x1d6efc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ef8) {
            ctx->pc = 0x1D6F08u;
            return;
        }
    }
    ctx->pc = 0x1D6F00u;
    // 0x1d6f00: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6F00u;
    SET_GPR_U32(ctx, 31, 0x1D6F08u);
    ctx->pc = 0x1D6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F00u;
    // 0x1d6f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6F00u, 0x1D6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F08u;
}
