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

// Function: entry_00147668
// Address: 0x147668 - 0x147684
void entry_00147668_0x147668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147668_0x147668");
#endif

    ctx->pc = 0x147668u;

    // 0x147668: 0xae430158  sw          $v1, 0x158($s2)
    ctx->pc = 0x147668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
    // 0x14766c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x147674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147678: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x147678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14767c: 0x3e00008  jr          $ra
    ctx->pc = 0x14767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14767Cu;
        // 0x147680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147684u;
}
