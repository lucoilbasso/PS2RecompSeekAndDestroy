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

// Function: entry_00156840
// Address: 0x156840 - 0x156860
void entry_00156840_0x156840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156840_0x156840");
#endif

    switch (ctx->pc) {
        case 0x15684cu: goto label_15684c;
        default: break;
    }

    ctx->pc = 0x156840u;

    // 0x156840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156844: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x156844u;
    SET_GPR_U32(ctx, 31, 0x15684Cu);
    ctx->pc = 0x156848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156844u;
    // 0x156848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x156844u, 0x15684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15684Cu;
label_15684c:
    // 0x15684c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15684cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156858: 0x3e00008  jr          $ra
    ctx->pc = 0x156858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156858u;
        // 0x15685c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156860u;
}
