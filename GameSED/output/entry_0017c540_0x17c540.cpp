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

// Function: entry_0017c540
// Address: 0x17c540 - 0x17c560
void entry_0017c540_0x17c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c540_0x17c540");
#endif

    ctx->pc = 0x17c540u;

label_17c540:
    // 0x17c540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c544: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x17c548: 0x0  nop
    ctx->pc = 0x17c548u;
    // NOP
    // 0x17c54c: 0x0  nop
    ctx->pc = 0x17c54cu;
    // NOP
    // 0x17c550: 0x0  nop
    ctx->pc = 0x17c550u;
    // NOP
    // 0x17c554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C554u;
    {
        const bool branch_taken_0x17c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c554) {
            ctx->pc = 0x17C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c540;
        }
    }
    ctx->pc = 0x17C55Cu;
    // 0x17c55c: 0x0  nop
    ctx->pc = 0x17c55cu;
    // NOP
    ctx->pc = 0x17c560u;
}
