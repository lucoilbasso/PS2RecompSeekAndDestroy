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

// Function: entry_0017e1ac
// Address: 0x17e1ac - 0x17e1d0
void entry_0017e1ac_0x17e1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e1ac_0x17e1ac");
#endif

    switch (ctx->pc) {
        case 0x17e1b8u: goto label_17e1b8;
        default: break;
    }

    ctx->pc = 0x17e1acu;

    // 0x17e1ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e1b0: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x17E1B0u;
    SET_GPR_U32(ctx, 31, 0x17E1B8u);
    ctx->pc = 0x17E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B0u;
    // 0x17e1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x17E1B0u, 0x17E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1B8u;
label_17e1b8:
    // 0x17e1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17e1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1C8u;
        // 0x17e1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E1D0u;
}
