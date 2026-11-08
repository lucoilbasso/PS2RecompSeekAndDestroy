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

// Function: entry_00128940
// Address: 0x128940 - 0x128960
void entry_00128940_0x128940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128940_0x128940");
#endif

    ctx->pc = 0x128940u;

label_128940:
    // 0x128940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128944: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x128944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x128948: 0x0  nop
    ctx->pc = 0x128948u;
    // NOP
    // 0x12894c: 0x0  nop
    ctx->pc = 0x12894cu;
    // NOP
    // 0x128950: 0x0  nop
    ctx->pc = 0x128950u;
    // NOP
    // 0x128954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x128954u;
    {
        const bool branch_taken_0x128954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128954) {
            ctx->pc = 0x128940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128940;
        }
    }
    ctx->pc = 0x12895Cu;
    // 0x12895c: 0x0  nop
    ctx->pc = 0x12895cu;
    // NOP
    ctx->pc = 0x128960u;
}
