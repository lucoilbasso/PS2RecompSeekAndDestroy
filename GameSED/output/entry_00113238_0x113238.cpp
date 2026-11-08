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

// Function: entry_00113238
// Address: 0x113238 - 0x113250
void entry_00113238_0x113238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113238_0x113238");
#endif

    switch (ctx->pc) {
        case 0x113240u: goto label_113240;
        default: break;
    }

    ctx->pc = 0x113238u;

    // 0x113238: 0xc05e8b0  jal         func_17A2C0
    ctx->pc = 0x113238u;
    SET_GPR_U32(ctx, 31, 0x113240u);
    ctx->pc = 0x11323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113238u;
    // 0x11323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A2C0u, 0x113238u, 0x113240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113240u;
label_113240:
    // 0x113240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x113244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113248: 0x3e00008  jr          $ra
    ctx->pc = 0x113248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113248u;
        // 0x11324c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113250u;
}
