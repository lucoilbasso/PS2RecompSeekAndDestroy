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

// Function: entry_0013f368
// Address: 0x13f368 - 0x13f38c
void entry_0013f368_0x13f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f368_0x13f368");
#endif

    ctx->pc = 0x13f368u;

    // 0x13f368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f36c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13f370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f378: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13f378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f37c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x13f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x13f380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f384: 0x3e00008  jr          $ra
    ctx->pc = 0x13F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F384u;
        // 0x13f388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F38Cu;
}
