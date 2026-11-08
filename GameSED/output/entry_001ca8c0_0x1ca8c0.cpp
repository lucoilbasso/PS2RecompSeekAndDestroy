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

// Function: entry_001ca8c0
// Address: 0x1ca8c0 - 0x1ca8f0
void entry_001ca8c0_0x1ca8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca8c0_0x1ca8c0");
#endif

    ctx->pc = 0x1ca8c0u;

    // 0x1ca8c0: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1CA8C0u;
    {
        const bool branch_taken_0x1ca8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8C0u;
        // 0x1ca8c4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8c0) {
            ctx->pc = 0x1CABF0u;
            return;
        }
    }
    ctx->pc = 0x1CA8C8u;
    // 0x1ca8c8: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca8cc: 0x2447045c  addiu       $a3, $v0, 0x45C
    ctx->pc = 0x1ca8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1116));
    // 0x1ca8d0: 0x11c00029  beqz        $t6, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CA8D0u;
    {
        const bool branch_taken_0x1ca8d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8D0u;
        // 0x1ca8d4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8d0) {
            ctx->pc = 0x1CA978u;
            return;
        }
    }
    ctx->pc = 0x1CA8D8u;
    // 0x1ca8d8: 0x8e380000  lw          $t8, 0x0($s1)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca8dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ca8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e4: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1ca8e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8e8: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x1ca8e8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca8ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca8f0u;
}
