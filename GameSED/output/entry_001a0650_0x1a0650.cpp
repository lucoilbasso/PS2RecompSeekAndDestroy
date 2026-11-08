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

// Function: entry_001a0650
// Address: 0x1a0650 - 0x1a0674
void entry_001a0650_0x1a0650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0650_0x1a0650");
#endif

    ctx->pc = 0x1a0650u;

    // 0x1a0650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0654: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0654u;
    {
        const bool branch_taken_0x1a0654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0654u;
        // 0x1a0658: 0x3c03fff0  lui         $v1, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0654) {
            ctx->pc = 0x1A0674u;
            return;
        }
    }
    ctx->pc = 0x1A065Cu;
    // 0x1a065c: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x1a0660: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a0668: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a0668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a066c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A066Cu;
    {
        const bool branch_taken_0x1a066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A066Cu;
        // 0x1a0670: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a066c) {
            ctx->pc = 0x1A06C0u;
            return;
        }
    }
    ctx->pc = 0x1A0674u;
}
