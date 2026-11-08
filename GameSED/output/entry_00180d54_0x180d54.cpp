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

// Function: entry_00180d54
// Address: 0x180d54 - 0x180d60
void entry_00180d54_0x180d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d54_0x180d54");
#endif

    ctx->pc = 0x180d54u;

    // 0x180d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180D54u;
    {
        const bool branch_taken_0x180d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D54u;
        // 0x180d58: 0xc5800014  lwc1        $f0, 0x14($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d54) {
            ctx->pc = 0x180D7Cu;
            return;
        }
    }
    ctx->pc = 0x180D5Cu;
    // 0x180d5c: 0x0  nop
    ctx->pc = 0x180d5cu;
    // NOP
    ctx->pc = 0x180d60u;
}
