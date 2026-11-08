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

// Function: Cmd_REMOTE_EXIT_Entry__FP15BsSCDEntControl
// Address: 0x106b28 - 0x106b6c
void Cmd_REMOTE_EXIT_Entry__FP15BsSCDEntControl_0x106b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_REMOTE_EXIT_Entry__FP15BsSCDEntControl_0x106b28");
#endif

    switch (ctx->pc) {
        case 0x106b4cu: goto label_106b4c;
        default: break;
    }

    ctx->pc = 0x106b28u;

    // 0x106b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106b2c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106b34: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x106b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x106b38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b3c: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106B3Cu;
    {
        const bool branch_taken_0x106b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x106B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B3Cu;
        // 0x106b40: 0x8f869194  lw          $a2, -0x6E6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b3c) {
            ctx->pc = 0x106B5Cu;
            goto label_106b5c;
        }
    }
    ctx->pc = 0x106B44u;
    // 0x106b44: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106B44u;
    SET_GPR_U32(ctx, 31, 0x106B4Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106B44u, 0x106B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B4Cu;
label_106b4c:
    // 0x106b4c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x106b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x106b50: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x106b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x106b54: 0x24c60610  addiu       $a2, $a2, 0x610
    ctx->pc = 0x106b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1552));
    // 0x106b58: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x106b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_106b5c:
    // 0x106b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106b60: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x106b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x106b64: 0x3e00008  jr          $ra
    ctx->pc = 0x106B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B64u;
        // 0x106b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106B6Cu;
}
