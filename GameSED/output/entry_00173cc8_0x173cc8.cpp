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

// Function: entry_00173cc8
// Address: 0x173cc8 - 0x173cd0
void entry_00173cc8_0x173cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cc8_0x173cc8");
#endif

    ctx->pc = 0x173cc8u;

    // 0x173cc8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x173CC8u;
    {
        const bool branch_taken_0x173cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CC8u;
        // 0x173ccc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cc8) {
            ctx->pc = 0x173CB0u;
            return;
        }
    }
    ctx->pc = 0x173CD0u;
}
