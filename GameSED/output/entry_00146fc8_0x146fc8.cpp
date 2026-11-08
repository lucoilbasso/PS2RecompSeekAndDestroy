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

// Function: entry_00146fc8
// Address: 0x146fc8 - 0x146fe8
void entry_00146fc8_0x146fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146fc8_0x146fc8");
#endif

    ctx->pc = 0x146fc8u;

label_146fc8:
    // 0x146fc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146fcc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x146fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x146fd0: 0x0  nop
    ctx->pc = 0x146fd0u;
    // NOP
    // 0x146fd4: 0x0  nop
    ctx->pc = 0x146fd4u;
    // NOP
    // 0x146fd8: 0x0  nop
    ctx->pc = 0x146fd8u;
    // NOP
    // 0x146fdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146FDCu;
    {
        const bool branch_taken_0x146fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146fdc) {
            ctx->pc = 0x146FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fc8;
        }
    }
    ctx->pc = 0x146FE4u;
    // 0x146fe4: 0x0  nop
    ctx->pc = 0x146fe4u;
    // NOP
    ctx->pc = 0x146fe8u;
}
