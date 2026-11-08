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

// Function: SetViewPort__6WcViewP7IRect32
// Address: 0x1873a8 - 0x1873c8
void SetViewPort__6WcViewP7IRect32_0x1873a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewPort__6WcViewP7IRect32_0x1873a8");
#endif

    ctx->pc = 0x1873a8u;

    // 0x1873a8: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1873a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1873ac: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1873acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1873b0: 0xfc8301a0  sd          $v1, 0x1A0($a0)
    ctx->pc = 0x1873b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 416), GPR_U64(ctx, 3));
    // 0x1873b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1873b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1873b8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1873b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1873bc: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x1873bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
    // 0x1873c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1873C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873C0u;
        // 0x1873c4: 0xfc8301a8  sd          $v1, 0x1A8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 424), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873C8u;
}
