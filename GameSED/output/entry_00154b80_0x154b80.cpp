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

// Function: entry_00154b80
// Address: 0x154b80 - 0x154b88
void entry_00154b80_0x154b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154b80_0x154b80");
#endif

    ctx->pc = 0x154b80u;

    // 0x154b80: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0xae221244  sw          $v0, 0x1244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154B88u;
}
