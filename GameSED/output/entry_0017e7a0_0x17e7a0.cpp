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

// Function: entry_0017e7a0
// Address: 0x17e7a0 - 0x17e7c0
void entry_0017e7a0_0x17e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e7a0_0x17e7a0");
#endif

    switch (ctx->pc) {
        case 0x17e7acu: goto label_17e7ac;
        default: break;
    }

    ctx->pc = 0x17e7a0u;

    // 0x17e7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7a4: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x17E7A4u;
    SET_GPR_U32(ctx, 31, 0x17E7ACu);
    ctx->pc = 0x17E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7A4u;
    // 0x17e7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17E7A4u, 0x17E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7ACu;
label_17e7ac:
    // 0x17e7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e7b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e7b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B8u;
        // 0x17e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7C0u;
}
