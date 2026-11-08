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

// Function: entry_00111778
// Address: 0x111778 - 0x111788
void entry_00111778_0x111778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111778_0x111778");
#endif

    ctx->pc = 0x111778u;

    // 0x111778: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x111778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x11177c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x111780u;
    {
        const bool branch_taken_0x111780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111780u;
        // 0x111784: 0x247400d0  addiu       $s4, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111780) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111788u;
}
