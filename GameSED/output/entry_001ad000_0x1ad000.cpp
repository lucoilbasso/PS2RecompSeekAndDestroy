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

// Function: entry_001ad000
// Address: 0x1ad000 - 0x1ad018
void entry_001ad000_0x1ad000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad000_0x1ad000");
#endif

    ctx->pc = 0x1ad000u;

    // 0x1ad000: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ad004: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1ad004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1ad008: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD008u;
    {
        const bool branch_taken_0x1ad008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad008) {
            ctx->pc = 0x1AD00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD008u;
            // 0x1ad00c: 0x78820000  lq          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD018u;
            return;
        }
    }
    ctx->pc = 0x1AD010u;
    // 0x1ad010: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD010u;
        // 0x1ad014: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD018u;
}
