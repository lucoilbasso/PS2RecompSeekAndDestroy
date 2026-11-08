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

// Function: entry_001c034c
// Address: 0x1c034c - 0x1c036c
void entry_001c034c_0x1c034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c034c_0x1c034c");
#endif

    ctx->pc = 0x1c034cu;

    // 0x1c034c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1c0350: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1c0354: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0358: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x1c0358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1c035c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C035Cu;
    {
        const bool branch_taken_0x1c035c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c035c) {
            ctx->pc = 0x1C02D4u;
            return;
        }
    }
    ctx->pc = 0x1C0364u;
    // 0x1c0364: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C036Cu;
}
