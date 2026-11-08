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

// Function: entry_00107e2c
// Address: 0x107e2c - 0x107e80
void entry_00107e2c_0x107e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e2c_0x107e2c");
#endif

    ctx->pc = 0x107e2cu;

    // 0x107e2c: 0x24030846  addiu       $v1, $zero, 0x846
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x107e30: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x107e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x107e34: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x107E34u;
    {
        const bool branch_taken_0x107e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x107E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E34u;
        // 0x107e38: 0x24020946  addiu       $v0, $zero, 0x946 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e34) {
            ctx->pc = 0x107E90u;
            return;
        }
    }
    ctx->pc = 0x107E3Cu;
    // 0x107e3c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x107e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107e40: 0x111823  negu        $v1, $s1
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x107e44: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x107e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107e48: 0x8e0701b4  lw          $a3, 0x1B4($s0)
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x107e4c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x107e4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x107e50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107e54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107e58: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x107e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x107e5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x107e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x107e60: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x107E60u;
    {
        const bool branch_taken_0x107e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x107E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E60u;
        // 0x107e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e60) {
            ctx->pc = 0x107F10u;
            return;
        }
    }
    ctx->pc = 0x107E68u;
    // 0x107e68: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x107e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x107e6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107E6Cu;
    {
        const bool branch_taken_0x107e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E6Cu;
        // 0x107e70: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e6c) {
            ctx->pc = 0x107E80u;
            return;
        }
    }
    ctx->pc = 0x107E74u;
    // 0x107e74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107E78u;
    {
        const bool branch_taken_0x107e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E78u;
        // 0x107e7c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e78) {
            ctx->pc = 0x107E84u;
            return;
        }
    }
    ctx->pc = 0x107E80u;
}
