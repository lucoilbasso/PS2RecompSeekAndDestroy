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

// Function: entry_001b09d8
// Address: 0x1b09d8 - 0x1b09f0
void entry_001b09d8_0x1b09d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b09d8_0x1b09d8");
#endif

    ctx->pc = 0x1b09d8u;

    // 0x1b09d8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b09dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b09dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b09e0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1b09e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b09e4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1b09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1b09e8: 0x1482014b  bne         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1B09E8u;
    {
        const bool branch_taken_0x1b09e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09E8u;
        // 0x1b09ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09e8) {
            ctx->pc = 0x1B0F18u;
            return;
        }
    }
    ctx->pc = 0x1B09F0u;
}
