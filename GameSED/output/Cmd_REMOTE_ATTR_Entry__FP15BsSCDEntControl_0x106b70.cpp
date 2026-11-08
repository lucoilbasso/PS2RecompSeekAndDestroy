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

// Function: Cmd_REMOTE_ATTR_Entry__FP15BsSCDEntControl
// Address: 0x106b70 - 0x106bac
void Cmd_REMOTE_ATTR_Entry__FP15BsSCDEntControl_0x106b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_REMOTE_ATTR_Entry__FP15BsSCDEntControl_0x106b70");
#endif

    switch (ctx->pc) {
        case 0x106b98u: goto label_106b98;
        default: break;
    }

    ctx->pc = 0x106b70u;

    // 0x106b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106b74: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106b7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x106b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x106b80: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x106b84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106b88: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106B88u;
    {
        const bool branch_taken_0x106b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x106B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106B88u;
        // 0x106b8c: 0x8f909194  lw          $s0, -0x6E6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b88) {
            ctx->pc = 0x106B9Cu;
            goto label_106b9c;
        }
    }
    ctx->pc = 0x106B90u;
    // 0x106b90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x106B90u;
    SET_GPR_U32(ctx, 31, 0x106B98u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x106B90u, 0x106B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106B98u;
label_106b98:
    // 0x106b98: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x106b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_106b9c:
    // 0x106b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106ba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x106ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x106BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BA4u;
        // 0x106ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BACu;
}
