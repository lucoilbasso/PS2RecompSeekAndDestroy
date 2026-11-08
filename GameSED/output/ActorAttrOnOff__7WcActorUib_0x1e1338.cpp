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

// Function: ActorAttrOnOff__7WcActorUib
// Address: 0x1e1338 - 0x1e1354
void ActorAttrOnOff__7WcActorUib_0x1e1338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorAttrOnOff__7WcActorUib_0x1e1338");
#endif

    ctx->pc = 0x1e1338u;

    // 0x1e1338: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e133c: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x1e133cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1e1340: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e1340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e1344: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1e1344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e1348: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1e1348u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1e134c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E134Cu;
        // 0x1e1350: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1354u;
}
