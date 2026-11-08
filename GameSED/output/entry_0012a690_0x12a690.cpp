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

// Function: entry_0012a690
// Address: 0x12a690 - 0x12a6c0
void entry_0012a690_0x12a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a690_0x12a690");
#endif

    switch (ctx->pc) {
        case 0x12a698u: goto label_12a698;
        default: break;
    }

    ctx->pc = 0x12a690u;

label_12a690:
    // 0x12a690: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x12A690u;
    SET_GPR_U32(ctx, 31, 0x12A698u);
    ctx->pc = 0x12A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A690u;
    // 0x12a694: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x12A690u, 0x12A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A698u;
label_12a698:
    // 0x12a698: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x12a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12a69c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12A69Cu;
    {
        const bool branch_taken_0x12a69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A69Cu;
        // 0x12a6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a69c) {
            ctx->pc = 0x12A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a690;
        }
    }
    ctx->pc = 0x12A6A4u;
    // 0x12a6a4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x12a6a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a6ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A6ACu;
    {
        const bool branch_taken_0x12a6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6ACu;
        // 0x12a6b0: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6ac) {
            ctx->pc = 0x12A6C0u;
            return;
        }
    }
    ctx->pc = 0x12A6B4u;
    // 0x12a6b4: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x12a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12a6b8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12A6B8u;
    SET_GPR_U32(ctx, 31, 0x12A6C0u);
    ctx->pc = 0x12A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6B8u;
    // 0x12a6bc: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12A6B8u, 0x12A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6C0u;
}
