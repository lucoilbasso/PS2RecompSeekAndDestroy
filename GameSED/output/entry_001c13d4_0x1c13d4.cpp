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

// Function: entry_001c13d4
// Address: 0x1c13d4 - 0x1c13fc
void entry_001c13d4_0x1c13d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c13d4_0x1c13d4");
#endif

    ctx->pc = 0x1c13d4u;

    // 0x1c13d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c13d8: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C13D8u;
    {
        const bool branch_taken_0x1c13d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13D8u;
        // 0x1c13dc: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13d8) {
            ctx->pc = 0x1C13FCu;
            return;
        }
    }
    ctx->pc = 0x1C13E0u;
    // 0x1c13e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c13e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c13e8: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x1c13e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1c13ec: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x1c13ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1c13f0: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x1c13f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x1c13f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13F4u;
    {
        const bool branch_taken_0x1c13f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F4u;
        // 0x1c13f8: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13f4) {
            ctx->pc = 0x1C1410u;
            return;
        }
    }
    ctx->pc = 0x1C13FCu;
}
