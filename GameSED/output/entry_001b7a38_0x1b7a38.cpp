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

// Function: entry_001b7a38
// Address: 0x1b7a38 - 0x1b7a68
void entry_001b7a38_0x1b7a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a38_0x1b7a38");
#endif

    ctx->pc = 0x1b7a38u;

label_1b7a38:
    // 0x1b7a38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b7a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b7a3c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b7a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b7a40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b7a44: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1b7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b7a48: 0x0  nop
    ctx->pc = 0x1b7a48u;
    // NOP
    // 0x1b7a4c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7A4Cu;
    {
        const bool branch_taken_0x1b7a4c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b7a4c) {
            ctx->pc = 0x1B7A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a38;
        }
    }
    ctx->pc = 0x1B7A54u;
    // 0x1b7a54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7a58: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1b7a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b7a5c: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x1b7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1b7a60: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1b7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x1b7a64: 0x0  nop
    ctx->pc = 0x1b7a64u;
    // NOP
    ctx->pc = 0x1b7a68u;
}
