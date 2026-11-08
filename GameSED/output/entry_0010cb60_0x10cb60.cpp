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

// Function: entry_0010cb60
// Address: 0x10cb60 - 0x10cb7c
void entry_0010cb60_0x10cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb60_0x10cb60");
#endif

    switch (ctx->pc) {
        case 0x10cb6cu: goto label_10cb6c;
        default: break;
    }

    ctx->pc = 0x10cb60u;

    // 0x10cb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb64: 0xc063a90  jal         func_18EA40
    ctx->pc = 0x10CB64u;
    SET_GPR_U32(ctx, 31, 0x10CB6Cu);
    ctx->pc = 0x10CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB64u;
    // 0x10cb68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA40u, 0x10CB64u, 0x10CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB6Cu;
label_10cb6c:
    // 0x10cb6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB74u;
        // 0x10cb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB7Cu;
}
