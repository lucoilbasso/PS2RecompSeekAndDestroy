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

// Function: entry_001d1238
// Address: 0x1d1238 - 0x1d124c
void entry_001d1238_0x1d1238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1238_0x1d1238");
#endif

    ctx->pc = 0x1d1238u;

    // 0x1d1238: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x1d1238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1d123c: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x1d123cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x1d1240: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x1d1240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1d1244: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1244u;
        // 0x1d1248: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D124Cu;
}
