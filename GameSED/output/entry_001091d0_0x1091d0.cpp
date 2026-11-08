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

// Function: entry_001091d0
// Address: 0x1091d0 - 0x1091f8
void entry_001091d0_0x1091d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091d0_0x1091d0");
#endif

    switch (ctx->pc) {
        case 0x1091e0u: goto label_1091e0;
        default: break;
    }

    ctx->pc = 0x1091d0u;

label_1091d0:
    // 0x1091d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1091d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1091d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d8: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1091D8u;
    SET_GPR_U32(ctx, 31, 0x1091E0u);
    ctx->pc = 0x1091DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091D8u;
    // 0x1091dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1091D8u, 0x1091E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091E0u;
label_1091e0:
    // 0x1091e0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1091e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1091e4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1091E4u;
    {
        const bool branch_taken_0x1091e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1091e4) {
            ctx->pc = 0x1091E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1091E4u;
            // 0x1091e8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1091D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091d0;
        }
    }
    ctx->pc = 0x1091ECu;
    // 0x1091ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1091ECu;
    {
        const bool branch_taken_0x1091ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091ECu;
        // 0x1091f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091ec) {
            ctx->pc = 0x1092C8u;
            return;
        }
    }
    ctx->pc = 0x1091F4u;
    // 0x1091f4: 0x0  nop
    ctx->pc = 0x1091f4u;
    // NOP
    ctx->pc = 0x1091f8u;
}
