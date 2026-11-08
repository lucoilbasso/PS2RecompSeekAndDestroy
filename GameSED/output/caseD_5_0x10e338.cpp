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

// Function: caseD_5
// Address: 0x10e338 - 0x10e350
void caseD_5_0x10e338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x10e338");
#endif

    ctx->pc = 0x10e338u;

    // 0x10e338: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e33c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x10e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x10e340: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10e344: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x1226c0  sll         $a0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E390u;
            return;
        }
    }
    ctx->pc = 0x10E34Cu;
    // 0x10e34c: 0x0  nop
    ctx->pc = 0x10e34cu;
    // NOP
    ctx->pc = 0x10e350u;
}
