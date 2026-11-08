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

// Function: entry_00190d58
// Address: 0x190d58 - 0x190d88
void entry_00190d58_0x190d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d58_0x190d58");
#endif

    switch (ctx->pc) {
        case 0x190d60u: goto label_190d60;
        default: break;
    }

    ctx->pc = 0x190d58u;

label_190d58:
    // 0x190d58: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x190D58u;
    SET_GPR_U32(ctx, 31, 0x190D60u);
    ctx->pc = 0x190D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D58u;
    // 0x190d5c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x190D58u, 0x190D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D60u;
label_190d60:
    // 0x190d60: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x190d64: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x190D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d58;
        }
    }
    ctx->pc = 0x190D6Cu;
    // 0x190d6c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x190d70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190d74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D74u;
        // 0x190d78: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190D88u;
            return;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x190d80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190D80u;
    SET_GPR_U32(ctx, 31, 0x190D88u);
    ctx->pc = 0x190D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D80u;
    // 0x190d84: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190D80u, 0x190D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D88u;
}
