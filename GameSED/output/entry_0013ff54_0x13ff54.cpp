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

// Function: entry_0013ff54
// Address: 0x13ff54 - 0x13ff68
void entry_0013ff54_0x13ff54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff54_0x13ff54");
#endif

    ctx->pc = 0x13ff54u;

    // 0x13ff54: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x13ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
    // 0x13ff58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13ff58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ff5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13ff5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x13FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF60u;
        // 0x13ff64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FF68u;
}
