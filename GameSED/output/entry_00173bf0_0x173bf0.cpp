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

// Function: entry_00173bf0
// Address: 0x173bf0 - 0x173bf8
void entry_00173bf0_0x173bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173bf0_0x173bf0");
#endif

    ctx->pc = 0x173bf0u;

    // 0x173bf0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x173BF0u;
    {
        const bool branch_taken_0x173bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF0u;
        // 0x173bf4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bf0) {
            ctx->pc = 0x173BC8u;
            return;
        }
    }
    ctx->pc = 0x173BF8u;
}
