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

// Function: entry_001b99c4
// Address: 0x1b99c4 - 0x1b99f0
void entry_001b99c4_0x1b99c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b99c4_0x1b99c4");
#endif

    ctx->pc = 0x1b99c4u;

    // 0x1b99c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b99c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b99c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b99cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b99d0: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x1b99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
    // 0x1b99d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b99d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b99dc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1b99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b99e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B99E0u;
    {
        const bool branch_taken_0x1b99e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99E0u;
        // 0x1b99e4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99e0) {
            ctx->pc = 0x1B99F0u;
            return;
        }
    }
    ctx->pc = 0x1B99E8u;
    // 0x1b99e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B99E8u;
    {
        const bool branch_taken_0x1b99e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99E8u;
        // 0x1b99ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99e8) {
            ctx->pc = 0x1B99F8u;
            return;
        }
    }
    ctx->pc = 0x1B99F0u;
}
