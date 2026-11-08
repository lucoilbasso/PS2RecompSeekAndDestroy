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

// Function: entry_0019e63c
// Address: 0x19e63c - 0x19e650
void entry_0019e63c_0x19e63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e63c_0x19e63c");
#endif

    switch (ctx->pc) {
        case 0x19e644u: goto label_19e644;
        default: break;
    }

    ctx->pc = 0x19e63cu;

    // 0x19e63c: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x19E63Cu;
    SET_GPR_U32(ctx, 31, 0x19E644u);
    ctx->pc = 0x19E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E63Cu;
    // 0x19e640: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x19E63Cu, 0x19E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E644u;
label_19e644:
    // 0x19e644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e648: 0x3e00008  jr          $ra
    ctx->pc = 0x19E648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E648u;
        // 0x19e64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E650u;
}
