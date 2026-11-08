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

// Function: GetPosition__9ApcEfeGenP9FVector32
// Address: 0x1d8370 - 0x1d8384
void GetPosition__9ApcEfeGenP9FVector32_0x1d8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosition__9ApcEfeGenP9FVector32_0x1d8370");
#endif

    ctx->pc = 0x1d8370u;

    // 0x1d8370: 0x24840160  addiu       $a0, $a0, 0x160
    ctx->pc = 0x1d8370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1d8374: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d8374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8378: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d8378u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d837c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8384u;
}
