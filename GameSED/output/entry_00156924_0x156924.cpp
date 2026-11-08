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

// Function: entry_00156924
// Address: 0x156924 - 0x156940
void entry_00156924_0x156924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156924_0x156924");
#endif

    ctx->pc = 0x156924u;

    // 0x156924: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x156924u;
    {
        const bool branch_taken_0x156924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x156928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156924u;
        // 0x156928: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156924) {
            ctx->pc = 0x156910u;
            return;
        }
    }
    ctx->pc = 0x15692Cu;
    // 0x15692c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15692cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156938: 0x3e00008  jr          $ra
    ctx->pc = 0x156938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156938u;
        // 0x15693c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156940u;
}
