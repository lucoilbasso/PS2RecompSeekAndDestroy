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

// Function: entry_0012bbc0
// Address: 0x12bbc0 - 0x12bbf0
void entry_0012bbc0_0x12bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbc0_0x12bbc0");
#endif

    switch (ctx->pc) {
        case 0x12bbc8u: goto label_12bbc8;
        default: break;
    }

    ctx->pc = 0x12bbc0u;

label_12bbc0:
    // 0x12bbc0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12BBC0u;
    SET_GPR_U32(ctx, 31, 0x12BBC8u);
    ctx->pc = 0x12BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBC0u;
    // 0x12bbc4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12BBC0u, 0x12BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBC8u;
label_12bbc8:
    // 0x12bbc8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12bbcc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12BBCCu;
    {
        const bool branch_taken_0x12bbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBCCu;
        // 0x12bbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbcc) {
            ctx->pc = 0x12BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbc0;
        }
    }
    ctx->pc = 0x12BBD4u;
    // 0x12bbd4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x12bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x12bbd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12bbdc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BBDCu;
    {
        const bool branch_taken_0x12bbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBDCu;
        // 0x12bbe0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbdc) {
            ctx->pc = 0x12BBF0u;
            return;
        }
    }
    ctx->pc = 0x12BBE4u;
    // 0x12bbe4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x12bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x12bbe8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12BBE8u;
    SET_GPR_U32(ctx, 31, 0x12BBF0u);
    ctx->pc = 0x12BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBE8u;
    // 0x12bbec: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12BBE8u, 0x12BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBF0u;
}
