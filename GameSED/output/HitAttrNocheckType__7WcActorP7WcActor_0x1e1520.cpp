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

// Function: HitAttrNocheckType__7WcActorP7WcActor
// Address: 0x1e1520 - 0x1e153c
void HitAttrNocheckType__7WcActorP7WcActor_0x1e1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitAttrNocheckType__7WcActorP7WcActor_0x1e1520");
#endif

    ctx->pc = 0x1e1520u;

    // 0x1e1520: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x1e1524: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x1e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x1e1528: 0x30631f00  andi        $v1, $v1, 0x1F00
    ctx->pc = 0x1e1528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7936);
    // 0x1e152c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1e152cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1e1530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e1530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e1534: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1534u;
        // 0x1e1538: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E153Cu;
}
