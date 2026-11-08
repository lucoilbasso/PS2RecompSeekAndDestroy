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

// Function: entry_001303a4
// Address: 0x1303a4 - 0x1303d0
void entry_001303a4_0x1303a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001303a4_0x1303a4");
#endif

    switch (ctx->pc) {
        case 0x1303c8u: goto label_1303c8;
        default: break;
    }

    ctx->pc = 0x1303a4u;

    // 0x1303a4: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1303A4u;
    {
        const bool branch_taken_0x1303a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303a4) {
            ctx->pc = 0x1303A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303A4u;
            // 0x1303a8: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1303D0u;
            return;
        }
    }
    ctx->pc = 0x1303ACu;
    // 0x1303ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1303b0: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1303b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x1303b4: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1303b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1303b8: 0x58800013  blezl       $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1303B8u;
    {
        const bool branch_taken_0x1303b8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1303b8) {
            ctx->pc = 0x1303BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1303B8u;
            // 0x1303bc: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130408u;
            return;
        }
    }
    ctx->pc = 0x1303C0u;
    // 0x1303c0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1303C0u;
    SET_GPR_U32(ctx, 31, 0x1303C8u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1303C0u, 0x1303C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303C8u;
label_1303c8:
    // 0x1303c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1303C8u;
    {
        const bool branch_taken_0x1303c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303C8u;
        // 0x1303cc: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303c8) {
            ctx->pc = 0x1303FCu;
            return;
        }
    }
    ctx->pc = 0x1303D0u;
}
