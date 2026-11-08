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

// Function: SetRotate__9ApcEfeGenP9DVAngle32
// Address: 0x1d8398 - 0x1d83b8
void SetRotate__9ApcEfeGenP9DVAngle32_0x1d8398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotate__9ApcEfeGenP9DVAngle32_0x1d8398");
#endif

    ctx->pc = 0x1d8398u;

    // 0x1d8398: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8398u;
    {
        const bool branch_taken_0x1d8398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8398) {
            ctx->pc = 0x1D83B0u;
            goto label_1d83b0;
        }
    }
    ctx->pc = 0x1D83A0u;
    // 0x1d83a0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d83a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d83a4: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x1d83a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
    // 0x1d83a8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1d83a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d83ac: 0xfc830178  sd          $v1, 0x178($a0)
    ctx->pc = 0x1d83acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 376), GPR_U64(ctx, 3));
label_1d83b0:
    // 0x1d83b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D83B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D83B8u;
}
