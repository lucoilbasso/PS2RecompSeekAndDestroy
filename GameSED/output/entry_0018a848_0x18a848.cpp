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

// Function: entry_0018a848
// Address: 0x18a848 - 0x18a870
void entry_0018a848_0x18a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a848_0x18a848");
#endif

    switch (ctx->pc) {
        case 0x18a858u: goto label_18a858;
        case 0x18a864u: goto label_18a864;
        default: break;
    }

    ctx->pc = 0x18a848u;

    // 0x18a848: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A848u;
    {
        const bool branch_taken_0x18a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a848) {
            ctx->pc = 0x18A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A848u;
            // 0x18a84c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A870u;
            return;
        }
    }
    ctx->pc = 0x18A850u;
    // 0x18a850: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x18A850u;
    SET_GPR_U32(ctx, 31, 0x18A858u);
    ctx->pc = 0x18A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A850u;
    // 0x18a854: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A850u, 0x18A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A858u;
label_18a858:
    // 0x18a858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a85c: 0xc062d1e  jal         func_18B478
    ctx->pc = 0x18A85Cu;
    SET_GPR_U32(ctx, 31, 0x18A864u);
    ctx->pc = 0x18A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A85Cu;
    // 0x18a860: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B478u, 0x18A85Cu, 0x18A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A864u;
label_18a864:
    // 0x18a864: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18A864u;
    {
        const bool branch_taken_0x18a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A864u;
        // 0x18a868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a864) {
            ctx->pc = 0x18A894u;
            return;
        }
    }
    ctx->pc = 0x18A86Cu;
    // 0x18a86c: 0x0  nop
    ctx->pc = 0x18a86cu;
    // NOP
    ctx->pc = 0x18a870u;
}
