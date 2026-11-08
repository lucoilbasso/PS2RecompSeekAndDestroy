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

// Function: entry_00123008
// Address: 0x123008 - 0x123034
void entry_00123008_0x123008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123008_0x123008");
#endif

    switch (ctx->pc) {
        case 0x123010u: goto label_123010;
        default: break;
    }

    ctx->pc = 0x123008u;

label_123008:
    // 0x123008: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x123008u;
    SET_GPR_U32(ctx, 31, 0x123010u);
    ctx->pc = 0x12300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123008u;
    // 0x12300c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x123008u, 0x123010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123010u;
label_123010:
    // 0x123010: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x123014: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x123014u;
    {
        const bool branch_taken_0x123014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x123018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123014u;
        // 0x123018: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123014) {
            ctx->pc = 0x123008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123008;
        }
    }
    ctx->pc = 0x12301Cu;
    // 0x12301c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x12301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x123020: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x123020u;
    {
        const bool branch_taken_0x123020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123020u;
        // 0x123024: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123020) {
            ctx->pc = 0x123034u;
            return;
        }
    }
    ctx->pc = 0x123028u;
    // 0x123028: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x123028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x12302c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12302Cu;
    SET_GPR_U32(ctx, 31, 0x123034u);
    ctx->pc = 0x123030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12302Cu;
    // 0x123030: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12302Cu, 0x123034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123034u;
}
