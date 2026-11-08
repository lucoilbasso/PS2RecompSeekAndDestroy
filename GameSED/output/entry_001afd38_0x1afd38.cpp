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

// Function: entry_001afd38
// Address: 0x1afd38 - 0x1afd54
void entry_001afd38_0x1afd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd38_0x1afd38");
#endif

    ctx->pc = 0x1afd38u;

    // 0x1afd38: 0xf  sync
    ctx->pc = 0x1afd38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1afd3c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1afd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1afd40: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1afd40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1afd44: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1AFD44u;
    {
        const bool branch_taken_0x1afd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afd44) {
            ctx->pc = 0x1AFCC0u;
            return;
        }
    }
    ctx->pc = 0x1AFD4Cu;
    // 0x1afd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFD54u;
}
