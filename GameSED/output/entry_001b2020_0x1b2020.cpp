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

// Function: entry_001b2020
// Address: 0x1b2020 - 0x1b203c
void entry_001b2020_0x1b2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2020_0x1b2020");
#endif

    switch (ctx->pc) {
        case 0x1b2034u: goto label_1b2034;
        default: break;
    }

    ctx->pc = 0x1b2020u;

    // 0x1b2020: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2020u;
    {
        const bool branch_taken_0x1b2020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2020) {
            ctx->pc = 0x1B2024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2020u;
            // 0x1b2024: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B203Cu;
            return;
        }
    }
    ctx->pc = 0x1B2028u;
    // 0x1b2028: 0x8e24aa10  lw          $a0, -0x55F0($s1)
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    // 0x1b202c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B202Cu;
    SET_GPR_U32(ctx, 31, 0x1B2034u);
    ctx->pc = 0x1B2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B202Cu;
    // 0x1b2030: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B202Cu, 0x1B2034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2034u;
label_1b2034:
    // 0x1b2034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2034u;
    {
        const bool branch_taken_0x1b2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2034u;
        // 0x1b2038: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2034) {
            ctx->pc = 0x1B2054u;
            return;
        }
    }
    ctx->pc = 0x1B203Cu;
}
