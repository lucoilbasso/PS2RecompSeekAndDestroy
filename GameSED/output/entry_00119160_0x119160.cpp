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

// Function: entry_00119160
// Address: 0x119160 - 0x119184
void entry_00119160_0x119160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119160_0x119160");
#endif

    ctx->pc = 0x119160u;

    // 0x119160: 0x0  nop
    ctx->pc = 0x119160u;
    // NOP
    // 0x119164: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119164u;
    {
        const bool branch_taken_0x119164 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x119168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119164u;
        // 0x119168: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119164) {
            ctx->pc = 0x119150u;
            return;
        }
    }
    ctx->pc = 0x11916Cu;
    // 0x11916c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11916cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119178: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x119178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11917c: 0x3e00008  jr          $ra
    ctx->pc = 0x11917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11917Cu;
        // 0x119180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119184u;
}
