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

// Function: entry_0016a2e0
// Address: 0x16a2e0 - 0x16a320
void entry_0016a2e0_0x16a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a2e0_0x16a2e0");
#endif

    switch (ctx->pc) {
        case 0x16a2f0u: goto label_16a2f0;
        default: break;
    }

    ctx->pc = 0x16a2e0u;

    // 0x16a2e0: 0x1465002d  bne         $v1, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x16A2E0u;
    {
        const bool branch_taken_0x16a2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x16a2e0) {
            ctx->pc = 0x16A398u;
            return;
        }
    }
    ctx->pc = 0x16A2E8u;
    // 0x16a2e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16A2E8u;
    SET_GPR_U32(ctx, 31, 0x16A2F0u);
    ctx->pc = 0x16A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2E8u;
    // 0x16a2ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16A2E8u, 0x16A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2F0u;
label_16a2f0:
    // 0x16a2f0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16a2f4: 0x8ec30040  lw          $v1, 0x40($s6)
    ctx->pc = 0x16a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x16a2f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16a300: 0x24a57320  addiu       $a1, $a1, 0x7320
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29472));
    // 0x16a304: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a308: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x16a308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16a30c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A30Cu;
    {
        const bool branch_taken_0x16a30c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A30Cu;
        // 0x16a310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a30c) {
            ctx->pc = 0x16A320u;
            return;
        }
    }
    ctx->pc = 0x16A314u;
    // 0x16a314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16a318: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A318u;
    {
        const bool branch_taken_0x16a318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a318) {
            ctx->pc = 0x16A31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A318u;
            // 0x16a31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A32Cu;
            return;
        }
    }
    ctx->pc = 0x16A320u;
}
