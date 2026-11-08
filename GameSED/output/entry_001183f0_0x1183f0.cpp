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

// Function: entry_001183f0
// Address: 0x1183f0 - 0x118410
void entry_001183f0_0x1183f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183f0_0x1183f0");
#endif

    ctx->pc = 0x1183f0u;

    // 0x1183f0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1183F0u;
    {
        const bool branch_taken_0x1183f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183F0u;
        // 0x1183f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183f0) {
            ctx->pc = 0x1183E0u;
            return;
        }
    }
    ctx->pc = 0x1183F8u;
    // 0x1183f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1183f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1183fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1183fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118408: 0x3e00008  jr          $ra
    ctx->pc = 0x118408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118408u;
        // 0x11840c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118410u;
}
