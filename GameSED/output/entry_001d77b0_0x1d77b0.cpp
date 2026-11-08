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

// Function: entry_001d77b0
// Address: 0x1d77b0 - 0x1d77dc
void entry_001d77b0_0x1d77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d77b0_0x1d77b0");
#endif

    switch (ctx->pc) {
        case 0x1d77bcu: goto label_1d77bc;
        default: break;
    }

    ctx->pc = 0x1d77b0u;

    // 0x1d77b0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1d77b4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D77B4u;
    SET_GPR_U32(ctx, 31, 0x1D77BCu);
    ctx->pc = 0x1D77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77B4u;
    // 0x1d77b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D77B4u, 0x1D77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77BCu;
label_1d77bc:
    // 0x1d77bc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1d77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1d77c0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1d77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1d77c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d77c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d77c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d77c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d77ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d77d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d77d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d77d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D77D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D4u;
        // 0x1d77d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D77D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D77DCu;
}
