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

// Function: entry_001caa20
// Address: 0x1caa20 - 0x1caa80
void entry_001caa20_0x1caa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa20_0x1caa20");
#endif

    ctx->pc = 0x1caa20u;

    // 0x1caa20: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1caa24: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1caa28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CAA28u;
    {
        const bool branch_taken_0x1caa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA28u;
        // 0x1caa2c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa28) {
            ctx->pc = 0x1CAA80u;
            return;
        }
    }
    ctx->pc = 0x1CAA30u;
    // 0x1caa30: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1caa34: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1caa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1caa38: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1caa38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1caa3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1caa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1caa40: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1caa40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1caa44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1caa48: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1caa4c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1caa50: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAA50u;
    {
        const bool branch_taken_0x1caa50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA50u;
        // 0x1caa54: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa50) {
            ctx->pc = 0x1CAA84u;
            return;
        }
    }
    ctx->pc = 0x1CAA58u;
    // 0x1caa58: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1caa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1caa5c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1caa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1caa60: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1caa64: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1caa68: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAA68u;
    {
        const bool branch_taken_0x1caa68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA68u;
        // 0x1caa6c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa68) {
            ctx->pc = 0x1CAA88u;
            return;
        }
    }
    ctx->pc = 0x1CAA70u;
    // 0x1caa70: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1caa74: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1caa74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1caa78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CAA78u;
    {
        const bool branch_taken_0x1caa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA78u;
        // 0x1caa7c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa78) {
            ctx->pc = 0x1CAAB8u;
            return;
        }
    }
    ctx->pc = 0x1CAA80u;
}
