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

// Function: entry_001145dc
// Address: 0x1145dc - 0x1145f8
void entry_001145dc_0x1145dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001145dc_0x1145dc");
#endif

    ctx->pc = 0x1145dcu;

    // 0x1145dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1145dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1145e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1145e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1145e4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1145E4u;
    {
        const bool branch_taken_0x1145e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E4u;
        // 0x1145e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e4) {
            ctx->pc = 0x11462Cu;
            return;
        }
    }
    ctx->pc = 0x1145ECu;
    // 0x1145ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1145ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1145f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1145f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1145f4: 0x24430730  addiu       $v1, $v0, 0x730
    ctx->pc = 0x1145f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    ctx->pc = 0x1145f8u;
}
