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

// Function: entry_00109220
// Address: 0x109220 - 0x109234
void entry_00109220_0x109220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109220_0x109220");
#endif

    ctx->pc = 0x109220u;

    // 0x109220: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109224: 0x0  nop
    ctx->pc = 0x109224u;
    // NOP
    // 0x109228: 0x0  nop
    ctx->pc = 0x109228u;
    // NOP
    // 0x10922c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10922Cu;
    {
        const bool branch_taken_0x10922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10922Cu;
        // 0x109230: 0xa42825  or          $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10922c) {
            ctx->pc = 0x109210u;
            return;
        }
    }
    ctx->pc = 0x109234u;
}
