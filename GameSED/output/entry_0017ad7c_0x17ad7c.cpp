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

// Function: entry_0017ad7c
// Address: 0x17ad7c - 0x17ada0
void entry_0017ad7c_0x17ad7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ad7c_0x17ad7c");
#endif

    ctx->pc = 0x17ad7cu;

    // 0x17ad7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17ad7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17ad80: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17AD80u;
    {
        const bool branch_taken_0x17ad80 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD80u;
        // 0x17ad84: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad80) {
            ctx->pc = 0x17AD38u;
            return;
        }
    }
    ctx->pc = 0x17AD88u;
    // 0x17ad88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17ad88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ad8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17ad8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ad90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17ad90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ad94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD98u;
        // 0x17ad9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADA0u;
}
