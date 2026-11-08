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

// Function: entry_0012b3a0
// Address: 0x12b3a0 - 0x12b3d0
void entry_0012b3a0_0x12b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b3a0_0x12b3a0");
#endif

    switch (ctx->pc) {
        case 0x12b3a8u: goto label_12b3a8;
        default: break;
    }

    ctx->pc = 0x12b3a0u;

label_12b3a0:
    // 0x12b3a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12B3A0u;
    SET_GPR_U32(ctx, 31, 0x12B3A8u);
    ctx->pc = 0x12B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3A0u;
    // 0x12b3a4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12B3A0u, 0x12B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12b3ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b3a0;
        }
    }
    ctx->pc = 0x12B3B4u;
    // 0x12b3b4: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x12b3b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12b3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12b3bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B3BCu;
    {
        const bool branch_taken_0x12b3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3bc) {
            ctx->pc = 0x12B3D0u;
            return;
        }
    }
    ctx->pc = 0x12B3C4u;
    // 0x12b3c4: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x12b3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x12b3c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12B3C8u;
    SET_GPR_U32(ctx, 31, 0x12B3D0u);
    ctx->pc = 0x12B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3C8u;
    // 0x12b3cc: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12B3C8u, 0x12B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3D0u;
}
