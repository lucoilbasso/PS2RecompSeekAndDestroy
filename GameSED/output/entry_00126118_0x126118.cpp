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

// Function: entry_00126118
// Address: 0x126118 - 0x126144
void entry_00126118_0x126118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126118_0x126118");
#endif

    switch (ctx->pc) {
        case 0x126120u: goto label_126120;
        default: break;
    }

    ctx->pc = 0x126118u;

label_126118:
    // 0x126118: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x126118u;
    SET_GPR_U32(ctx, 31, 0x126120u);
    ctx->pc = 0x12611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126118u;
    // 0x12611c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x126118u, 0x126120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126120u;
label_126120:
    // 0x126120: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x126124: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x126124u;
    {
        const bool branch_taken_0x126124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x126128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126124u;
        // 0x126128: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126124) {
            ctx->pc = 0x126118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126118;
        }
    }
    ctx->pc = 0x12612Cu;
    // 0x12612c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x126130: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126130u;
    {
        const bool branch_taken_0x126130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126130u;
        // 0x126134: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126130) {
            ctx->pc = 0x126144u;
            return;
        }
    }
    ctx->pc = 0x126138u;
    // 0x126138: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x126138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12613c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12613Cu;
    SET_GPR_U32(ctx, 31, 0x126144u);
    ctx->pc = 0x126140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12613Cu;
    // 0x126140: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12613Cu, 0x126144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126144u;
}
