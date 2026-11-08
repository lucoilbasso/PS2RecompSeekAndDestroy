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

// Function: entry_00122fe8
// Address: 0x122fe8 - 0x123008
void entry_00122fe8_0x122fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122fe8_0x122fe8");
#endif

    ctx->pc = 0x122fe8u;

label_122fe8:
    // 0x122fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122fec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x122fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x122ff0: 0x0  nop
    ctx->pc = 0x122ff0u;
    // NOP
    // 0x122ff4: 0x0  nop
    ctx->pc = 0x122ff4u;
    // NOP
    // 0x122ff8: 0x0  nop
    ctx->pc = 0x122ff8u;
    // NOP
    // 0x122ffc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x122FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122fe8;
        }
    }
    ctx->pc = 0x123004u;
    // 0x123004: 0x0  nop
    ctx->pc = 0x123004u;
    // NOP
    ctx->pc = 0x123008u;
}
