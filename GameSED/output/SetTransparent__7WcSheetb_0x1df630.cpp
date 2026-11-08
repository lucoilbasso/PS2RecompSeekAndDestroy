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

// Function: SetTransparent__7WcSheetb
// Address: 0x1df630 - 0x1df64c
void SetTransparent__7WcSheetb_0x1df630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransparent__7WcSheetb_0x1df630");
#endif

    ctx->pc = 0x1df630u;

    // 0x1df630: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1df630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df634: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1df634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1df638: 0x3042fdff  andi        $v0, $v0, 0xFDFF
    ctx->pc = 0x1df638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65023);
    // 0x1df63c: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x1df63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1df640: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1df640u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1df644: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF644u;
        // 0x1df648: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF64Cu;
}
