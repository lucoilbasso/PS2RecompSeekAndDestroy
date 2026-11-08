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

// Function: entry_00157080
// Address: 0x157080 - 0x1570a0
void entry_00157080_0x157080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157080_0x157080");
#endif

    ctx->pc = 0x157080u;

    // 0x157080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157084: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x157088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15708c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15708cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x157090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157094: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x157094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x157098: 0x3e00008  jr          $ra
    ctx->pc = 0x157098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157098u;
        // 0x15709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1570A0u;
}
