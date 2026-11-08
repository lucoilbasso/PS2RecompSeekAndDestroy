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

// Function: caseD_b
// Address: 0x105698 - 0x1056b8
void caseD_b_0x105698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x105698");
#endif

    switch (ctx->pc) {
        case 0x1056a0u: goto label_1056a0;
        case 0x1056b0u: goto label_1056b0;
        default: break;
    }

    ctx->pc = 0x105698u;

    // 0x105698: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105698u;
    SET_GPR_U32(ctx, 31, 0x1056A0u);
    ctx->pc = 0x10569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105698u;
    // 0x10569c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105698u, 0x1056A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056A0u;
label_1056a0:
    // 0x1056a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1056A0u;
    {
        const bool branch_taken_0x1056a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1056a0) {
            ctx->pc = 0x1056A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1056A0u;
            // 0x1056a4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1056B8u;
            return;
        }
    }
    ctx->pc = 0x1056A8u;
    // 0x1056a8: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1056A8u;
    SET_GPR_U32(ctx, 31, 0x1056B0u);
    ctx->pc = 0x1056ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056A8u;
    // 0x1056ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1056A8u, 0x1056B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056B0u;
label_1056b0:
    // 0x1056b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1056B0u;
    {
        const bool branch_taken_0x1056b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056B0u;
        // 0x1056b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056b0) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1056B8u;
}
