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

// Function: entry_001abdc4
// Address: 0x1abdc4 - 0x1abde0
void entry_001abdc4_0x1abdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abdc4_0x1abdc4");
#endif

    ctx->pc = 0x1abdc4u;

    // 0x1abdc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1abdc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1abdc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1abdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abdcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1abdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abdd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1abdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abdd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABDD8u;
        // 0x1abddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABDE0u;
}
