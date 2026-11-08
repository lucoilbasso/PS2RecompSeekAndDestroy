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

// Function: entry_0017fe00
// Address: 0x17fe00 - 0x17fe18
void entry_0017fe00_0x17fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe00_0x17fe00");
#endif

    ctx->pc = 0x17fe00u;

    // 0x17fe00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17fe00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe04: 0x1a600043  blez        $s3, . + 4 + (0x43 << 2)
    ctx->pc = 0x17FE04u;
    {
        const bool branch_taken_0x17fe04 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x17FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE04u;
        // 0x17fe08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe04) {
            ctx->pc = 0x17FF14u;
            return;
        }
    }
    ctx->pc = 0x17FE0Cu;
    // 0x17fe0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x17fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x17fe10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17fe10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17fe14: 0x0  nop
    ctx->pc = 0x17fe14u;
    // NOP
    ctx->pc = 0x17fe18u;
}
