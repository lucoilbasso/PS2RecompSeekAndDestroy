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

// Function: entry_0019dc78
// Address: 0x19dc78 - 0x19dc84
void entry_0019dc78_0x19dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc78_0x19dc78");
#endif

    ctx->pc = 0x19dc78u;

    // 0x19dc78: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DC78u;
    {
        const bool branch_taken_0x19dc78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC78u;
        // 0x19dc7c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc78) {
            ctx->pc = 0x19DC84u;
            return;
        }
    }
    ctx->pc = 0x19DC80u;
    // 0x19dc80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x19dc84u;
}
