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

// Function: entry_00165728
// Address: 0x165728 - 0x165740
void entry_00165728_0x165728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165728_0x165728");
#endif

    ctx->pc = 0x165728u;

    // 0x165728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x165728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x16572c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16572Cu;
    {
        const bool branch_taken_0x16572c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x165730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16572Cu;
        // 0x165730: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16572c) {
            ctx->pc = 0x165740u;
            return;
        }
    }
    ctx->pc = 0x165734u;
    // 0x165734: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165734u;
    {
        const bool branch_taken_0x165734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165734u;
        // 0x165738: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165734) {
            ctx->pc = 0x165744u;
            return;
        }
    }
    ctx->pc = 0x16573Cu;
    // 0x16573c: 0x0  nop
    ctx->pc = 0x16573cu;
    // NOP
    ctx->pc = 0x165740u;
}
