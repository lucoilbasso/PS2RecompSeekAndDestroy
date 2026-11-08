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

// Function: entry_001e0f40
// Address: 0x1e0f40 - 0x1e0f60
void entry_001e0f40_0x1e0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0f40_0x1e0f40");
#endif

    switch (ctx->pc) {
        case 0x1e0f48u: goto label_1e0f48;
        default: break;
    }

    ctx->pc = 0x1e0f40u;

    // 0x1e0f40: 0xc061422  jal         func_185088
    ctx->pc = 0x1E0F40u;
    SET_GPR_U32(ctx, 31, 0x1E0F48u);
    ctx->pc = 0x1E0F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0F40u;
    // 0x1e0f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1E0F40u, 0x1E0F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F48u;
label_1e0f48:
    // 0x1e0f48: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e0f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F58u;
        // 0x1e0f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F60u;
}
