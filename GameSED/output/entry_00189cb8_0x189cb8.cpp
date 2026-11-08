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

// Function: entry_00189cb8
// Address: 0x189cb8 - 0x189ce8
void entry_00189cb8_0x189cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189cb8_0x189cb8");
#endif

    switch (ctx->pc) {
        case 0x189cc0u: goto label_189cc0;
        default: break;
    }

    ctx->pc = 0x189cb8u;

label_189cb8:
    // 0x189cb8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x189CB8u;
    SET_GPR_U32(ctx, 31, 0x189CC0u);
    ctx->pc = 0x189CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CB8u;
    // 0x189cbc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x189CB8u, 0x189CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CC0u;
label_189cc0:
    // 0x189cc0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x189cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x189cc4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x189CC4u;
    {
        const bool branch_taken_0x189cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC4u;
        // 0x189cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cc4) {
            ctx->pc = 0x189CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189cb8;
        }
    }
    ctx->pc = 0x189CCCu;
    // 0x189ccc: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x189cd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189cd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189CD4u;
    {
        const bool branch_taken_0x189cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CD4u;
        // 0x189cd8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cd4) {
            ctx->pc = 0x189CE8u;
            return;
        }
    }
    ctx->pc = 0x189CDCu;
    // 0x189cdc: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x189ce0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189CE0u;
    SET_GPR_U32(ctx, 31, 0x189CE8u);
    ctx->pc = 0x189CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CE0u;
    // 0x189ce4: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189CE0u, 0x189CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CE8u;
}
