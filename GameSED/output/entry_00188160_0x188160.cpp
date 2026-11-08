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

// Function: entry_00188160
// Address: 0x188160 - 0x188180
void entry_00188160_0x188160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188160_0x188160");
#endif

    ctx->pc = 0x188160u;

label_188160:
    // 0x188160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188164: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x188164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x188168: 0x0  nop
    ctx->pc = 0x188168u;
    // NOP
    // 0x18816c: 0x0  nop
    ctx->pc = 0x18816cu;
    // NOP
    // 0x188170: 0x0  nop
    ctx->pc = 0x188170u;
    // NOP
    // 0x188174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188174u;
    {
        const bool branch_taken_0x188174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188174) {
            ctx->pc = 0x188160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188160;
        }
    }
    ctx->pc = 0x18817Cu;
    // 0x18817c: 0x0  nop
    ctx->pc = 0x18817cu;
    // NOP
    ctx->pc = 0x188180u;
}
