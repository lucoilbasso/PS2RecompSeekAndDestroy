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

// Function: entry_001320c0
// Address: 0x1320c0 - 0x1320f4
void entry_001320c0_0x1320c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001320c0_0x1320c0");
#endif

    ctx->pc = 0x1320c0u;

    // 0x1320c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1320c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1320c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1320c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1320c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1320cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1320d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1320d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320d4: 0x8e040158  lw          $a0, 0x158($s0)
    ctx->pc = 0x1320d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1320d8: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1320D8u;
    {
        const bool branch_taken_0x1320d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320D8u;
        // 0x1320dc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320d8) {
            ctx->pc = 0x132134u;
            return;
        }
    }
    ctx->pc = 0x1320E0u;
    // 0x1320e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1320e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1320e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320e8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1320E8u;
    {
        const bool branch_taken_0x1320e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1320ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1320E8u;
        // 0x1320ec: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1320e8) {
            ctx->pc = 0x1320F4u;
            return;
        }
    }
    ctx->pc = 0x1320F0u;
    // 0x1320f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1320f4u;
}
