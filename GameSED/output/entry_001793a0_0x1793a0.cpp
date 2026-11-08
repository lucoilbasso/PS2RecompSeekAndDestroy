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

// Function: entry_001793a0
// Address: 0x1793a0 - 0x1793c0
void entry_001793a0_0x1793a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001793a0_0x1793a0");
#endif

    switch (ctx->pc) {
        case 0x1793a8u: goto label_1793a8;
        default: break;
    }

    ctx->pc = 0x1793a0u;

    // 0x1793a0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1793A0u;
    SET_GPR_U32(ctx, 31, 0x1793A8u);
    ctx->pc = 0x1793A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793A0u;
    // 0x1793a4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1793A0u, 0x1793A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793A8u;
label_1793a8:
    // 0x1793a8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1793a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1793ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1793acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1793b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1793b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1793b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1793b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1793b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1793B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793B8u;
        // 0x1793bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1793B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793C0u;
}
