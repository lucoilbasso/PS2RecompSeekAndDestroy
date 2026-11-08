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

// Function: entry_0011be50
// Address: 0x11be50 - 0x11be70
void entry_0011be50_0x11be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011be50_0x11be50");
#endif

    switch (ctx->pc) {
        case 0x11be5cu: goto label_11be5c;
        default: break;
    }

    ctx->pc = 0x11be50u;

    // 0x11be50: 0x26240184  addiu       $a0, $s1, 0x184
    ctx->pc = 0x11be50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    // 0x11be54: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x11BE54u;
    SET_GPR_U32(ctx, 31, 0x11BE5Cu);
    ctx->pc = 0x11BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE54u;
    // 0x11be58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x11BE54u, 0x11BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE5Cu;
label_11be5c:
    // 0x11be5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11be5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11be60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11be60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11be64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11be64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11be68: 0x3e00008  jr          $ra
    ctx->pc = 0x11BE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE68u;
        // 0x11be6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BE70u;
}
