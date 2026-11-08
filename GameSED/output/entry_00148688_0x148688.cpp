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

// Function: entry_00148688
// Address: 0x148688 - 0x1486b8
void entry_00148688_0x148688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148688_0x148688");
#endif

    switch (ctx->pc) {
        case 0x148690u: goto label_148690;
        default: break;
    }

    ctx->pc = 0x148688u;

label_148688:
    // 0x148688: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x148688u;
    SET_GPR_U32(ctx, 31, 0x148690u);
    ctx->pc = 0x14868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148688u;
    // 0x14868c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x148688u, 0x148690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148690u;
label_148690:
    // 0x148690: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x148694: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x148694u;
    {
        const bool branch_taken_0x148694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148694u;
        // 0x148698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148694) {
            ctx->pc = 0x148688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148688;
        }
    }
    ctx->pc = 0x14869Cu;
    // 0x14869c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1486a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1486a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1486a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1486A4u;
    {
        const bool branch_taken_0x1486a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1486A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486A4u;
        // 0x1486a8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486a4) {
            ctx->pc = 0x1486B8u;
            return;
        }
    }
    ctx->pc = 0x1486ACu;
    // 0x1486ac: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1486b0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1486B0u;
    SET_GPR_U32(ctx, 31, 0x1486B8u);
    ctx->pc = 0x1486B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486B0u;
    // 0x1486b4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1486B0u, 0x1486B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486B8u;
}
