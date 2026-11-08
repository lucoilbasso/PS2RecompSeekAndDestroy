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

// Function: entry_001c0020
// Address: 0x1c0020 - 0x1c0040
void entry_001c0020_0x1c0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0020_0x1c0020");
#endif

    ctx->pc = 0x1c0020u;

    // 0x1c0020: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0024: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0028: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c002c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c002cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c0030: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C0030u;
    {
        const bool branch_taken_0x1c0030 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0030u;
        // 0x1c0034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0030) {
            ctx->pc = 0x1BFFACu;
            return;
        }
    }
    ctx->pc = 0x1C0038u;
    // 0x1c0038: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0040u;
}
