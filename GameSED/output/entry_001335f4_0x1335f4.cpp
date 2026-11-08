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

// Function: entry_001335f4
// Address: 0x1335f4 - 0x133608
void entry_001335f4_0x1335f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001335f4_0x1335f4");
#endif

    ctx->pc = 0x1335f4u;

    // 0x1335f4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1335F4u;
    {
        const bool branch_taken_0x1335f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1335F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335F4u;
        // 0x1335f8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335f4) {
            ctx->pc = 0x133608u;
            return;
        }
    }
    ctx->pc = 0x1335FCu;
    // 0x1335fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1335FCu;
    {
        const bool branch_taken_0x1335fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335FCu;
        // 0x133600: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335fc) {
            ctx->pc = 0x133624u;
            return;
        }
    }
    ctx->pc = 0x133604u;
    // 0x133604: 0x0  nop
    ctx->pc = 0x133604u;
    // NOP
    ctx->pc = 0x133608u;
}
