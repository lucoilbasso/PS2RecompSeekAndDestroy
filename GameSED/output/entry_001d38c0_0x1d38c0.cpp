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

// Function: entry_001d38c0
// Address: 0x1d38c0 - 0x1d38e0
void entry_001d38c0_0x1d38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d38c0_0x1d38c0");
#endif

    switch (ctx->pc) {
        case 0x1d38d4u: goto label_1d38d4;
        default: break;
    }

    ctx->pc = 0x1d38c0u;

    // 0x1d38c0: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1d38c4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d38c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38cc: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1D38CCu;
    SET_GPR_U32(ctx, 31, 0x1D38D4u);
    ctx->pc = 0x1D38D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38CCu;
    // 0x1d38d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1D38CCu, 0x1D38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38D4u;
label_1d38d4:
    // 0x1d38d4: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D38D4u;
    {
        const bool branch_taken_0x1d38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38D4u;
        // 0x1d38d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38d4) {
            ctx->pc = 0x1D37F8u;
            return;
        }
    }
    ctx->pc = 0x1D38DCu;
    // 0x1d38dc: 0x0  nop
    ctx->pc = 0x1d38dcu;
    // NOP
    ctx->pc = 0x1d38e0u;
}
