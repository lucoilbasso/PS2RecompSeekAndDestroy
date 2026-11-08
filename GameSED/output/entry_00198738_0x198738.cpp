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

// Function: entry_00198738
// Address: 0x198738 - 0x198740
void entry_00198738_0x198738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198738_0x198738");
#endif

    ctx->pc = 0x198738u;

    // 0x198738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198738u;
    {
        const bool branch_taken_0x198738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198738u;
        // 0x19873c: 0xe60203e0  swc1        $f2, 0x3E0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198738) {
            ctx->pc = 0x19874Cu;
            return;
        }
    }
    ctx->pc = 0x198740u;
}
