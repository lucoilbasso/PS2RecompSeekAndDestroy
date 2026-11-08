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

// Function: entry_0014c758
// Address: 0x14c758 - 0x14c784
void entry_0014c758_0x14c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c758_0x14c758");
#endif

    ctx->pc = 0x14c758u;

    // 0x14c758: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x14c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x14c75c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14c760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14c768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c76c: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x14c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x14c770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14c770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C784u;
}
