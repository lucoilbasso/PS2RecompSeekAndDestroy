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

// Function: entry_00176818
// Address: 0x176818 - 0x176838
void entry_00176818_0x176818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176818_0x176818");
#endif

    ctx->pc = 0x176818u;

label_176818:
    // 0x176818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17681c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176820: 0x0  nop
    ctx->pc = 0x176820u;
    // NOP
    // 0x176824: 0x0  nop
    ctx->pc = 0x176824u;
    // NOP
    // 0x176828: 0x0  nop
    ctx->pc = 0x176828u;
    // NOP
    // 0x17682c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17682Cu;
    {
        const bool branch_taken_0x17682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17682c) {
            ctx->pc = 0x176818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176818;
        }
    }
    ctx->pc = 0x176834u;
    // 0x176834: 0x0  nop
    ctx->pc = 0x176834u;
    // NOP
    ctx->pc = 0x176838u;
}
