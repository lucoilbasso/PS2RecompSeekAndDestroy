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

// Function: waitFinish
// Address: 0x1749a8 - 0x1749dc
void waitFinish_0x1749a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitFinish_0x1749a8");
#endif

    switch (ctx->pc) {
        case 0x1749b8u: goto label_1749b8;
        default: break;
    }

    ctx->pc = 0x1749a8u;

    // 0x1749a8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1749a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1749ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1749acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1749b0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1749b4: 0x0  nop
    ctx->pc = 0x1749b4u;
    // NOP
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
