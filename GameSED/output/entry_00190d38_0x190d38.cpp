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

// Function: entry_00190d38
// Address: 0x190d38 - 0x190d58
void entry_00190d38_0x190d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190d38_0x190d38");
#endif

    ctx->pc = 0x190d38u;

label_190d38:
    // 0x190d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190d3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x190d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190d40: 0x0  nop
    ctx->pc = 0x190d40u;
    // NOP
    // 0x190d44: 0x0  nop
    ctx->pc = 0x190d44u;
    // NOP
    // 0x190d48: 0x0  nop
    ctx->pc = 0x190d48u;
    // NOP
    // 0x190d4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190D4Cu;
    {
        const bool branch_taken_0x190d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d4c) {
            ctx->pc = 0x190D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d38;
        }
    }
    ctx->pc = 0x190D54u;
    // 0x190d54: 0x0  nop
    ctx->pc = 0x190d54u;
    // NOP
    ctx->pc = 0x190d58u;
}
