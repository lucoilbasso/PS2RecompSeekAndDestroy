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

// Function: entry_00193890
// Address: 0x193890 - 0x1938b0
void entry_00193890_0x193890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193890_0x193890");
#endif

    ctx->pc = 0x193890u;

    // 0x193890: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x193890u;
    {
        const bool branch_taken_0x193890 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x193894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193890u;
        // 0x193894: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193890) {
            ctx->pc = 0x193880u;
            return;
        }
    }
    ctx->pc = 0x193898u;
    // 0x193898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19389c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19389cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1938a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1938a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1938a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1938a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1938a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1938A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938A8u;
        // 0x1938ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1938B0u;
}
