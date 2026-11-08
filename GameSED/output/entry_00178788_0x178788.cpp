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

// Function: entry_00178788
// Address: 0x178788 - 0x17879c
void entry_00178788_0x178788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178788_0x178788");
#endif

    ctx->pc = 0x178788u;

    // 0x178788: 0xae001040  sw          $zero, 0x1040($s0)
    ctx->pc = 0x178788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 0));
    // 0x17878c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178794: 0x3e00008  jr          $ra
    ctx->pc = 0x178794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178794u;
        // 0x178798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17879Cu;
}
