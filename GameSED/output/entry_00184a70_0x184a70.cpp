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

// Function: entry_00184a70
// Address: 0x184a70 - 0x184a90
void entry_00184a70_0x184a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184a70_0x184a70");
#endif

    switch (ctx->pc) {
        case 0x184a80u: goto label_184a80;
        default: break;
    }

    ctx->pc = 0x184a70u;

    // 0x184a70: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x184a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a78: 0xc068584  jal         func_1A1610
    ctx->pc = 0x184A78u;
    SET_GPR_U32(ctx, 31, 0x184A80u);
    ctx->pc = 0x184A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A78u;
    // 0x184a7c: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x184A78u, 0x184A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A80u;
label_184a80:
    // 0x184a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184a84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x184a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184a88: 0x3e00008  jr          $ra
    ctx->pc = 0x184A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A88u;
        // 0x184a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A90u;
}
