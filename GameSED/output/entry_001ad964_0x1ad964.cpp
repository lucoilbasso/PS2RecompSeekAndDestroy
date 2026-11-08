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

// Function: entry_001ad964
// Address: 0x1ad964 - 0x1ad984
void entry_001ad964_0x1ad964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad964_0x1ad964");
#endif

    ctx->pc = 0x1ad964u;

    // 0x1ad964: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ad964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad968: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x1ad968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1ad96c: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x1ad96cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1ad970: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x1ad970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1ad974: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x1ad974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1ad978: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x1ad978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1ad97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD97Cu;
        // 0x1ad980: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD984u;
}
