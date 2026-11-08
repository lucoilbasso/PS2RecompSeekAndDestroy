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

// Function: ApMotionStopActorMotion__FP7WcActorP11WActionInfo
// Address: 0x13aae0 - 0x13ab38
void ApMotionStopActorMotion__FP7WcActorP11WActionInfo_0x13aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionStopActorMotion__FP7WcActorP11WActionInfo_0x13aae0");
#endif

    switch (ctx->pc) {
        case 0x13ab1cu: goto label_13ab1c;
        default: break;
    }

    ctx->pc = 0x13aae0u;

    // 0x13aae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13aae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13aae8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13aae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13AAECu;
    {
        const bool branch_taken_0x13aaec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAECu;
        // 0x13aaf0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaec) {
            ctx->pc = 0x13AB04u;
            goto label_13ab04;
        }
    }
    ctx->pc = 0x13AAF4u;
    // 0x13aaf4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x13aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x13aaf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13aafc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13ab00: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x13ab00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_13ab04:
    // 0x13ab04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ab08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB08u;
    {
        const bool branch_taken_0x13ab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB08u;
        // 0x13ab0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab08) {
            ctx->pc = 0x13AB1Cu;
            goto label_13ab1c;
        }
    }
    ctx->pc = 0x13AB10u;
    // 0x13ab10: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13ab14: 0xc061a00  jal         func_186800
    ctx->pc = 0x13AB14u;
    SET_GPR_U32(ctx, 31, 0x13AB1Cu);
    ctx->pc = 0x13AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB14u;
    // 0x13ab18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186800u, 0x13AB14u, 0x13AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB1Cu;
label_13ab1c:
    // 0x13ab1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13ab20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13ab24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13ab28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13ab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ab2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ab2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB30u;
        // 0x13ab34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB38u;
}
