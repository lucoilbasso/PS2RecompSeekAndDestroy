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

// Function: entry_001571d8
// Address: 0x1571d8 - 0x1571f4
void entry_001571d8_0x1571d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001571d8_0x1571d8");
#endif

    ctx->pc = 0x1571d8u;

    // 0x1571d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1571d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1571dc: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x1571e0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1571e4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1571e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1571e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1571e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571ec: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1571ECu;
    {
        const bool branch_taken_0x1571ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1571F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1571ECu;
        // 0x1571f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571ec) {
            ctx->pc = 0x157204u;
            return;
        }
    }
    ctx->pc = 0x1571F4u;
}
