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

// Function: entry_001115c0
// Address: 0x1115c0 - 0x1115e0
void entry_001115c0_0x1115c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001115c0_0x1115c0");
#endif

    switch (ctx->pc) {
        case 0x1115d4u: goto label_1115d4;
        default: break;
    }

    ctx->pc = 0x1115c0u;

    // 0x1115c0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1115c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1115c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1115c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1115c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115cc: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1115CCu;
    SET_GPR_U32(ctx, 31, 0x1115D4u);
    ctx->pc = 0x1115D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115CCu;
    // 0x1115d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1115CCu, 0x1115D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115D4u;
label_1115d4:
    // 0x1115d4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1115D4u;
    {
        const bool branch_taken_0x1115d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D4u;
        // 0x1115d8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115d4) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x1115DCu;
    // 0x1115dc: 0x0  nop
    ctx->pc = 0x1115dcu;
    // NOP
    ctx->pc = 0x1115e0u;
}
