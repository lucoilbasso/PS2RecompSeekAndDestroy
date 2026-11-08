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

// Function: List__7WcMCard
// Address: 0x179760 - 0x17977c
void List__7WcMCard_0x179760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("List__7WcMCard_0x179760");
#endif

    ctx->pc = 0x179760u;

    // 0x179760: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x179760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x179764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179768: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x179768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17976c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x17976cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x179770: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x179770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x179774: 0x3e00008  jr          $ra
    ctx->pc = 0x179774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17977Cu;
}
