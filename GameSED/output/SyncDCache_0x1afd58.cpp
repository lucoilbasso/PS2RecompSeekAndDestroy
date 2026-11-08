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

// Function: SyncDCache
// Address: 0x1afd58 - 0x1afdd4
void SyncDCache_0x1afd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyncDCache_0x1afd58");
#endif

    switch (ctx->pc) {
        case 0x1afd90u: goto label_1afd90;
        case 0x1afda4u: goto label_1afda4;
        default: break;
    }

    ctx->pc = 0x1afd58u;

    // 0x1afd58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1afd5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1afd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1afd60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afd64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afd64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afd6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1afd6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afd74: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1afd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1afd78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1afd7c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1afd7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1afd80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFD80u;
    {
        const bool branch_taken_0x1afd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd80) {
            ctx->pc = 0x1AFD90u;
            goto label_1afd90;
        }
    }
    ctx->pc = 0x1AFD88u;
    // 0x1afd88: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AFD88u;
    SET_GPR_U32(ctx, 31, 0x1AFD90u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AFD88u, 0x1AFD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD90u;
label_1afd90:
    // 0x1afd90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1afd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1afd94: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1afd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1afd98: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1afd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1afd9c: 0xc06bf2c  jal         func_1AFCB0
    ctx->pc = 0x1AFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFDA4u);
    ctx->pc = 0x1AFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD9Cu;
    // 0x1afda0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFCB0u, 0x1AFD9Cu, 0x1AFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDA4u;
label_1afda4:
    // 0x1afda4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDC0u;
            goto label_1afdc0;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afdb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afdb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afdb8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1AFDB8u;
    ctx->pc = 0x1AFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB8u;
    // 0x1afdbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AFDC0u;
label_1afdc0:
    // 0x1afdc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afdc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afdc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afdc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDCCu;
        // 0x1afdd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFDD4u;
}
