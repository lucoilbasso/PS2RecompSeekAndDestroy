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

// Function: entry_00126b98
// Address: 0x126b98 - 0x126bc4
void entry_00126b98_0x126b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126b98_0x126b98");
#endif

    switch (ctx->pc) {
        case 0x126ba0u: goto label_126ba0;
        default: break;
    }

    ctx->pc = 0x126b98u;

label_126b98:
    // 0x126b98: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x126B98u;
    SET_GPR_U32(ctx, 31, 0x126BA0u);
    ctx->pc = 0x126B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B98u;
    // 0x126b9c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x126B98u, 0x126BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BA0u;
label_126ba0:
    // 0x126ba0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x126ba4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x126BA4u;
    {
        const bool branch_taken_0x126ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x126BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BA4u;
        // 0x126ba8: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba4) {
            ctx->pc = 0x126B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b98;
        }
    }
    ctx->pc = 0x126BACu;
    // 0x126bac: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x126bb0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126BB0u;
    {
        const bool branch_taken_0x126bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BB0u;
        // 0x126bb4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bb0) {
            ctx->pc = 0x126BC4u;
            return;
        }
    }
    ctx->pc = 0x126BB8u;
    // 0x126bb8: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x126bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x126bbc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x126BBCu;
    SET_GPR_U32(ctx, 31, 0x126BC4u);
    ctx->pc = 0x126BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BBCu;
    // 0x126bc0: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x126BBCu, 0x126BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BC4u;
}
