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

// Function: entry_001739e8
// Address: 0x1739e8 - 0x173a18
void entry_001739e8_0x1739e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001739e8_0x1739e8");
#endif

    ctx->pc = 0x1739e8u;

    // 0x1739e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1739e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1739ec: 0x286b0002  slti        $t3, $v1, 0x2
    ctx->pc = 0x1739ecu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1739f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1739f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739f4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1739F4u;
    {
        const bool branch_taken_0x1739f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739f4) {
            ctx->pc = 0x173A48u;
            return;
        }
    }
    ctx->pc = 0x1739FCu;
    // 0x1739fc: 0x51600006  beql        $t3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1739FCu;
    {
        const bool branch_taken_0x1739fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739fc) {
            ctx->pc = 0x173A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739FCu;
            // 0x173a00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A18u;
            return;
        }
    }
    ctx->pc = 0x173A04u;
    // 0x173a04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x173A04u;
    {
        const bool branch_taken_0x173a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A04u;
        // 0x173a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a04) {
            ctx->pc = 0x173A28u;
            return;
        }
    }
    ctx->pc = 0x173A0Cu;
    // 0x173a0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x173A0Cu;
    {
        const bool branch_taken_0x173a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a0c) {
            ctx->pc = 0x173A54u;
            return;
        }
    }
    ctx->pc = 0x173A14u;
    // 0x173a14: 0x0  nop
    ctx->pc = 0x173a14u;
    // NOP
    ctx->pc = 0x173a18u;
}
