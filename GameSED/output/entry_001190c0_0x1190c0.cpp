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

// Function: entry_001190c0
// Address: 0x1190c0 - 0x1190e4
void entry_001190c0_0x1190c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001190c0_0x1190c0");
#endif

    ctx->pc = 0x1190c0u;

    // 0x1190c0: 0x0  nop
    ctx->pc = 0x1190c0u;
    // NOP
    // 0x1190c4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1190C4u;
    {
        const bool branch_taken_0x1190c4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1190C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C4u;
        // 0x1190c8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c4) {
            ctx->pc = 0x1190B0u;
            return;
        }
    }
    ctx->pc = 0x1190CCu;
    // 0x1190cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1190ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1190d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1190d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1190d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1190d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1190d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1190dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1190DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190DCu;
        // 0x1190e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190E4u;
}
