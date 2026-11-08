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

// Function: entry_001cad08
// Address: 0x1cad08 - 0x1cad68
void entry_001cad08_0x1cad08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cad08_0x1cad08");
#endif

    ctx->pc = 0x1cad08u;

    // 0x1cad08: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1cad08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cad0c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CAD0Cu;
    {
        const bool branch_taken_0x1cad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD0Cu;
        // 0x1cad10: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad0c) {
            ctx->pc = 0x1CAD68u;
            return;
        }
    }
    ctx->pc = 0x1CAD14u;
    // 0x1cad14: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cad18: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cad1c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cad1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cad20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cad24: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cad28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cad2c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cad30: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cad34: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CAD34u;
    {
        const bool branch_taken_0x1cad34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD34u;
        // 0x1cad38: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad34) {
            ctx->pc = 0x1CAD6Cu;
            return;
        }
    }
    ctx->pc = 0x1CAD3Cu;
    // 0x1cad3c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cad40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cad40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cad44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cad48: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cad4c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAD4Cu;
    {
        const bool branch_taken_0x1cad4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD4Cu;
        // 0x1cad50: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad4c) {
            ctx->pc = 0x1CAD70u;
            return;
        }
    }
    ctx->pc = 0x1CAD54u;
    // 0x1cad54: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cad54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cad58: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cad58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cad5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAD5Cu;
    {
        const bool branch_taken_0x1cad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD5Cu;
        // 0x1cad60: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad5c) {
            ctx->pc = 0x1CADA0u;
            return;
        }
    }
    ctx->pc = 0x1CAD64u;
    // 0x1cad64: 0x0  nop
    ctx->pc = 0x1cad64u;
    // NOP
    ctx->pc = 0x1cad68u;
}
