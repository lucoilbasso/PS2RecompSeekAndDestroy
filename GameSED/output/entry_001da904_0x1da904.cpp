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

// Function: entry_001da904
// Address: 0x1da904 - 0x1da938
void entry_001da904_0x1da904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da904_0x1da904");
#endif

    ctx->pc = 0x1da904u;

    // 0x1da904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da908: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1da90c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1da90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da910: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da914: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1da918: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1da918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1da91c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da924: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1da924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1da928: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1da928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1da92c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1da92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1da930: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA930u;
        // 0x1da934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA938u;
}
