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

// Function: GetEffectSpriteGraphicImageInfo__9ApcEfeGeni
// Address: 0x12eb50 - 0x12ebb4
void GetEffectSpriteGraphicImageInfo__9ApcEfeGeni_0x12eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEffectSpriteGraphicImageInfo__9ApcEfeGeni_0x12eb50");
#endif

    switch (ctx->pc) {
        case 0x12eb80u: goto label_12eb80;
        case 0x12eb88u: goto label_12eb88;
        default: break;
    }

    ctx->pc = 0x12eb50u;

    // 0x12eb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12eb54: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x12eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x12eb58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12eb5c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x12eb5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12eb60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12eb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12eb68: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x12eb6c: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x12eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x12eb70: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x12eb74: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x12eb78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12EB78u;
    SET_GPR_U32(ctx, 31, 0x12EB80u);
    ctx->pc = 0x12EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB78u;
    // 0x12eb7c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12EB78u, 0x12EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB80u;
label_12eb80:
    // 0x12eb80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x12EB80u;
    SET_GPR_U32(ctx, 31, 0x12EB88u);
    ctx->pc = 0x12EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB80u;
    // 0x12eb84: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x12EB80u, 0x12EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB88u;
label_12eb88:
    // 0x12eb88: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12eb8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12eb90: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12eb94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12eb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12eb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12eba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12eba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12eba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eba8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12ebac: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBACu;
        // 0x12ebb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EBB4u;
}
