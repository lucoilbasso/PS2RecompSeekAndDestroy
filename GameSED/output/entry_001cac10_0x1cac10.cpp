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

// Function: entry_001cac10
// Address: 0x1cac10 - 0x1cac70
void entry_001cac10_0x1cac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cac10_0x1cac10");
#endif

    ctx->pc = 0x1cac10u;

    // 0x1cac10: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1cac14: 0x16e102b  sltu        $v0, $t3, $t6
    ctx->pc = 0x1cac14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1cac18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CAC18u;
    {
        const bool branch_taken_0x1cac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC18u;
        // 0x1cac1c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac18) {
            ctx->pc = 0x1CAC70u;
            return;
        }
    }
    ctx->pc = 0x1CAC20u;
    // 0x1cac20: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cac24: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cac28: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cac2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cac30: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cac34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cac38: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cac3c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac40: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CAC40u;
    {
        const bool branch_taken_0x1cac40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC40u;
        // 0x1cac44: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac40) {
            ctx->pc = 0x1CAC74u;
            return;
        }
    }
    ctx->pc = 0x1CAC48u;
    // 0x1cac48: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cac4c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cac50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cac54: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cac58: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAC58u;
    {
        const bool branch_taken_0x1cac58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC58u;
        // 0x1cac5c: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac58) {
            ctx->pc = 0x1CAC78u;
            return;
        }
    }
    ctx->pc = 0x1CAC60u;
    // 0x1cac60: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cac60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cac64: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cac64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cac68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CAC68u;
    {
        const bool branch_taken_0x1cac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC68u;
        // 0x1cac6c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac68) {
            ctx->pc = 0x1CACA8u;
            return;
        }
    }
    ctx->pc = 0x1CAC70u;
}
