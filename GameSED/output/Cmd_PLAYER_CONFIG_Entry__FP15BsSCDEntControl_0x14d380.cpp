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

// Function: Cmd_PLAYER_CONFIG_Entry__FP15BsSCDEntControl
// Address: 0x14d380 - 0x14d3bc
void Cmd_PLAYER_CONFIG_Entry__FP15BsSCDEntControl_0x14d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PLAYER_CONFIG_Entry__FP15BsSCDEntControl_0x14d380");
#endif

    switch (ctx->pc) {
        case 0x14d390u: goto label_14d390;
        case 0x14d3b0u: goto label_14d3b0;
        default: break;
    }

    ctx->pc = 0x14d380u;

    // 0x14d380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d388: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14D388u;
    SET_GPR_U32(ctx, 31, 0x14D390u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14D388u, 0x14D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D390u;
label_14d390:
    // 0x14d390: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x14d394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d39c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x14d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x14d3a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D3A0u;
    {
        const bool branch_taken_0x14d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3A0u;
        // 0x14d3a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3a0) {
            ctx->pc = 0x14D3B4u;
            goto label_14d3b4;
        }
    }
    ctx->pc = 0x14D3A8u;
    // 0x14d3a8: 0xc055a18  jal         func_156860
    ctx->pc = 0x14D3A8u;
    SET_GPR_U32(ctx, 31, 0x14D3B0u);
    ctx->pc = 0x14D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D3A8u;
    // 0x14d3ac: 0x8c4401ac  lw          $a0, 0x1AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156860u, 0x14D3A8u, 0x14D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3B0u;
label_14d3b0:
    // 0x14d3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d3b4:
    // 0x14d3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3B4u;
        // 0x14d3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D3BCu;
}
