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

// Function: entry_00102a98
// Address: 0x102a98 - 0x102aa4
void entry_00102a98_0x102a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102a98_0x102a98");
#endif

    ctx->pc = 0x102a98u;

    // 0x102a98: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x102A98u;
    {
        const bool branch_taken_0x102a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102a98) {
            ctx->pc = 0x102A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102A98u;
            // 0x102a9c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BF0u;
            return;
        }
    }
    ctx->pc = 0x102AA0u;
    // 0x102aa0: 0x329200ff  andi        $s2, $s4, 0xFF
    ctx->pc = 0x102aa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x102aa4u;
}
