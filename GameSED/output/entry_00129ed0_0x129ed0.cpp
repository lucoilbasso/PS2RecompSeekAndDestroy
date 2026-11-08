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

// Function: entry_00129ed0
// Address: 0x129ed0 - 0x129f00
void entry_00129ed0_0x129ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129ed0_0x129ed0");
#endif

    switch (ctx->pc) {
        case 0x129ed8u: goto label_129ed8;
        default: break;
    }

    ctx->pc = 0x129ed0u;

label_129ed0:
    // 0x129ed0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x129ED0u;
    SET_GPR_U32(ctx, 31, 0x129ED8u);
    ctx->pc = 0x129ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ED0u;
    // 0x129ed4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x129ED0u, 0x129ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ED8u;
label_129ed8:
    // 0x129ed8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x129ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x129edc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x129EDCu;
    {
        const bool branch_taken_0x129edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x129EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EDCu;
        // 0x129ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129edc) {
            ctx->pc = 0x129ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129ed0;
        }
    }
    ctx->pc = 0x129EE4u;
    // 0x129ee4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x129ee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x129eec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x129EECu;
    {
        const bool branch_taken_0x129eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EECu;
        // 0x129ef0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eec) {
            ctx->pc = 0x129F00u;
            return;
        }
    }
    ctx->pc = 0x129EF4u;
    // 0x129ef4: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x129ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x129ef8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129EF8u;
    SET_GPR_U32(ctx, 31, 0x129F00u);
    ctx->pc = 0x129EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EF8u;
    // 0x129efc: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129EF8u, 0x129F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F00u;
}
