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

// Function: __9ApcPtcLin
// Address: 0x12df00 - 0x12df20
void ps2___9ApcPtcLin_0x12df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9ApcPtcLin_0x12df00");
#endif

    ctx->pc = 0x12df00u;

    // 0x12df00: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x12df04: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x12df04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x12df08: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    // 0x12df0c: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x12df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x12df10: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12df10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x12df14: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x12df14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x12df18: 0x3e00008  jr          $ra
    ctx->pc = 0x12DF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF18u;
        // 0x12df1c: 0xac80015c  sw          $zero, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DF20u;
}
