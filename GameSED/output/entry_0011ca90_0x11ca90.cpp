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

// Function: entry_0011ca90
// Address: 0x11ca90 - 0x11caa0
void entry_0011ca90_0x11ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca90_0x11ca90");
#endif

    ctx->pc = 0x11ca90u;

    // 0x11ca90: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CA90u;
    {
        const bool branch_taken_0x11ca90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA90u;
        // 0x11ca94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca90) {
            ctx->pc = 0x11CAD8u;
            return;
        }
    }
    ctx->pc = 0x11CA98u;
    // 0x11ca98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11CA98u;
    {
        const bool branch_taken_0x11ca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA98u;
        // 0x11ca9c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca98) {
            ctx->pc = 0x11CAE8u;
            return;
        }
    }
    ctx->pc = 0x11CAA0u;
}
