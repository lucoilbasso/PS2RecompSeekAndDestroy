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

// Function: entry_0011cf50
// Address: 0x11cf50 - 0x11cf70
void entry_0011cf50_0x11cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf50_0x11cf50");
#endif

    switch (ctx->pc) {
        case 0x11cf5cu: goto label_11cf5c;
        default: break;
    }

    ctx->pc = 0x11cf50u;

    // 0x11cf50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf54: 0xc046eee  jal         func_11BBB8
    ctx->pc = 0x11CF54u;
    SET_GPR_U32(ctx, 31, 0x11CF5Cu);
    ctx->pc = 0x11CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF54u;
    // 0x11cf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBB8u, 0x11CF54u, 0x11CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF5Cu;
label_11cf5c:
    // 0x11cf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cf64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF68u;
        // 0x11cf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF70u;
}
