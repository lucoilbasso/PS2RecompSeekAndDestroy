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

// Function: entry_001cfd40
// Address: 0x1cfd40 - 0x1cfd54
void entry_001cfd40_0x1cfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd40_0x1cfd40");
#endif

    ctx->pc = 0x1cfd40u;

    // 0x1cfd40: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1cfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1cfd44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cfd48: 0x0  nop
    ctx->pc = 0x1cfd48u;
    // NOP
    // 0x1cfd4c: 0x1044fff6  beq         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CFD4Cu;
    {
        const bool branch_taken_0x1cfd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD4Cu;
        // 0x1cfd50: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd4c) {
            ctx->pc = 0x1CFD28u;
            return;
        }
    }
    ctx->pc = 0x1CFD54u;
}
