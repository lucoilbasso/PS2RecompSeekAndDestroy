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

// Function: entry_0011e374
// Address: 0x11e374 - 0x11e384
void entry_0011e374_0x11e374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e374_0x11e374");
#endif

    ctx->pc = 0x11e374u;

    // 0x11e374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e37c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E37Cu;
    {
        const bool branch_taken_0x11e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E37Cu;
        // 0x11e380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e37c) {
            ctx->pc = 0x11E39Cu;
            return;
        }
    }
    ctx->pc = 0x11E384u;
}
