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

// Function: GetRotate__9ApcEfeGenP9DVAngle32
// Address: 0x1d83b8 - 0x1d83d8
void GetRotate__9ApcEfeGenP9DVAngle32_0x1d83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRotate__9ApcEfeGenP9DVAngle32_0x1d83b8");
#endif

    ctx->pc = 0x1d83b8u;

    // 0x1d83b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D83B8u;
    {
        const bool branch_taken_0x1d83b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d83b8) {
            ctx->pc = 0x1D83D0u;
            goto label_1d83d0;
        }
    }
    ctx->pc = 0x1D83C0u;
    // 0x1d83c0: 0xdc820170  ld          $v0, 0x170($a0)
    ctx->pc = 0x1d83c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x1d83c4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1d83c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1d83c8: 0xdc830178  ld          $v1, 0x178($a0)
    ctx->pc = 0x1d83c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x1d83cc: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1d83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
label_1d83d0:
    // 0x1d83d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D83D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D83D8u;
}
