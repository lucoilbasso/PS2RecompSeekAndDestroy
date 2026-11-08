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

// Function: entry_0017a7f0
// Address: 0x17a7f0 - 0x17a818
void entry_0017a7f0_0x17a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a7f0_0x17a7f0");
#endif

    switch (ctx->pc) {
        case 0x17a7f8u: goto label_17a7f8;
        default: break;
    }

    ctx->pc = 0x17a7f0u;

    // 0x17a7f0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17A7F0u;
    SET_GPR_U32(ctx, 31, 0x17A7F8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17A7F0u, 0x17A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A7F8u;
label_17a7f8:
    // 0x17a7f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17a7fc: 0x24a57ae8  addiu       $a1, $a1, 0x7AE8
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31464));
    // 0x17a800: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17a800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A804u;
    {
        const bool branch_taken_0x17a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A804u;
        // 0x17a808: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a804) {
            ctx->pc = 0x17A818u;
            return;
        }
    }
    ctx->pc = 0x17A80Cu;
    // 0x17a80c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17a810: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17A810u;
    SET_GPR_U32(ctx, 31, 0x17A818u);
    ctx->pc = 0x17A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A810u;
    // 0x17a814: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17A810u, 0x17A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A818u;
}
