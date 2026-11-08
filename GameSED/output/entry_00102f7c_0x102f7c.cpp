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

// Function: entry_00102f7c
// Address: 0x102f7c - 0x102fa0
void entry_00102f7c_0x102f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f7c_0x102f7c");
#endif

    switch (ctx->pc) {
        case 0x102f84u: goto label_102f84;
        default: break;
    }

    ctx->pc = 0x102f7cu;

    // 0x102f7c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x102F7Cu;
    SET_GPR_U32(ctx, 31, 0x102F84u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x102F7Cu, 0x102F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F84u;
label_102f84:
    // 0x102f84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x102F84u;
    {
        const bool branch_taken_0x102f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F84u;
        // 0x102f88: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f84) {
            ctx->pc = 0x102FA0u;
            return;
        }
    }
    ctx->pc = 0x102F8Cu;
    // 0x102f8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f94: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    // 0x102f98: 0xc068186  jal         func_1A0618
    ctx->pc = 0x102F98u;
    SET_GPR_U32(ctx, 31, 0x102FA0u);
    ctx->pc = 0x102F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F98u;
    // 0x102f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x102F98u, 0x102FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FA0u;
}
