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

// Function: entry_001a3738
// Address: 0x1a3738 - 0x1a3748
void entry_001a3738_0x1a3738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3738_0x1a3738");
#endif

    ctx->pc = 0x1a3738u;

    // 0x1a3738: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3738u;
    {
        const bool branch_taken_0x1a3738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3738) {
            ctx->pc = 0x1A373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3738u;
            // 0x1a373c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3748u;
            return;
        }
    }
    ctx->pc = 0x1A3740u;
    // 0x1a3740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3740u;
    {
        const bool branch_taken_0x1a3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3740u;
        // 0x1a3744: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3740) {
            ctx->pc = 0x1A3758u;
            return;
        }
    }
    ctx->pc = 0x1A3748u;
}
