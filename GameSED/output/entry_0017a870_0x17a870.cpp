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

// Function: entry_0017a870
// Address: 0x17a870 - 0x17a884
void entry_0017a870_0x17a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a870_0x17a870");
#endif

    switch (ctx->pc) {
        case 0x17a878u: goto label_17a878;
        default: break;
    }

    ctx->pc = 0x17a870u;

    // 0x17a870: 0xc067260  jal         func_19C980
    ctx->pc = 0x17A870u;
    SET_GPR_U32(ctx, 31, 0x17A878u);
    ctx->pc = 0x17A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A870u;
    // 0x17a874: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x17A870u, 0x17A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A878u;
label_17a878:
    // 0x17a878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a87c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A87Cu;
        // 0x17a880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A884u;
}
