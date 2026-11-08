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

// Function: entry_00178a30
// Address: 0x178a30 - 0x178a40
void entry_00178a30_0x178a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a30_0x178a30");
#endif

    ctx->pc = 0x178a30u;

    // 0x178a30: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178A30u;
    {
        const bool branch_taken_0x178a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A30u;
        // 0x178a34: 0x3c11e000  lui         $s1, 0xE000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57344 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a30) {
            ctx->pc = 0x178A58u;
            return;
        }
    }
    ctx->pc = 0x178A38u;
    // 0x178a38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x178A38u;
    {
        const bool branch_taken_0x178a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A38u;
        // 0x178a3c: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a38) {
            ctx->pc = 0x178A7Cu;
            return;
        }
    }
    ctx->pc = 0x178A40u;
}
