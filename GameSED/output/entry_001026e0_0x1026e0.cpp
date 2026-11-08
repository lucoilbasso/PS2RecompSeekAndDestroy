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

// Function: entry_001026e0
// Address: 0x1026e0 - 0x102708
void entry_001026e0_0x1026e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001026e0_0x1026e0");
#endif

    ctx->pc = 0x1026e0u;

    // 0x1026e0: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1026E0u;
    {
        const bool branch_taken_0x1026e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026E0u;
        // 0x1026e4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026e0) {
            ctx->pc = 0x102758u;
            return;
        }
    }
    ctx->pc = 0x1026E8u;
    // 0x1026e8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1026e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1026ec: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1026ECu;
    {
        const bool branch_taken_0x1026ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1026F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026ECu;
        // 0x1026f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026ec) {
            ctx->pc = 0x10272Cu;
            return;
        }
    }
    ctx->pc = 0x1026F4u;
    // 0x1026f4: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1026f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1026f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1026f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1026fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1026fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102700: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x102700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102704: 0x0  nop
    ctx->pc = 0x102704u;
    // NOP
    ctx->pc = 0x102708u;
}
