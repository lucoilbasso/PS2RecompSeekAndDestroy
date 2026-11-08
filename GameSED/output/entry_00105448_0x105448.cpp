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

// Function: entry_00105448
// Address: 0x105448 - 0x105458
void entry_00105448_0x105448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105448_0x105448");
#endif

    ctx->pc = 0x105448u;

    // 0x105448: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10544c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x10544Cu;
    {
        const bool branch_taken_0x10544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10544Cu;
        // 0x105450: 0xaf8288c8  sw          $v0, -0x7738($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10544c) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105454u;
    // 0x105454: 0x0  nop
    ctx->pc = 0x105454u;
    // NOP
    ctx->pc = 0x105458u;
}
