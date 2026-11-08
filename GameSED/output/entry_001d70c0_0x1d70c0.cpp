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

// Function: entry_001d70c0
// Address: 0x1d70c0 - 0x1d70e8
void entry_001d70c0_0x1d70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d70c0_0x1d70c0");
#endif

    switch (ctx->pc) {
        case 0x1d70ccu: goto label_1d70cc;
        default: break;
    }

    ctx->pc = 0x1d70c0u;

    // 0x1d70c0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d70c4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D70C4u;
    SET_GPR_U32(ctx, 31, 0x1D70CCu);
    ctx->pc = 0x1D70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C4u;
    // 0x1d70c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D70C4u, 0x1D70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70CCu;
label_1d70cc:
    // 0x1d70cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d70d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d70d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d70d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d70dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d70dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d70e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E0u;
        // 0x1d70e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70E8u;
}
