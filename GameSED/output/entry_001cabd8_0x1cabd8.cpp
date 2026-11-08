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

// Function: entry_001cabd8
// Address: 0x1cabd8 - 0x1cabf0
void entry_001cabd8_0x1cabd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabd8_0x1cabd8");
#endif

    switch (ctx->pc) {
        case 0x1cabe0u: goto label_1cabe0;
        case 0x1cabe8u: goto label_1cabe8;
        default: break;
    }

    ctx->pc = 0x1cabd8u;

    // 0x1cabd8: 0xc0729de  jal         func_1CA778
    ctx->pc = 0x1CABD8u;
    SET_GPR_U32(ctx, 31, 0x1CABE0u);
    ctx->pc = 0x1CABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABD8u;
    // 0x1cabdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA778u, 0x1CABD8u, 0x1CABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABE0u;
label_1cabe0:
    // 0x1cabe0: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CABE0u;
    SET_GPR_U32(ctx, 31, 0x1CABE8u);
    ctx->pc = 0x1CABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABE0u;
    // 0x1cabe4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CABE0u, 0x1CABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABE8u;
label_1cabe8:
    // 0x1cabe8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1CABE8u;
    {
        const bool branch_taken_0x1cabe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABE8u;
        // 0x1cabec: 0x8e180000  lw          $t8, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabe8) {
            ctx->pc = 0x1CADC4u;
            return;
        }
    }
    ctx->pc = 0x1CABF0u;
}
