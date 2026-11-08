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

// Function: entry_0019d0c8
// Address: 0x19d0c8 - 0x19d0e8
void entry_0019d0c8_0x19d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d0c8_0x19d0c8");
#endif

    switch (ctx->pc) {
        case 0x19d0d4u: goto label_19d0d4;
        default: break;
    }

    ctx->pc = 0x19d0c8u;

label_19d0c8:
    // 0x19d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0cc: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x19D0CCu;
    SET_GPR_U32(ctx, 31, 0x19D0D4u);
    ctx->pc = 0x19D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0CCu;
    // 0x19d0d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x19D0CCu, 0x19D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0D4u;
label_19d0d4:
    // 0x19d0d4: 0x1620fffc  bnez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19D0D4u;
    {
        const bool branch_taken_0x19d0d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0D4u;
        // 0x19d0d8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0d4) {
            ctx->pc = 0x19D0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d0c8;
        }
    }
    ctx->pc = 0x19D0DCu;
    // 0x19d0dc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d0e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d0e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x19d0e8u;
}
