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

// Function: entry_0012dd80
// Address: 0x12dd80 - 0x12ddac
void entry_0012dd80_0x12dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dd80_0x12dd80");
#endif

    switch (ctx->pc) {
        case 0x12dd88u: goto label_12dd88;
        default: break;
    }

    ctx->pc = 0x12dd80u;

label_12dd80:
    // 0x12dd80: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12DD80u;
    SET_GPR_U32(ctx, 31, 0x12DD88u);
    ctx->pc = 0x12DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DD80u;
    // 0x12dd84: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12DD80u, 0x12DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DD88u;
label_12dd88:
    // 0x12dd88: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12dd8c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD8Cu;
        // 0x12dd90: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd80;
        }
    }
    ctx->pc = 0x12DD94u;
    // 0x12dd94: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x12dd98: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DD98u;
    {
        const bool branch_taken_0x12dd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD98u;
        // 0x12dd9c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd98) {
            ctx->pc = 0x12DDACu;
            return;
        }
    }
    ctx->pc = 0x12DDA0u;
    // 0x12dda0: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x12dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12dda4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12DDA4u;
    SET_GPR_U32(ctx, 31, 0x12DDACu);
    ctx->pc = 0x12DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDA4u;
    // 0x12dda8: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12DDA4u, 0x12DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDACu;
}
