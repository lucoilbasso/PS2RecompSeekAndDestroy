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

// Function: entry_0013dfb8
// Address: 0x13dfb8 - 0x13dfe8
void entry_0013dfb8_0x13dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dfb8_0x13dfb8");
#endif

    switch (ctx->pc) {
        case 0x13dfc0u: goto label_13dfc0;
        default: break;
    }

    ctx->pc = 0x13dfb8u;

label_13dfb8:
    // 0x13dfb8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13DFB8u;
    SET_GPR_U32(ctx, 31, 0x13DFC0u);
    ctx->pc = 0x13DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFB8u;
    // 0x13dfbc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13DFB8u, 0x13DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFC0u;
label_13dfc0:
    // 0x13dfc0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13dfc4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13DFC4u;
    {
        const bool branch_taken_0x13dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC4u;
        // 0x13dfc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfc4) {
            ctx->pc = 0x13DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dfb8;
        }
    }
    ctx->pc = 0x13DFCCu;
    // 0x13dfcc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dfd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13dfd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13dfd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DFD4u;
    {
        const bool branch_taken_0x13dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFD4u;
        // 0x13dfd8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfd4) {
            ctx->pc = 0x13DFE8u;
            return;
        }
    }
    ctx->pc = 0x13DFDCu;
    // 0x13dfdc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13dfe0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DFE0u;
    SET_GPR_U32(ctx, 31, 0x13DFE8u);
    ctx->pc = 0x13DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFE0u;
    // 0x13dfe4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DFE0u, 0x13DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFE8u;
}
