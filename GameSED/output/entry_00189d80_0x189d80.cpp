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

// Function: entry_00189d80
// Address: 0x189d80 - 0x189d9c
void entry_00189d80_0x189d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189d80_0x189d80");
#endif

    ctx->pc = 0x189d80u;

label_189d80:
    // 0x189d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189d84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x189d88: 0x0  nop
    ctx->pc = 0x189d88u;
    // NOP
    // 0x189d8c: 0x0  nop
    ctx->pc = 0x189d8cu;
    // NOP
    // 0x189d90: 0x0  nop
    ctx->pc = 0x189d90u;
    // NOP
    // 0x189d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189D94u;
    {
        const bool branch_taken_0x189d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189d94) {
            ctx->pc = 0x189D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189d80;
        }
    }
    ctx->pc = 0x189D9Cu;
}
