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

// Function: entry_001df84c
// Address: 0x1df84c - 0x1df888
void entry_001df84c_0x1df84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df84c_0x1df84c");
#endif

    ctx->pc = 0x1df84cu;

    // 0x1df84c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1df84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1df850: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1df850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1df854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1df858: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1df858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1df85c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1df85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1df860: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1df860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1df864: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1df864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1df868: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1df868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1df86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df870: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1df870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df87c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1df87cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1df880: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF880u;
        // 0x1df884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF888u;
}
