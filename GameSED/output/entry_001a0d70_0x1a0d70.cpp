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

// Function: entry_001a0d70
// Address: 0x1a0d70 - 0x1a0d90
void entry_001a0d70_0x1a0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0d70_0x1a0d70");
#endif

    switch (ctx->pc) {
        case 0x1a0d7cu: goto label_1a0d7c;
        default: break;
    }

    ctx->pc = 0x1a0d70u;

    // 0x1a0d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d74: 0xc06838e  jal         func_1A0E38
    ctx->pc = 0x1A0D74u;
    SET_GPR_U32(ctx, 31, 0x1A0D7Cu);
    ctx->pc = 0x1A0D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D74u;
    // 0x1a0d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E38u, 0x1A0D74u, 0x1A0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D7Cu;
label_1a0d7c:
    // 0x1a0d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D88u;
        // 0x1a0d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D90u;
}
