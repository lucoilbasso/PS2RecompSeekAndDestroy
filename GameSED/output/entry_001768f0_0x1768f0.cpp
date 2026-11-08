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

// Function: entry_001768f0
// Address: 0x1768f0 - 0x176910
void entry_001768f0_0x1768f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001768f0_0x1768f0");
#endif

    ctx->pc = 0x1768f0u;

label_1768f0:
    // 0x1768f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1768f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1768f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1768f8: 0x0  nop
    ctx->pc = 0x1768f8u;
    // NOP
    // 0x1768fc: 0x0  nop
    ctx->pc = 0x1768fcu;
    // NOP
    // 0x176900: 0x0  nop
    ctx->pc = 0x176900u;
    // NOP
    // 0x176904: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176904u;
    {
        const bool branch_taken_0x176904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176904) {
            ctx->pc = 0x1768F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1768f0;
        }
    }
    ctx->pc = 0x17690Cu;
    // 0x17690c: 0x0  nop
    ctx->pc = 0x17690cu;
    // NOP
    ctx->pc = 0x176910u;
}
