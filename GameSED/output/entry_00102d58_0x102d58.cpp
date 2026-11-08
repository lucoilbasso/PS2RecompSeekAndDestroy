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

// Function: entry_00102d58
// Address: 0x102d58 - 0x102d88
void entry_00102d58_0x102d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102d58_0x102d58");
#endif

    ctx->pc = 0x102d58u;

    // 0x102d58: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x102d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x102d5c: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x102d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x102d60: 0xae350008  sw          $s5, 0x8($s1)
    ctx->pc = 0x102d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x102d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102d78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102d7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d80: 0x3e00008  jr          $ra
    ctx->pc = 0x102D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D80u;
        // 0x102d84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D88u;
}
