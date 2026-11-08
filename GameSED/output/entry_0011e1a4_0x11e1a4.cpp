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

// Function: entry_0011e1a4
// Address: 0x11e1a4 - 0x11e1c0
void entry_0011e1a4_0x11e1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1a4_0x11e1a4");
#endif

    ctx->pc = 0x11e1a4u;

    // 0x11e1a4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E1A4u;
    {
        const bool branch_taken_0x11e1a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1A4u;
        // 0x11e1a8: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1a4) {
            ctx->pc = 0x11E1D0u;
            return;
        }
    }
    ctx->pc = 0x11E1ACu;
    // 0x11e1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11e1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11E1B4u;
    {
        const bool branch_taken_0x11e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1B4u;
        // 0x11e1b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1b4) {
            ctx->pc = 0x11E250u;
            return;
        }
    }
    ctx->pc = 0x11E1BCu;
    // 0x11e1bc: 0x0  nop
    ctx->pc = 0x11e1bcu;
    // NOP
    ctx->pc = 0x11e1c0u;
}
