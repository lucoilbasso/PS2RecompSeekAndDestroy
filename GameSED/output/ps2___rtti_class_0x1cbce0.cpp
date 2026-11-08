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

// Function: __rtti_class
// Address: 0x1cbce0 - 0x1cbd04
void ps2___rtti_class_0x1cbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_class_0x1cbce0");
#endif

    ctx->pc = 0x1cbce0u;

    // 0x1cbce0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBCE0u;
    {
        const bool branch_taken_0x1cbce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCE0u;
        // 0x1cbce4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbce0) {
            ctx->pc = 0x1CBCFCu;
            goto label_1cbcfc;
        }
    }
    ctx->pc = 0x1CBCE8u;
    // 0x1cbce8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cbce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1cbcec: 0x24420be8  addiu       $v0, $v0, 0xBE8
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3048));
    // 0x1cbcf0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cbcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cbcf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1cbcf8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cbcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1cbcfc:
    // 0x1cbcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBD04u;
}
