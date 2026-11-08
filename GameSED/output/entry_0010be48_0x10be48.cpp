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

// Function: entry_0010be48
// Address: 0x10be48 - 0x10be78
void entry_0010be48_0x10be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be48_0x10be48");
#endif

    switch (ctx->pc) {
        case 0x10be50u: goto label_10be50;
        default: break;
    }

    ctx->pc = 0x10be48u;

label_10be48:
    // 0x10be48: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x10BE48u;
    SET_GPR_U32(ctx, 31, 0x10BE50u);
    ctx->pc = 0x10BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE48u;
    // 0x10be4c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x10BE48u, 0x10BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE50u;
label_10be50:
    // 0x10be50: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x10be50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x10be54: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x10BE54u;
    {
        const bool branch_taken_0x10be54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE54u;
        // 0x10be58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be54) {
            ctx->pc = 0x10BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10be48;
        }
    }
    ctx->pc = 0x10BE5Cu;
    // 0x10be5c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x10be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x10be60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10be60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10be64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BE64u;
    {
        const bool branch_taken_0x10be64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE64u;
        // 0x10be68: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be64) {
            ctx->pc = 0x10BE78u;
            return;
        }
    }
    ctx->pc = 0x10BE6Cu;
    // 0x10be6c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x10be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x10be70: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10BE70u;
    SET_GPR_U32(ctx, 31, 0x10BE78u);
    ctx->pc = 0x10BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE70u;
    // 0x10be74: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10BE70u, 0x10BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE78u;
}
