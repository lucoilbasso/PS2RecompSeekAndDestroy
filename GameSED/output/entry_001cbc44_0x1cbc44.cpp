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

// Function: entry_001cbc44
// Address: 0x1cbc44 - 0x1cbc68
void entry_001cbc44_0x1cbc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc44_0x1cbc44");
#endif

    ctx->pc = 0x1cbc44u;

    // 0x1cbc44: 0xdfb004b0  ld          $s0, 0x4B0($sp)
    ctx->pc = 0x1cbc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1cbc48: 0xdfb104b8  ld          $s1, 0x4B8($sp)
    ctx->pc = 0x1cbc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1cbc4c: 0xdfb204c0  ld          $s2, 0x4C0($sp)
    ctx->pc = 0x1cbc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1cbc50: 0xdfb304c8  ld          $s3, 0x4C8($sp)
    ctx->pc = 0x1cbc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1cbc54: 0xdfb404d0  ld          $s4, 0x4D0($sp)
    ctx->pc = 0x1cbc54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1cbc58: 0xdfb504d8  ld          $s5, 0x4D8($sp)
    ctx->pc = 0x1cbc58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x1cbc5c: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x1cbc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1cbc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC60u;
        // 0x1cbc64: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC68u;
}
