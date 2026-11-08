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

// Function: entry_001413b4
// Address: 0x1413b4 - 0x1413e0
void entry_001413b4_0x1413b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413b4_0x1413b4");
#endif

    ctx->pc = 0x1413b4u;

    // 0x1413b4: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x1413b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x1413b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1413B8u;
    {
        const bool branch_taken_0x1413b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413B8u;
        // 0x1413bc: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413b8) {
            ctx->pc = 0x1413E0u;
            return;
        }
    }
    ctx->pc = 0x1413C0u;
    // 0x1413c0: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
    // 0x1413c4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1413c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1413c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1413cc: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1413d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1413d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1413D4u;
    {
        const bool branch_taken_0x1413d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413D4u;
        // 0x1413d8: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413d4) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x1413DCu;
    // 0x1413dc: 0x0  nop
    ctx->pc = 0x1413dcu;
    // NOP
    ctx->pc = 0x1413e0u;
}
