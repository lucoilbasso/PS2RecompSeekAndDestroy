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

// Function: entry_0011c868
// Address: 0x11c868 - 0x11c884
void entry_0011c868_0x11c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c868_0x11c868");
#endif

    switch (ctx->pc) {
        case 0x11c870u: goto label_11c870;
        default: break;
    }

    ctx->pc = 0x11c868u;

    // 0x11c868: 0xc047222  jal         func_11C888
    ctx->pc = 0x11C868u;
    SET_GPR_U32(ctx, 31, 0x11C870u);
    ctx->pc = 0x11C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C868u;
    // 0x11c86c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C888u, 0x11C868u, 0x11C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C870u;
label_11c870:
    // 0x11c870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C87Cu;
        // 0x11c880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C884u;
}
