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

// Function: entry_001a7e00
// Address: 0x1a7e00 - 0x1a7e20
void entry_001a7e00_0x1a7e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7e00_0x1a7e00");
#endif

    switch (ctx->pc) {
        case 0x1a7e08u: goto label_1a7e08;
        default: break;
    }

    ctx->pc = 0x1a7e00u;

    // 0x1a7e00: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1A7E00u;
    SET_GPR_U32(ctx, 31, 0x1A7E08u);
    ctx->pc = 0x1A7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E00u;
    // 0x1a7e04: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1A7E00u, 0x1A7E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E08u;
label_1a7e08:
    // 0x1a7e08: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a7e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7e0c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1a7e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a7e10: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a7e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a7e14: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1a7e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a7e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E18u;
        // 0x1a7e1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7E20u;
}
