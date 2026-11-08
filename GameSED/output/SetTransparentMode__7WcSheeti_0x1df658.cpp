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

// Function: SetTransparentMode__7WcSheeti
// Address: 0x1df658 - 0x1df678
void SetTransparentMode__7WcSheeti_0x1df658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransparentMode__7WcSheeti_0x1df658");
#endif

    ctx->pc = 0x1df658u;

    // 0x1df658: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1df658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1df65c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df660: 0x9063ee68  lbu         $v1, -0x1198($v1)
    ctx->pc = 0x1df660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294962792)));
    // 0x1df664: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1df664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df668: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1df668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1df66c: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1df66cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1df670: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF670u;
        // 0x1df674: 0xa0830002  sb          $v1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF678u;
}
