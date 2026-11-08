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

// Function: entry_00129400
// Address: 0x129400 - 0x12942c
void entry_00129400_0x129400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129400_0x129400");
#endif

    switch (ctx->pc) {
        case 0x129408u: goto label_129408;
        default: break;
    }

    ctx->pc = 0x129400u;

label_129400:
    // 0x129400: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x129400u;
    SET_GPR_U32(ctx, 31, 0x129408u);
    ctx->pc = 0x129404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129400u;
    // 0x129404: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x129400u, 0x129408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129408u;
label_129408:
    // 0x129408: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x129408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12940c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12940Cu;
    {
        const bool branch_taken_0x12940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x129410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12940Cu;
        // 0x129410: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12940c) {
            ctx->pc = 0x129400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129400;
        }
    }
    ctx->pc = 0x129414u;
    // 0x129414: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x129414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x129418: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x129418u;
    {
        const bool branch_taken_0x129418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129418u;
        // 0x12941c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129418) {
            ctx->pc = 0x12942Cu;
            return;
        }
    }
    ctx->pc = 0x129420u;
    // 0x129420: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x129420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x129424: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x129424u;
    SET_GPR_U32(ctx, 31, 0x12942Cu);
    ctx->pc = 0x129428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129424u;
    // 0x129428: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x129424u, 0x12942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12942Cu;
}
