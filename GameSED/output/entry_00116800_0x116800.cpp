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

// Function: entry_00116800
// Address: 0x116800 - 0x11681c
void entry_00116800_0x116800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116800_0x116800");
#endif

    ctx->pc = 0x116800u;

    // 0x116800: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116800u;
    {
        const bool branch_taken_0x116800 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x116804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116800u;
        // 0x116804: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116800) {
            ctx->pc = 0x1167E8u;
            return;
        }
    }
    ctx->pc = 0x116808u;
    // 0x116808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11680c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11680cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116814: 0x3e00008  jr          $ra
    ctx->pc = 0x116814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116814u;
        // 0x116818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11681Cu;
}
