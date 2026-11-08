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

// Function: entry_0019b208
// Address: 0x19b208 - 0x19b230
void entry_0019b208_0x19b208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b208_0x19b208");
#endif

    ctx->pc = 0x19b208u;

label_19b208:
    // 0x19b208: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19b208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19b20c: 0x0  nop
    ctx->pc = 0x19b20cu;
    // NOP
    // 0x19b210: 0x0  nop
    ctx->pc = 0x19b210u;
    // NOP
    // 0x19b214: 0x0  nop
    ctx->pc = 0x19b214u;
    // NOP
    // 0x19b218: 0x0  nop
    ctx->pc = 0x19b218u;
    // NOP
    // 0x19b21c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B21Cu;
    {
        const bool branch_taken_0x19b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B21Cu;
        // 0x19b220: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b21c) {
            ctx->pc = 0x19B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b208;
        }
    }
    ctx->pc = 0x19B224u;
    // 0x19b224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B224u;
    {
        const bool branch_taken_0x19b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B224u;
        // 0x19b228: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b224) {
            ctx->pc = 0x19B250u;
            return;
        }
    }
    ctx->pc = 0x19B22Cu;
    // 0x19b22c: 0x0  nop
    ctx->pc = 0x19b22cu;
    // NOP
    ctx->pc = 0x19b230u;
}
