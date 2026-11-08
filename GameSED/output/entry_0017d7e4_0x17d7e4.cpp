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

// Function: entry_0017d7e4
// Address: 0x17d7e4 - 0x17d800
void entry_0017d7e4_0x17d7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d7e4_0x17d7e4");
#endif

    ctx->pc = 0x17d7e4u;

    // 0x17d7e4: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x17D7E4u;
    {
        const bool branch_taken_0x17d7e4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7E4u;
        // 0x17d7e8: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7e4) {
            ctx->pc = 0x17D854u;
            return;
        }
    }
    ctx->pc = 0x17D7ECu;
    // 0x17d7ec: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x17d7f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17d7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7f4: 0x34e74352  ori         $a3, $a3, 0x4352
    ctx->pc = 0x17d7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17234);
    // 0x17d7f8: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x17d7f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7fc: 0x0  nop
    ctx->pc = 0x17d7fcu;
    // NOP
    ctx->pc = 0x17d800u;
}
