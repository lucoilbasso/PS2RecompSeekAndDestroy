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

// Function: entry_00178dc8
// Address: 0x178dc8 - 0x178de4
void entry_00178dc8_0x178dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178dc8_0x178dc8");
#endif

    switch (ctx->pc) {
        case 0x178dd0u: goto label_178dd0;
        default: break;
    }

    ctx->pc = 0x178dc8u;

    // 0x178dc8: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x178DC8u;
    SET_GPR_U32(ctx, 31, 0x178DD0u);
    ctx->pc = 0x178DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DC8u;
    // 0x178dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x178DC8u, 0x178DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DD0u;
label_178dd0:
    // 0x178dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x178DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DDCu;
        // 0x178de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DE4u;
}
