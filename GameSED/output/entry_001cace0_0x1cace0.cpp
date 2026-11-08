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

// Function: entry_001cace0
// Address: 0x1cace0 - 0x1cad08
void entry_001cace0_0x1cace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cace0_0x1cace0");
#endif

    ctx->pc = 0x1cace0u;

    // 0x1cace0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1cace4: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1cace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1cace8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1cacec: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1cacecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1cacf0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1cacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1cacf4: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x1cacf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cacf8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CACF8u;
    {
        const bool branch_taken_0x1cacf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACF8u;
        // 0x1cacfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacf8) {
            ctx->pc = 0x1CADB8u;
            return;
        }
    }
    ctx->pc = 0x1CAD00u;
    // 0x1cad00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cad00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad04: 0x252b0002  addiu       $t3, $t1, 0x2
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    ctx->pc = 0x1cad08u;
}
