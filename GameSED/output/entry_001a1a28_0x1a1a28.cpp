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

// Function: entry_001a1a28
// Address: 0x1a1a28 - 0x1a1a4c
void entry_001a1a28_0x1a1a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a28_0x1a1a28");
#endif

    switch (ctx->pc) {
        case 0x1a1a30u: goto label_1a1a30;
        default: break;
    }

    ctx->pc = 0x1a1a28u;

    // 0x1a1a28: 0xc06bcac  jal         func_1AF2B0
    ctx->pc = 0x1A1A28u;
    SET_GPR_U32(ctx, 31, 0x1A1A30u);
    ctx->pc = 0x1A1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A28u;
    // 0x1a1a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2B0u, 0x1A1A28u, 0x1A1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A30u;
label_1a1a30:
    // 0x1a1a30: 0x5451000d  bnel        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1A30u;
    {
        const bool branch_taken_0x1a1a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a1a30) {
            ctx->pc = 0x1A1A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1A30u;
            // 0x1a1a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A68u;
            return;
        }
    }
    ctx->pc = 0x1A1A38u;
    // 0x1a1a38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1a3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A3Cu;
    {
        const bool branch_taken_0x1a1a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a3c) {
            ctx->pc = 0x1A1A4Cu;
            return;
        }
    }
    ctx->pc = 0x1A1A44u;
    // 0x1a1a44: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A44u;
    SET_GPR_U32(ctx, 31, 0x1A1A4Cu);
    ctx->pc = 0x1A1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A44u;
    // 0x1a1a48: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A44u, 0x1A1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A4Cu;
}
