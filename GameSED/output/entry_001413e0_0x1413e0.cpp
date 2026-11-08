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

// Function: entry_001413e0
// Address: 0x1413e0 - 0x141410
void entry_001413e0_0x1413e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413e0_0x1413e0");
#endif

    ctx->pc = 0x1413e0u;

    // 0x1413e0: 0x32420400  andi        $v0, $s2, 0x400
    ctx->pc = 0x1413e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
    // 0x1413e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1413E4u;
    {
        const bool branch_taken_0x1413e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413E4u;
        // 0x1413e8: 0x24632600  addiu       $v1, $v1, 0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413e4) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x1413ECu;
    // 0x1413ec: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1413ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1413f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1413f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1413f4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1413f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1413f8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141400: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141404: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x141404u;
    {
        const bool branch_taken_0x141404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141404u;
        // 0x141408: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141404) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x14140Cu;
    // 0x14140c: 0x0  nop
    ctx->pc = 0x14140cu;
    // NOP
    ctx->pc = 0x141410u;
}
