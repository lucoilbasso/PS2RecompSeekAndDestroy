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

// Function: Cmd_LIMIT_ANGLE_Entry__FP15BsSCDEntControl
// Address: 0x112ba0 - 0x112be8
void Cmd_LIMIT_ANGLE_Entry__FP15BsSCDEntControl_0x112ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LIMIT_ANGLE_Entry__FP15BsSCDEntControl_0x112ba0");
#endif

    switch (ctx->pc) {
        case 0x112bb8u: goto label_112bb8;
        default: break;
    }

    ctx->pc = 0x112ba0u;

    // 0x112ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112ba8: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x112ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x112bac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x112bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bb0: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x112BB0u;
    SET_GPR_U32(ctx, 31, 0x112BB8u);
    ctx->pc = 0x112BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BB0u;
    // 0x112bb4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x112BB0u, 0x112BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112BB8u;
label_112bb8:
    // 0x112bb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112bbc: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x112bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112bc0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x112bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x112bc4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x112bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112bc8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x112bc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112bcc: 0x70032048  psubw       $a0, $zero, $v1
    ctx->pc = 0x112bccu;
    SET_GPR_VEC(ctx, 4, PS2_PSUBW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x112bd0: 0x704310e8  pminw       $v0, $v0, $v1
    ctx->pc = 0x112bd0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x112bd4: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x112bd4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x112bd8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x112bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x112bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112be0: 0x3e00008  jr          $ra
    ctx->pc = 0x112BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE0u;
        // 0x112be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112BE8u;
}
