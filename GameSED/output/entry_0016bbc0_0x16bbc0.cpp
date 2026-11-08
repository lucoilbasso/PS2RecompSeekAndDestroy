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

// Function: entry_0016bbc0
// Address: 0x16bbc0 - 0x16bbe0
void entry_0016bbc0_0x16bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bbc0_0x16bbc0");
#endif

    ctx->pc = 0x16bbc0u;

label_16bbc0:
    // 0x16bbc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bbc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16bbc8: 0x0  nop
    ctx->pc = 0x16bbc8u;
    // NOP
    // 0x16bbcc: 0x0  nop
    ctx->pc = 0x16bbccu;
    // NOP
    // 0x16bbd0: 0x0  nop
    ctx->pc = 0x16bbd0u;
    // NOP
    // 0x16bbd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16BBD4u;
    {
        const bool branch_taken_0x16bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bbd4) {
            ctx->pc = 0x16BBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbc0;
        }
    }
    ctx->pc = 0x16BBDCu;
    // 0x16bbdc: 0x0  nop
    ctx->pc = 0x16bbdcu;
    // NOP
    ctx->pc = 0x16bbe0u;
}
