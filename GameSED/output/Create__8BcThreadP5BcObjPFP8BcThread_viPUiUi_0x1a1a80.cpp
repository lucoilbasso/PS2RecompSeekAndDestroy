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

// Function: Create__8BcThreadP5BcObjPFP8BcThread_viPUiUi
// Address: 0x1a1a80 - 0x1a1ae4
void Create__8BcThreadP5BcObjPFP8BcThread_viPUiUi_0x1a1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__8BcThreadP5BcObjPFP8BcThread_viPUiUi_0x1a1a80");
#endif

    switch (ctx->pc) {
        case 0x1a1ad0u: goto label_1a1ad0;
        default: break;
    }

    ctx->pc = 0x1a1a80u;

    // 0x1a1a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1a88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a1a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a1a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a90: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a1a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a1a94: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a1a98: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a1a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a1a9c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a1aa0: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x1a1aa4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1a1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1a1aa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1aac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a1ab0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1ab4: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1a1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1a1ab8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1a1ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1a1abc: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1a1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1a1ac0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1a1ac4: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x1a1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1a1ac8: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1A1AC8u;
    SET_GPR_U32(ctx, 31, 0x1A1AD0u);
    ctx->pc = 0x1A1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AC8u;
    // 0x1a1acc: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1A1AC8u, 0x1A1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AD0u;
label_1a1ad0:
    // 0x1a1ad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a1ad4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a1ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1ad8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a1ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a1adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1AE4u;
}
