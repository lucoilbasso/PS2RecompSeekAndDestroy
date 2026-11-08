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

// Function: entry_001cab18
// Address: 0x1cab18 - 0x1cab78
void entry_001cab18_0x1cab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cab18_0x1cab18");
#endif

    ctx->pc = 0x1cab18u;

    // 0x1cab18: 0x16d102b  sltu        $v0, $t3, $t5
    ctx->pc = 0x1cab18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1cab1c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CAB1Cu;
    {
        const bool branch_taken_0x1cab1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB1Cu;
        // 0x1cab20: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab1c) {
            ctx->pc = 0x1CAB78u;
            return;
        }
    }
    ctx->pc = 0x1CAB24u;
    // 0x1cab24: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cab24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cab28: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1cab2c: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cab30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cab34: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cab38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cab3c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1cab40: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cab44: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CAB44u;
    {
        const bool branch_taken_0x1cab44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB44u;
        // 0x1cab48: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab44) {
            ctx->pc = 0x1CAB7Cu;
            return;
        }
    }
    ctx->pc = 0x1CAB4Cu;
    // 0x1cab4c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x1cab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1cab50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1cab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cab54: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1cab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cab58: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cab5c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAB5Cu;
    {
        const bool branch_taken_0x1cab5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB5Cu;
        // 0x1cab60: 0xec1021  addu        $v0, $a3, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab5c) {
            ctx->pc = 0x1CAB80u;
            return;
        }
    }
    ctx->pc = 0x1CAB64u;
    // 0x1cab64: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1cab64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1cab68: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x1cab68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x1cab6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAB6Cu;
    {
        const bool branch_taken_0x1cab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB6Cu;
        // 0x1cab70: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab6c) {
            ctx->pc = 0x1CABB0u;
            return;
        }
    }
    ctx->pc = 0x1CAB74u;
    // 0x1cab74: 0x0  nop
    ctx->pc = 0x1cab74u;
    // NOP
    ctx->pc = 0x1cab78u;
}
