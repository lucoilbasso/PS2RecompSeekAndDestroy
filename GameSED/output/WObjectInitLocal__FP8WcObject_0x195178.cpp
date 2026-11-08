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

// Function: WObjectInitLocal__FP8WcObject
// Address: 0x195178 - 0x195190
void WObjectInitLocal__FP8WcObject_0x195178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectInitLocal__FP8WcObject_0x195178");
#endif

    ctx->pc = 0x195178u;

    // 0x195178: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x195178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x19517c: 0xac800170  sw          $zero, 0x170($a0)
    ctx->pc = 0x19517cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 0));
    // 0x195180: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x195180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195184: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x195184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x195188: 0x3e00008  jr          $ra
    ctx->pc = 0x195188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195188u;
        // 0x19518c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195190u;
}
