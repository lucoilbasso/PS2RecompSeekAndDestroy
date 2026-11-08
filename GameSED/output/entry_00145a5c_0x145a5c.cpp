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

// Function: entry_00145a5c
// Address: 0x145a5c - 0x145a7c
void entry_00145a5c_0x145a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145a5c_0x145a5c");
#endif

    ctx->pc = 0x145a5cu;

    // 0x145a5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x145a60: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x145A60u;
    {
        const bool branch_taken_0x145a60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x145a60) {
            ctx->pc = 0x145A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145A60u;
            // 0x145a64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145A40u;
            return;
        }
    }
    ctx->pc = 0x145A68u;
    // 0x145a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145a74: 0x3e00008  jr          $ra
    ctx->pc = 0x145A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A74u;
        // 0x145a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145A7Cu;
}
