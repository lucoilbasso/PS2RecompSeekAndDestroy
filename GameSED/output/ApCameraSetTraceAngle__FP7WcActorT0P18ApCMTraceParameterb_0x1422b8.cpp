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

// Function: ApCameraSetTraceAngle__FP7WcActorT0P18ApCMTraceParameterb
// Address: 0x1422b8 - 0x142318
void ApCameraSetTraceAngle__FP7WcActorT0P18ApCMTraceParameterb_0x1422b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetTraceAngle__FP7WcActorT0P18ApCMTraceParameterb_0x1422b8");
#endif

    switch (ctx->pc) {
        case 0x1422e0u: goto label_1422e0;
        default: break;
    }

    ctx->pc = 0x1422b8u;

    // 0x1422b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1422b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1422bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1422bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1422c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1422c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1422c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1422c8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1422C8u;
    {
        const bool branch_taken_0x1422c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1422CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422C8u;
        // 0x1422cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422c8) {
            ctx->pc = 0x1422D8u;
            goto label_1422d8;
        }
    }
    ctx->pc = 0x1422D0u;
    // 0x1422d0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1422d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1422d4: 0x24462650  addiu       $a2, $v0, 0x2650
    ctx->pc = 0x1422d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
label_1422d8:
    // 0x1422d8: 0xc04ff88  jal         func_13FE20
    ctx->pc = 0x1422D8u;
    SET_GPR_U32(ctx, 31, 0x1422E0u);
    ctx->pc = 0x13FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE20u, 0x1422D8u, 0x1422E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422E0u;
label_1422e0:
    // 0x1422e0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1422E0u;
    {
        const bool branch_taken_0x1422e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422E0u;
        // 0x1422e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422e0) {
            ctx->pc = 0x1422F8u;
            goto label_1422f8;
        }
    }
    ctx->pc = 0x1422E8u;
    // 0x1422e8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1422e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1422ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1422ECu;
    {
        const bool branch_taken_0x1422ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422ECu;
        // 0x1422f0: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422ec) {
            ctx->pc = 0x142304u;
            goto label_142304;
        }
    }
    ctx->pc = 0x1422F4u;
    // 0x1422f4: 0x0  nop
    ctx->pc = 0x1422f4u;
    // NOP
label_1422f8:
    // 0x1422f8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1422fc: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x142300: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142304:
    // 0x142304: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x142304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x142308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14230c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142310: 0x3e00008  jr          $ra
    ctx->pc = 0x142310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142310u;
        // 0x142314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142318u;
}
