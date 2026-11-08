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

// Function: entry_001c70c0
// Address: 0x1c70c0 - 0x1c70e8
void entry_001c70c0_0x1c70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c70c0_0x1c70c0");
#endif

    ctx->pc = 0x1c70c0u;

    // 0x1c70c0: 0x8fa80240  lw          $t0, 0x240($sp)
    ctx->pc = 0x1c70c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1c70c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c70c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c8: 0x5000014  bltz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C70C8u;
    {
        const bool branch_taken_0x1c70c8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1C70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70C8u;
        // 0x1c70cc: 0x1121021  addu        $v0, $t0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c8) {
            ctx->pc = 0x1C711Cu;
            return;
        }
    }
    ctx->pc = 0x1C70D0u;
    // 0x1c70d0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c70d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c70d8: 0x8fb30230  lw          $s3, 0x230($sp)
    ctx->pc = 0x1c70d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c70dc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c70e0: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c70e4: 0x0  nop
    ctx->pc = 0x1c70e4u;
    // NOP
    ctx->pc = 0x1c70e8u;
}
