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

// Function: entry_001bcf50
// Address: 0x1bcf50 - 0x1bcf74
void entry_001bcf50_0x1bcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf50_0x1bcf50");
#endif

    switch (ctx->pc) {
        case 0x1bcf58u: goto label_1bcf58;
        default: break;
    }

    ctx->pc = 0x1bcf50u;

    // 0x1bcf50: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCF50u;
    SET_GPR_U32(ctx, 31, 0x1BCF58u);
    ctx->pc = 0x1BCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF50u;
    // 0x1bcf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCF50u, 0x1BCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF58u;
label_1bcf58:
    // 0x1bcf58: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BCF58u;
    {
        const bool branch_taken_0x1bcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF58u;
        // 0x1bcf5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf58) {
            ctx->pc = 0x1BCF40u;
            return;
        }
    }
    ctx->pc = 0x1BCF60u;
    // 0x1bcf60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bcf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF6Cu;
        // 0x1bcf70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF74u;
}
