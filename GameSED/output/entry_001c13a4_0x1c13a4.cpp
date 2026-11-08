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

// Function: entry_001c13a4
// Address: 0x1c13a4 - 0x1c13d0
void entry_001c13a4_0x1c13a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c13a4_0x1c13a4");
#endif

    ctx->pc = 0x1c13a4u;

    // 0x1c13a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c13a8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C13A8u;
    {
        const bool branch_taken_0x1c13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c13a8) {
            ctx->pc = 0x1C13ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C13A8u;
            // 0x1c13ac: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C13D4u;
            return;
        }
    }
    ctx->pc = 0x1C13B0u;
    // 0x1c13b0: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1c13b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C13B4u;
    {
        const bool branch_taken_0x1c13b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B4u;
        // 0x1c13b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13b4) {
            ctx->pc = 0x1C13D0u;
            return;
        }
    }
    ctx->pc = 0x1C13BCu;
    // 0x1c13bc: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c13c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c13c4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1c13c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1c13c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1c13c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1c13cc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1c13d0u;
}
