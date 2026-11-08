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

// Function: ApVwEntGetActorWorldOffset__FP7WcActorP15BsSCDEntControl
// Address: 0x1129b0 - 0x1129e4
void ApVwEntGetActorWorldOffset__FP7WcActorP15BsSCDEntControl_0x1129b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetActorWorldOffset__FP7WcActorP15BsSCDEntControl_0x1129b0");
#endif

    switch (ctx->pc) {
        case 0x1129d8u: goto label_1129d8;
        default: break;
    }

    ctx->pc = 0x1129b0u;

    // 0x1129b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1129b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1129b4: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x1129b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1129b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1129b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1129bc: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x1129bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1129c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1129c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1129c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1129c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1129c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1129c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1129cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1129ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1129d0: 0xc04425e  jal         func_110978
    ctx->pc = 0x1129D0u;
    SET_GPR_U32(ctx, 31, 0x1129D8u);
    ctx->pc = 0x1129D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129D0u;
    // 0x1129d4: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x1129D0u, 0x1129D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129D8u;
label_1129d8:
    // 0x1129d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1129d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1129DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1129E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129DCu;
        // 0x1129e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1129E4u;
}
