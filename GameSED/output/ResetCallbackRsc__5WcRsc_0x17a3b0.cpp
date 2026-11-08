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

// Function: ResetCallbackRsc__5WcRsc
// Address: 0x17a3b0 - 0x17a3f8
void ResetCallbackRsc__5WcRsc_0x17a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetCallbackRsc__5WcRsc_0x17a3b0");
#endif

    switch (ctx->pc) {
        case 0x17a3ecu: goto label_17a3ec;
        default: break;
    }

    ctx->pc = 0x17a3b0u;

    // 0x17a3b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17a3b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x17a3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a3bc: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x17a3c0: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x17a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x17a3c4: 0x240400a9  addiu       $a0, $zero, 0xA9
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x17a3c8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17a3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a3d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17a3d0u;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 4));
    // 0x17a3d4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x17a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x17a3d8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x17a3d8u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 5));
    // 0x17a3dc: 0x2484a108  addiu       $a0, $a0, -0x5EF8
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942984));
    // 0x17a3e0: 0xaf808d14  sw          $zero, -0x72EC($gp)
    ctx->pc = 0x17a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 0));
    // 0x17a3e4: 0xc06aee4  jal         func_1ABB90
    ctx->pc = 0x17A3E4u;
    SET_GPR_U32(ctx, 31, 0x17A3ECu);
    ctx->pc = 0x1ABB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABB90u, 0x17A3E4u, 0x17A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3ECu;
label_17a3ec:
    // 0x17a3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3F0u;
        // 0x17a3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3F8u;
}
