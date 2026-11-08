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

// Function: entry_00193260
// Address: 0x193260 - 0x193280
void entry_00193260_0x193260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193260_0x193260");
#endif

    ctx->pc = 0x193260u;

label_193260:
    // 0x193260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193264: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x193264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x193268: 0x0  nop
    ctx->pc = 0x193268u;
    // NOP
    // 0x19326c: 0x0  nop
    ctx->pc = 0x19326cu;
    // NOP
    // 0x193270: 0x0  nop
    ctx->pc = 0x193270u;
    // NOP
    // 0x193274: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x193274u;
    {
        const bool branch_taken_0x193274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193274) {
            ctx->pc = 0x193260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193260;
        }
    }
    ctx->pc = 0x19327Cu;
    // 0x19327c: 0x0  nop
    ctx->pc = 0x19327cu;
    // NOP
    ctx->pc = 0x193280u;
}
