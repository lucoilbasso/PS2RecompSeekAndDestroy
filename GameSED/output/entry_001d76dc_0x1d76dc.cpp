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

// Function: entry_001d76dc
// Address: 0x1d76dc - 0x1d7700
void entry_001d76dc_0x1d76dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d76dc_0x1d76dc");
#endif

    switch (ctx->pc) {
        case 0x1d76e4u: goto label_1d76e4;
        default: break;
    }

    ctx->pc = 0x1d76dcu;

    // 0x1d76dc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D76DCu;
    SET_GPR_U32(ctx, 31, 0x1D76E4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D76DCu, 0x1D76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76E4u;
label_1d76e4:
    // 0x1d76e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D76E4u;
    {
        const bool branch_taken_0x1d76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76E4u;
        // 0x1d76e8: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76e4) {
            ctx->pc = 0x1D7700u;
            return;
        }
    }
    ctx->pc = 0x1D76ECu;
    // 0x1d76ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d76f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d76f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76f4: 0x24a51be0  addiu       $a1, $a1, 0x1BE0
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    // 0x1d76f8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D76F8u;
    SET_GPR_U32(ctx, 31, 0x1D7700u);
    ctx->pc = 0x1D76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76F8u;
    // 0x1d76fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D76F8u, 0x1D7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7700u;
}
