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

// Function: entry_001211b0
// Address: 0x1211b0 - 0x1211e0
void entry_001211b0_0x1211b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211b0_0x1211b0");
#endif

    ctx->pc = 0x1211b0u;

    // 0x1211b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1211b4: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x1211b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1211b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1211bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1211c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1211c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1211c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1211c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1211c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1211cc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1211ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1211d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1211D0u;
    {
        const bool branch_taken_0x1211d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211D0u;
        // 0x1211d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211d0) {
            ctx->pc = 0x12121Cu;
            return;
        }
    }
    ctx->pc = 0x1211D8u;
    // 0x1211d8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1211d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211dc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1211e0u;
}
