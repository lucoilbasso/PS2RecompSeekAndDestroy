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

// Function: entry_001a60d0
// Address: 0x1a60d0 - 0x1a60f8
void entry_001a60d0_0x1a60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60d0_0x1a60d0");
#endif

    ctx->pc = 0x1a60d0u;

    // 0x1a60d0: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1a60d4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a60d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a60dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a60e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a60e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a60ec: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a60ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a60f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A60F0u;
    {
        const bool branch_taken_0x1a60f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60F0u;
        // 0x1a60f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60f0) {
            ctx->pc = 0x1A6104u;
            return;
        }
    }
    ctx->pc = 0x1A60F8u;
}
