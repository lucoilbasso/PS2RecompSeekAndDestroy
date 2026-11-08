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

// Function: entry_0018e974
// Address: 0x18e974 - 0x18e990
void entry_0018e974_0x18e974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e974_0x18e974");
#endif

    ctx->pc = 0x18e974u;

    // 0x18e974: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18e978: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x18e97c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e980: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18e984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e988: 0x3e00008  jr          $ra
    ctx->pc = 0x18E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E988u;
        // 0x18e98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E990u;
}
