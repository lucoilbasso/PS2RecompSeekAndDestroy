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

// Function: entry_001cc998
// Address: 0x1cc998 - 0x1cc9cc
void entry_001cc998_0x1cc998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc998_0x1cc998");
#endif

    ctx->pc = 0x1cc998u;

    // 0x1cc998: 0x1090c0  sll         $s2, $s0, 3
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1cc99c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc9a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cc9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cc9a4: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1cc9a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cc9ac: 0x41f42  srl         $v1, $a0, 29
    ctx->pc = 0x1cc9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 29));
    // 0x1cc9b0: 0x41782  srl         $v0, $a0, 30
    ctx->pc = 0x1cc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 30));
    // 0x1cc9b4: 0x1446001c  bne         $v0, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CC9B4u;
    {
        const bool branch_taken_0x1cc9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9B4u;
        // 0x1cc9b8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9b4) {
            ctx->pc = 0x1CCA28u;
            return;
        }
    }
    ctx->pc = 0x1CC9BCu;
    // 0x1cc9bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC9BCu;
    {
        const bool branch_taken_0x1cc9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9BCu;
        // 0x1cc9c0: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9bc) {
            ctx->pc = 0x1CC9CCu;
            return;
        }
    }
    ctx->pc = 0x1CC9C4u;
    // 0x1cc9c4: 0x129e0018  beq         $s4, $fp, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC9C4u;
    {
        const bool branch_taken_0x1cc9c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 30));
        if (branch_taken_0x1cc9c4) {
            ctx->pc = 0x1CCA28u;
            return;
        }
    }
    ctx->pc = 0x1CC9CCu;
}
