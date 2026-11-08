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

// Function: entry_00107bd8
// Address: 0x107bd8 - 0x107be8
void entry_00107bd8_0x107bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107bd8_0x107bd8");
#endif

    ctx->pc = 0x107bd8u;

    // 0x107bd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x107bdc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107BDCu;
    {
        const bool branch_taken_0x107bdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x107BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BDCu;
        // 0x107be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bdc) {
            ctx->pc = 0x107C0Cu;
            return;
        }
    }
    ctx->pc = 0x107BE4u;
    // 0x107be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107be8u;
}
