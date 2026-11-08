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

// Function: entry_00190088
// Address: 0x190088 - 0x1900a8
void entry_00190088_0x190088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190088_0x190088");
#endif

    ctx->pc = 0x190088u;

label_190088:
    // 0x190088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19008c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190090: 0x0  nop
    ctx->pc = 0x190090u;
    // NOP
    // 0x190094: 0x0  nop
    ctx->pc = 0x190094u;
    // NOP
    // 0x190098: 0x0  nop
    ctx->pc = 0x190098u;
    // NOP
    // 0x19009c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19009Cu;
    {
        const bool branch_taken_0x19009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19009c) {
            ctx->pc = 0x190088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190088;
        }
    }
    ctx->pc = 0x1900A4u;
    // 0x1900a4: 0x0  nop
    ctx->pc = 0x1900a4u;
    // NOP
    ctx->pc = 0x1900a8u;
}
