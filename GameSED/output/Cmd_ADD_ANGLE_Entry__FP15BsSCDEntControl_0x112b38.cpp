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

// Function: Cmd_ADD_ANGLE_Entry__FP15BsSCDEntControl
// Address: 0x112b38 - 0x112b78
void Cmd_ADD_ANGLE_Entry__FP15BsSCDEntControl_0x112b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ADD_ANGLE_Entry__FP15BsSCDEntControl_0x112b38");
#endif

    switch (ctx->pc) {
        case 0x112b50u: goto label_112b50;
        default: break;
    }

    ctx->pc = 0x112b38u;

    // 0x112b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112b40: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x112b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x112b44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x112b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b48: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x112B48u;
    SET_GPR_U32(ctx, 31, 0x112B50u);
    ctx->pc = 0x112B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B48u;
    // 0x112b4c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x112B48u, 0x112B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B50u;
label_112b50:
    // 0x112b50: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112b54: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112b58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112b5c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x112b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112b60: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x112b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b64: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x112b64u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x112b68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x112b68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x112b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x112b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b70: 0x3e00008  jr          $ra
    ctx->pc = 0x112B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B70u;
        // 0x112b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112B78u;
}
