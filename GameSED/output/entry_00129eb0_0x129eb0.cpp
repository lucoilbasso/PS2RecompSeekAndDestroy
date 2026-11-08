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

// Function: entry_00129eb0
// Address: 0x129eb0 - 0x129ed0
void entry_00129eb0_0x129eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129eb0_0x129eb0");
#endif

    ctx->pc = 0x129eb0u;

label_129eb0:
    // 0x129eb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129eb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x129eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x129eb8: 0x0  nop
    ctx->pc = 0x129eb8u;
    // NOP
    // 0x129ebc: 0x0  nop
    ctx->pc = 0x129ebcu;
    // NOP
    // 0x129ec0: 0x0  nop
    ctx->pc = 0x129ec0u;
    // NOP
    // 0x129ec4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129EC4u;
    {
        const bool branch_taken_0x129ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ec4) {
            ctx->pc = 0x129EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129ECCu;
    // 0x129ecc: 0x0  nop
    ctx->pc = 0x129eccu;
    // NOP
    ctx->pc = 0x129ed0u;
}
