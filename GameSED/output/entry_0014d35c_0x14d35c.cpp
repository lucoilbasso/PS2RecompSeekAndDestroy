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

// Function: entry_0014d35c
// Address: 0x14d35c - 0x14d37c
void entry_0014d35c_0x14d35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d35c_0x14d35c");
#endif

    ctx->pc = 0x14d35cu;

    // 0x14d35c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14d360: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14d364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14d36c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x14d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x14d370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d374: 0x3e00008  jr          $ra
    ctx->pc = 0x14D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D374u;
        // 0x14d378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D37Cu;
}
