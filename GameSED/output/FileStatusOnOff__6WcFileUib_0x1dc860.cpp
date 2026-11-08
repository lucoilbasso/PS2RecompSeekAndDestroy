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

// Function: FileStatusOnOff__6WcFileUib
// Address: 0x1dc860 - 0x1dc880
void FileStatusOnOff__6WcFileUib_0x1dc860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileStatusOnOff__6WcFileUib_0x1dc860");
#endif

    ctx->pc = 0x1dc860u;

    // 0x1dc860: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc864: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x1dc864u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1dc868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dc868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dc86c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1dc86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1dc870: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1dc870u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1dc874: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1dc874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1dc878: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC880u;
}
