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

// Function: isAudioOK
// Address: 0x170498 - 0x1704d0
void isAudioOK_0x170498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isAudioOK_0x170498");
#endif

    ctx->pc = 0x170498u;

    // 0x170498: 0x8f828bd8  lw          $v0, -0x7428($gp)
    ctx->pc = 0x170498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x17049c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17049cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1704a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1704A0u;
    {
        const bool branch_taken_0x1704a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1704A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704A0u;
        // 0x1704a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704a0) {
            ctx->pc = 0x1704C0u;
            goto label_1704c0;
        }
    }
    ctx->pc = 0x1704A8u;
    // 0x1704a8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1704ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704b0: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x1704b4: 0x805c46a  j           func_1711A8
    ctx->pc = 0x1704B4u;
    ctx->pc = 0x1704B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704B4u;
    // 0x1704b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1711A8u;
    audioDecIsPreset_0x1711a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1704BCu;
    // 0x1704bc: 0x0  nop
    ctx->pc = 0x1704bcu;
    // NOP
label_1704c0:
    // 0x1704c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1704c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1704c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1704C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704C8u;
        // 0x1704cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1704C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1704D0u;
}
