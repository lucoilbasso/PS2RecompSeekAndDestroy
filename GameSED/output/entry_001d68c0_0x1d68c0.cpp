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

// Function: entry_001d68c0
// Address: 0x1d68c0 - 0x1d68e8
void entry_001d68c0_0x1d68c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d68c0_0x1d68c0");
#endif

    ctx->pc = 0x1d68c0u;

    // 0x1d68c0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1d68c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d68c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d68c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d68cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d68d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d68d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d68d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D68D8u;
    {
        const bool branch_taken_0x1d68d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D8u;
        // 0x1d68dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68d8) {
            ctx->pc = 0x1D68E8u;
            return;
        }
    }
    ctx->pc = 0x1D68E0u;
    // 0x1d68e0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D68E0u;
    SET_GPR_U32(ctx, 31, 0x1D68E8u);
    ctx->pc = 0x1D68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68E0u;
    // 0x1d68e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D68E0u, 0x1D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68E8u;
}
