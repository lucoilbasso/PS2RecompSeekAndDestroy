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

// Function: entry_001afed0
// Address: 0x1afed0 - 0x1aff00
void entry_001afed0_0x1afed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afed0_0x1afed0");
#endif

    switch (ctx->pc) {
        case 0x1afee4u: goto label_1afee4;
        default: break;
    }

    ctx->pc = 0x1afed0u;

    // 0x1afed0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1afed4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1afed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1afed8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1afedc: 0xc06bf7c  jal         func_1AFDF0
    ctx->pc = 0x1AFEDCu;
    SET_GPR_U32(ctx, 31, 0x1AFEE4u);
    ctx->pc = 0x1AFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEDCu;
    // 0x1afee0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFDF0u, 0x1AFEDCu, 0x1AFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE4u;
label_1afee4:
    // 0x1afee4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFEE4u;
    {
        const bool branch_taken_0x1afee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEE4u;
        // 0x1afee8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afee4) {
            ctx->pc = 0x1AFF00u;
            return;
        }
    }
    ctx->pc = 0x1AFEECu;
    // 0x1afeec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afef8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1AFEF8u;
    ctx->pc = 0x1AFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEF8u;
    // 0x1afefc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AFF00u;
}
