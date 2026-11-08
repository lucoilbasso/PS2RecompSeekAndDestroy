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

// Function: entry_0011e384
// Address: 0x11e384 - 0x11e390
void entry_0011e384_0x11e384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e384_0x11e384");
#endif

    ctx->pc = 0x11e384u;

    // 0x11e384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E388u;
    {
        const bool branch_taken_0x11e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E388u;
        // 0x11e38c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e388) {
            ctx->pc = 0x11E3A0u;
            return;
        }
    }
    ctx->pc = 0x11E390u;
}
