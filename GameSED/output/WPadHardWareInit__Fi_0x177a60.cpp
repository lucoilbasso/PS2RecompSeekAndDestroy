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

// Function: WPadHardWareInit__Fi
// Address: 0x177a60 - 0x177ad4
void WPadHardWareInit__Fi_0x177a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardWareInit__Fi_0x177a60");
#endif

    switch (ctx->pc) {
        case 0x177ab4u: goto label_177ab4;
        case 0x177ac4u: goto label_177ac4;
        default: break;
    }

    ctx->pc = 0x177a60u;

    // 0x177a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a6c: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x177a70: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x177a74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177a78: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x177a78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x177a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a80: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x177a80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x177a84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x177a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x177a88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x177a88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177a8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x177a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x177a90: 0x2421e820  addiu       $at, $at, -0x17E0
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294961184));
    // 0x177a94: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x177a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x177a98: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x177a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x177a9c: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x177aa0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x177aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x177aa4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x177aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x177aa8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x177aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x177aac: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177AACu;
    SET_GPR_U32(ctx, 31, 0x177AB4u);
    ctx->pc = 0x177AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AACu;
    // 0x177ab0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177AACu, 0x177AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AB4u;
label_177ab4:
    // 0x177ab4: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x177ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x177ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177abc: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177ABCu;
    SET_GPR_U32(ctx, 31, 0x177AC4u);
    ctx->pc = 0x177AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ABCu;
    // 0x177ac0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177ABCu, 0x177AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AC4u;
label_177ac4:
    // 0x177ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177acc: 0x3e00008  jr          $ra
    ctx->pc = 0x177ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ACCu;
        // 0x177ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177AD4u;
}
