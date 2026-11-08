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

// Function: entry_001749b8
// Address: 0x1749b8 - 0x1749dc
void entry_001749b8_0x1749b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001749b8_0x1749b8");
#endif

    ctx->pc = 0x1749b8u;

label_1749b8:
    // 0x1749b8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1749b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1749bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1749bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1749c0: 0x0  nop
    ctx->pc = 0x1749c0u;
    // NOP
    // 0x1749c4: 0x0  nop
    ctx->pc = 0x1749c4u;
    // NOP
    // 0x1749c8: 0x0  nop
    ctx->pc = 0x1749c8u;
    // NOP
    // 0x1749cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1749CCu;
    {
        const bool branch_taken_0x1749cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749cc) {
            ctx->pc = 0x1749B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1749b8;
        }
    }
    ctx->pc = 0x1749D4u;
    // 0x1749d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1749D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1749D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1749DCu;
}
