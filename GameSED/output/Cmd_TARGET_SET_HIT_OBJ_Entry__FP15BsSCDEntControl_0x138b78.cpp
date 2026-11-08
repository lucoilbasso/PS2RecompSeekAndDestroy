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

// Function: Cmd_TARGET_SET_HIT_OBJ_Entry__FP15BsSCDEntControl
// Address: 0x138b78 - 0x138bd8
void Cmd_TARGET_SET_HIT_OBJ_Entry__FP15BsSCDEntControl_0x138b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TARGET_SET_HIT_OBJ_Entry__FP15BsSCDEntControl_0x138b78");
#endif

    switch (ctx->pc) {
        case 0x138bacu: goto label_138bac;
        case 0x138bc8u: goto label_138bc8;
        default: break;
    }

    ctx->pc = 0x138b78u;

    // 0x138b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138b7c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138b84: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x138b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x138b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138b8c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x138b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138b90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x138b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x138b94: 0x8cb00040  lw          $s0, 0x40($a1)
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x138b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138b9c: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B9Cu;
    {
        const bool branch_taken_0x138b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x138BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B9Cu;
        // 0x138ba0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b9c) {
            ctx->pc = 0x138BB0u;
            goto label_138bb0;
        }
    }
    ctx->pc = 0x138BA4u;
    // 0x138ba4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x138BA4u;
    SET_GPR_U32(ctx, 31, 0x138BACu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138BA4u, 0x138BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BACu;
label_138bac:
    // 0x138bac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138bb0:
    // 0x138bb0: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x138bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x138bb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x138bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x138BC0u;
    SET_GPR_U32(ctx, 31, 0x138BC8u);
    ctx->pc = 0x138BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BC0u;
    // 0x138bc4: 0x8c450090  lw          $a1, 0x90($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x138BC0u, 0x138BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BC8u;
label_138bc8:
    // 0x138bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138bcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x138bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x138BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BD0u;
        // 0x138bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138BD8u;
}
