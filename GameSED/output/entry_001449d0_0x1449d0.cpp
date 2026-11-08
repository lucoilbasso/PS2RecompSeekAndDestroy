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

// Function: entry_001449d0
// Address: 0x1449d0 - 0x1449f8
void entry_001449d0_0x1449d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001449d0_0x1449d0");
#endif

    switch (ctx->pc) {
        case 0x1449e0u: goto label_1449e0;
        case 0x1449ecu: goto label_1449ec;
        default: break;
    }

    ctx->pc = 0x1449d0u;

    // 0x1449d0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1449D0u;
    {
        const bool branch_taken_0x1449d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D0u;
        // 0x1449d4: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d0) {
            ctx->pc = 0x144A34u;
            return;
        }
    }
    ctx->pc = 0x1449D8u;
    // 0x1449d8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1449D8u;
    SET_GPR_U32(ctx, 31, 0x1449E0u);
    ctx->pc = 0x1449DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449D8u;
    // 0x1449dc: 0x8c510388  lw          $s1, 0x388($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1449D8u, 0x1449E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449E0u;
label_1449e0:
    // 0x1449e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e4: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1449E4u;
    SET_GPR_U32(ctx, 31, 0x1449ECu);
    ctx->pc = 0x1449E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449E4u;
    // 0x1449e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1449E4u, 0x1449ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449ECu;
label_1449ec:
    // 0x1449ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1449ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1449f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449f4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1449f8u;
}
