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

// Function: entry_001dd1b8
// Address: 0x1dd1b8 - 0x1dd1dc
void entry_001dd1b8_0x1dd1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd1b8_0x1dd1b8");
#endif

    switch (ctx->pc) {
        case 0x1dd1c0u: goto label_1dd1c0;
        default: break;
    }

    ctx->pc = 0x1dd1b8u;

    // 0x1dd1b8: 0xc061422  jal         func_185088
    ctx->pc = 0x1DD1B8u;
    SET_GPR_U32(ctx, 31, 0x1DD1C0u);
    ctx->pc = 0x1DD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1B8u;
    // 0x1dd1bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1DD1B8u, 0x1DD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1C0u;
label_1dd1c0:
    // 0x1dd1c0: 0x26420110  addiu       $v0, $s2, 0x110
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1dd1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd1cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1D4u;
        // 0x1dd1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1DCu;
}
