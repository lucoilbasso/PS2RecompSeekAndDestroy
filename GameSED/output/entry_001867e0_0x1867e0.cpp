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

// Function: entry_001867e0
// Address: 0x1867e0 - 0x1867fc
void entry_001867e0_0x1867e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001867e0_0x1867e0");
#endif

    ctx->pc = 0x1867e0u;

    // 0x1867e0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1867e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1867e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1867e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1867e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1867ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1867ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1867f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1867f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1867f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1867F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867F4u;
        // 0x1867f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867FCu;
}
