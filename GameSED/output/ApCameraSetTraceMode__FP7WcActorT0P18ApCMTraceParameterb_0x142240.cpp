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

// Function: ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb
// Address: 0x142240 - 0x1422b4
void ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb_0x142240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb_0x142240");
#endif

    switch (ctx->pc) {
        case 0x142268u: goto label_142268;
        default: break;
    }

    ctx->pc = 0x142240u;

    // 0x142240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142248: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x142248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14224c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142250: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x142250u;
    {
        const bool branch_taken_0x142250 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x142254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142250u;
        // 0x142254: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142250) {
            ctx->pc = 0x142260u;
            goto label_142260;
        }
    }
    ctx->pc = 0x142258u;
    // 0x142258: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x142258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14225c: 0x24462650  addiu       $a2, $v0, 0x2650
    ctx->pc = 0x14225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9808));
label_142260:
    // 0x142260: 0xc04ff88  jal         func_13FE20
    ctx->pc = 0x142260u;
    SET_GPR_U32(ctx, 31, 0x142268u);
    ctx->pc = 0x13FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE20u, 0x142260u, 0x142268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142268u;
label_142268:
    // 0x142268: 0x3c05ffbf  lui         $a1, 0xFFBF
    ctx->pc = 0x142268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65471 << 16));
    // 0x14226c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142270: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142270u;
    {
        const bool branch_taken_0x142270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142270u;
        // 0x142274: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142270) {
            ctx->pc = 0x142288u;
            goto label_142288;
        }
    }
    ctx->pc = 0x142278u;
    // 0x142278: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14227c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14227Cu;
    {
        const bool branch_taken_0x14227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14227Cu;
        // 0x142280: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14227c) {
            ctx->pc = 0x142294u;
            goto label_142294;
        }
    }
    ctx->pc = 0x142284u;
    // 0x142284: 0x0  nop
    ctx->pc = 0x142284u;
    // NOP
label_142288:
    // 0x142288: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14228c: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x142290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_142294:
    // 0x142294: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x142294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x142298: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14229c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14229cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1422a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1422a4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1422a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1422a8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1422a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1422ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1422ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1422B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422ACu;
        // 0x1422b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1422ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1422B4u;
}
