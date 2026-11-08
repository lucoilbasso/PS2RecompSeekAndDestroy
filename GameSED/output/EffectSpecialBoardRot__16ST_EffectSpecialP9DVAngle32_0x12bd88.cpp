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

// Function: EffectSpecialBoardRot__16ST_EffectSpecialP9DVAngle32
// Address: 0x12bd88 - 0x12bdc0
void EffectSpecialBoardRot__16ST_EffectSpecialP9DVAngle32_0x12bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSpecialBoardRot__16ST_EffectSpecialP9DVAngle32_0x12bd88");
#endif

    ctx->pc = 0x12bd88u;

    // 0x12bd88: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x12bd8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12bd90: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12bd94: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x12bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12bd98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bd9c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12bda0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12bda4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bda8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12bdac: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x12bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x12bdb0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x12bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x12bdb4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x12bdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12bdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDB8u;
        // 0x12bdbc: 0xaca70008  sw          $a3, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BDC0u;
}
