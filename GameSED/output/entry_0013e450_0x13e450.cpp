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

// Function: entry_0013e450
// Address: 0x13e450 - 0x13e47c
void entry_0013e450_0x13e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e450_0x13e450");
#endif

    switch (ctx->pc) {
        case 0x13e458u: goto label_13e458;
        default: break;
    }

    ctx->pc = 0x13e450u;

label_13e450:
    // 0x13e450: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13E450u;
    SET_GPR_U32(ctx, 31, 0x13E458u);
    ctx->pc = 0x13E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E450u;
    // 0x13e454: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13E450u, 0x13E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13e45c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13E45Cu;
    {
        const bool branch_taken_0x13e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E45Cu;
        // 0x13e460: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e45c) {
            ctx->pc = 0x13E450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e450;
        }
    }
    ctx->pc = 0x13E464u;
    // 0x13e464: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E468u;
    {
        const bool branch_taken_0x13e468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e468) {
            ctx->pc = 0x13E47Cu;
            return;
        }
    }
    ctx->pc = 0x13E470u;
    // 0x13e470: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13e474: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13E474u;
    SET_GPR_U32(ctx, 31, 0x13E47Cu);
    ctx->pc = 0x13E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E474u;
    // 0x13e478: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13E474u, 0x13E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E47Cu;
}
