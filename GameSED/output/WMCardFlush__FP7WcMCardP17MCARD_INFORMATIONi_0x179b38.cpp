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

// Function: WMCardFlush__FP7WcMCardP17MCARD_INFORMATIONi
// Address: 0x179b38 - 0x179b84
void WMCardFlush__FP7WcMCardP17MCARD_INFORMATIONi_0x179b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardFlush__FP7WcMCardP17MCARD_INFORMATIONi_0x179b38");
#endif

    switch (ctx->pc) {
        case 0x179b50u: goto label_179b50;
        case 0x179b58u: goto label_179b58;
        case 0x179b6cu: goto label_179b6c;
        default: break;
    }

    ctx->pc = 0x179b38u;

    // 0x179b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179b40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179b44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x179b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179b50:
    // 0x179b50: 0xc07180e  jal         func_1C6038
    ctx->pc = 0x179B50u;
    SET_GPR_U32(ctx, 31, 0x179B58u);
    ctx->pc = 0x179B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B50u;
    // 0x179b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6038u, 0x179B50u, 0x179B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B58u;
label_179b58:
    // 0x179b58: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179B58u;
    {
        const bool branch_taken_0x179b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B58u;
        // 0x179b5c: 0x26264030  addiu       $a2, $s1, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b58) {
            ctx->pc = 0x179B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b50;
        }
    }
    ctx->pc = 0x179B60u;
    // 0x179b60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b64: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179B64u;
    SET_GPR_U32(ctx, 31, 0x179B6Cu);
    ctx->pc = 0x179B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B64u;
    // 0x179b68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179B64u, 0x179B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B6Cu;
label_179b6c:
    // 0x179b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x179B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B7Cu;
        // 0x179b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B84u;
}
