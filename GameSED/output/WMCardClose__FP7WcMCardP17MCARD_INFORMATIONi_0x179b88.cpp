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

// Function: WMCardClose__FP7WcMCardP17MCARD_INFORMATIONi
// Address: 0x179b88 - 0x179c00
void WMCardClose__FP7WcMCardP17MCARD_INFORMATIONi_0x179b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardClose__FP7WcMCardP17MCARD_INFORMATIONi_0x179b88");
#endif

    switch (ctx->pc) {
        case 0x179ba8u: goto label_179ba8;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bc8u: goto label_179bc8;
        default: break;
    }

    ctx->pc = 0x179b88u;

    // 0x179b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179b8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179b90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179b94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x179b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179b9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ba0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179ba4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179ba8:
    // 0x179ba8: 0xc0714be  jal         func_1C52F8
    ctx->pc = 0x179BA8u;
    SET_GPR_U32(ctx, 31, 0x179BB0u);
    ctx->pc = 0x179BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BA8u;
    // 0x179bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C52F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C52F8u, 0x179BA8u, 0x179BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BB0u;
label_179bb0:
    // 0x179bb0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179BB0u;
    {
        const bool branch_taken_0x179bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BB0u;
        // 0x179bb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bb0) {
            ctx->pc = 0x179BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179ba8;
        }
    }
    ctx->pc = 0x179BB8u;
    // 0x179bb8: 0x26304030  addiu       $s0, $s1, 0x4030
    ctx->pc = 0x179bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
    // 0x179bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bc0: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179BC0u;
    SET_GPR_U32(ctx, 31, 0x179BC8u);
    ctx->pc = 0x179BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BC0u;
    // 0x179bc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179BC0u, 0x179BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BC8u;
label_179bc8:
    // 0x179bc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x179bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179bcc: 0x4630006  bgezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x179BCCu;
    {
        const bool branch_taken_0x179bcc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x179bcc) {
            ctx->pc = 0x179BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179BCCu;
            // 0x179bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179BE8u;
            goto label_179be8;
        }
    }
    ctx->pc = 0x179BD4u;
    // 0x179bd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bdc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x179bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x179be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179BE0u;
    {
        const bool branch_taken_0x179be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BE0u;
        // 0x179be4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179be0) {
            ctx->pc = 0x179BECu;
            goto label_179bec;
        }
    }
    ctx->pc = 0x179BE8u;
label_179be8:
    // 0x179be8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179bec:
    // 0x179bec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179bf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179bf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x179BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BF8u;
        // 0x179bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C00u;
}
