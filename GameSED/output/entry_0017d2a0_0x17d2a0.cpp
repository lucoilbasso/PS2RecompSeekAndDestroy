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

// Function: entry_0017d2a0
// Address: 0x17d2a0 - 0x17d2c0
void entry_0017d2a0_0x17d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d2a0_0x17d2a0");
#endif

    ctx->pc = 0x17d2a0u;

    // 0x17d2a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d2a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17d2a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2ac: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D2ACu;
    {
        const bool branch_taken_0x17d2ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2ACu;
        // 0x17d2b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2ac) {
            ctx->pc = 0x17D314u;
            return;
        }
    }
    ctx->pc = 0x17D2B4u;
    // 0x17d2b4: 0x2627000a  addiu       $a3, $s1, 0xA
    ctx->pc = 0x17d2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
    // 0x17d2b8: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x17d2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x17d2bc: 0x0  nop
    ctx->pc = 0x17d2bcu;
    // NOP
    ctx->pc = 0x17d2c0u;
}
