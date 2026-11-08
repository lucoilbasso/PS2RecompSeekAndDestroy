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

// Function: entry_001069e8
// Address: 0x1069e8 - 0x106a08
void entry_001069e8_0x1069e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001069e8_0x1069e8");
#endif

    ctx->pc = 0x1069e8u;

    // 0x1069e8: 0x621fff3  bgez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1069E8u;
    {
        const bool branch_taken_0x1069e8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1069ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069E8u;
        // 0x1069ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069e8) {
            ctx->pc = 0x1069B8u;
            return;
        }
    }
    ctx->pc = 0x1069F0u;
    // 0x1069f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1069f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1069f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1069f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1069f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1069f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1069fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1069fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x106a00: 0x3e00008  jr          $ra
    ctx->pc = 0x106A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A00u;
        // 0x106a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A08u;
}
