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

// Function: entry_00100d48
// Address: 0x100d48 - 0x100d70
void entry_00100d48_0x100d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100d48_0x100d48");
#endif

    ctx->pc = 0x100d48u;

    // 0x100d48: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x100d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100d4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x100d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D60u;
    {
        const bool branch_taken_0x100d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D60u;
        // 0x100d64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d60) {
            ctx->pc = 0x100D70u;
            return;
        }
    }
    ctx->pc = 0x100D68u;
    // 0x100d68: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100D68u;
    SET_GPR_U32(ctx, 31, 0x100D70u);
    ctx->pc = 0x100D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D68u;
    // 0x100d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100D68u, 0x100D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D70u;
}
