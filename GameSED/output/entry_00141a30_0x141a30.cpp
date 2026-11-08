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

// Function: entry_00141a30
// Address: 0x141a30 - 0x141a4c
void entry_00141a30_0x141a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a30_0x141a30");
#endif

    switch (ctx->pc) {
        case 0x141a3cu: goto label_141a3c;
        default: break;
    }

    ctx->pc = 0x141a30u;

label_141a30:
    // 0x141a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a34: 0xc050680  jal         func_141A00
    ctx->pc = 0x141A34u;
    SET_GPR_U32(ctx, 31, 0x141A3Cu);
    ctx->pc = 0x141A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A34u;
    // 0x141a38: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141A00u, 0x141A34u, 0x141A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A3Cu;
label_141a3c:
    // 0x141a3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141A3Cu;
    {
        const bool branch_taken_0x141a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141a3c) {
            ctx->pc = 0x141A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A3Cu;
            // 0x141a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A54u;
            return;
        }
    }
    ctx->pc = 0x141A44u;
    // 0x141a44: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141A44u;
    {
        const bool branch_taken_0x141a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x141A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A44u;
        // 0x141a48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a44) {
            ctx->pc = 0x141A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141a30;
        }
    }
    ctx->pc = 0x141A4Cu;
}
