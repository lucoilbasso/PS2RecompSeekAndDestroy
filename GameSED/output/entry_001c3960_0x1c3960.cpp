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

// Function: entry_001c3960
// Address: 0x1c3960 - 0x1c3998
void entry_001c3960_0x1c3960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3960_0x1c3960");
#endif

    ctx->pc = 0x1c3960u;

label_1c3960:
    // 0x1c3960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3964: 0x0  nop
    ctx->pc = 0x1c3964u;
    // NOP
    // 0x1c3968: 0x0  nop
    ctx->pc = 0x1c3968u;
    // NOP
    // 0x1c396c: 0x0  nop
    ctx->pc = 0x1c396cu;
    // NOP
    // 0x1c3970: 0x0  nop
    ctx->pc = 0x1c3970u;
    // NOP
    // 0x1c3974: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C3974u;
    {
        const bool branch_taken_0x1c3974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c3974) {
            ctx->pc = 0x1C3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3960;
        }
    }
    ctx->pc = 0x1C397Cu;
    // 0x1c397c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3980: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1c3980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3984: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c3984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3988: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1c3988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c398c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c398cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3990: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3990u;
        // 0x1c3994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3998u;
}
