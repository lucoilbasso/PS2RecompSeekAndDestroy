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

// Function: entry_001985a8
// Address: 0x1985a8 - 0x1985e8
void entry_001985a8_0x1985a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001985a8_0x1985a8");
#endif

    ctx->pc = 0x1985a8u;

    // 0x1985a8: 0x26960160  addiu       $s6, $s4, 0x160
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x1985ac: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1985b0: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1985B0u;
    {
        const bool branch_taken_0x1985b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1985B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985B0u;
        // 0x1985b4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985b0) {
            ctx->pc = 0x198618u;
            return;
        }
    }
    ctx->pc = 0x1985B8u;
    // 0x1985b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1985bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1985c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1985c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985c4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1985c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1985cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1985d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1985d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1985d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1985d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1985dc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1985DCu;
    {
        const bool branch_taken_0x1985dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985DCu;
        // 0x1985e0: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985dc) {
            ctx->pc = 0x1985E8u;
            return;
        }
    }
    ctx->pc = 0x1985E4u;
    // 0x1985e4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1985e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x1985e8u;
}
