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

// Function: entry_001b98bc
// Address: 0x1b98bc - 0x1b98e0
void entry_001b98bc_0x1b98bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b98bc_0x1b98bc");
#endif

    switch (ctx->pc) {
        case 0x1b98d8u: goto label_1b98d8;
        default: break;
    }

    ctx->pc = 0x1b98bcu;

    // 0x1b98bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b98c0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B98C0u;
    {
        const bool branch_taken_0x1b98c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B98C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98C0u;
        // 0x1b98c4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98c0) {
            ctx->pc = 0x1B98E0u;
            return;
        }
    }
    ctx->pc = 0x1B98C8u;
    // 0x1b98c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b98c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b98ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98d0: 0xc06e436  jal         func_1B90D8
    ctx->pc = 0x1B98D0u;
    SET_GPR_U32(ctx, 31, 0x1B98D8u);
    ctx->pc = 0x1B98D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B98D0u;
    // 0x1b98d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B90D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B90D8u, 0x1B98D0u, 0x1B98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B98D8u;
label_1b98d8:
    // 0x1b98d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b98dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b98dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b98e0u;
}
