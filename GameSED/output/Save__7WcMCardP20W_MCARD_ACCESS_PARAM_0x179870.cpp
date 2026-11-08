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

// Function: Save__7WcMCardP20W_MCARD_ACCESS_PARAM
// Address: 0x179870 - 0x179890
void Save__7WcMCardP20W_MCARD_ACCESS_PARAM_0x179870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Save__7WcMCardP20W_MCARD_ACCESS_PARAM_0x179870");
#endif

    ctx->pc = 0x179870u;

    // 0x179870: 0x24824040  addiu       $v0, $a0, 0x4040
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x179874: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179878: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x179878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17987c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x17987cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x179880: 0xac8545c0  sw          $a1, 0x45C0($a0)
    ctx->pc = 0x179880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17856), GPR_U32(ctx, 5));
    // 0x179884: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x179884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x179888: 0x3e00008  jr          $ra
    ctx->pc = 0x179888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179890u;
}
