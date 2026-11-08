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

// Function: entry_0014d710
// Address: 0x14d710 - 0x14d73c
void entry_0014d710_0x14d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d710_0x14d710");
#endif

    switch (ctx->pc) {
        case 0x14d720u: goto label_14d720;
        case 0x14d728u: goto label_14d728;
        default: break;
    }

    ctx->pc = 0x14d710u;

    // 0x14d710: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x14d710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x14d714: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x14d714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x14d718: 0xc056bf0  jal         func_15AFC0
    ctx->pc = 0x14D718u;
    SET_GPR_U32(ctx, 31, 0x14D720u);
    ctx->pc = 0x14D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D718u;
    // 0x14d71c: 0x8e4401b0  lw          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AFC0u, 0x14D718u, 0x14D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D720u;
label_14d720:
    // 0x14d720: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14D720u;
    SET_GPR_U32(ctx, 31, 0x14D728u);
    ctx->pc = 0x14D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D720u;
    // 0x14d724: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14D720u, 0x14D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D73Cu;
            return;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0x8e420180  lw          $v0, 0x180($s2)
    ctx->pc = 0x14d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x14d734: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x14d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x14d738: 0xae420180  sw          $v0, 0x180($s2)
    ctx->pc = 0x14d738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
    ctx->pc = 0x14d73cu;
}
