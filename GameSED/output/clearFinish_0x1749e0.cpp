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

// Function: clearFinish
// Address: 0x1749e0 - 0x174a00
void clearFinish_0x1749e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clearFinish_0x1749e0");
#endif

    ctx->pc = 0x1749e0u;

    // 0x1749e0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1749e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1749e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1749e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1749e8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1749e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1749ec: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1749ecu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1749f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1749f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1749f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1749f4u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x1749f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1749F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1749F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174A00u;
}
