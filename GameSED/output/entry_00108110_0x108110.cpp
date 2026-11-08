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

// Function: entry_00108110
// Address: 0x108110 - 0x108128
void entry_00108110_0x108110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108110_0x108110");
#endif

    ctx->pc = 0x108110u;

    // 0x108110: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x108110u;
    {
        const bool branch_taken_0x108110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x108114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108110u;
        // 0x108114: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108110) {
            ctx->pc = 0x108168u;
            return;
        }
    }
    ctx->pc = 0x108118u;
    // 0x108118: 0x122200d1  beq         $s1, $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x108118u;
    {
        const bool branch_taken_0x108118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108118) {
            ctx->pc = 0x108460u;
            return;
        }
    }
    ctx->pc = 0x108120u;
    // 0x108120: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x108120u;
    {
        const bool branch_taken_0x108120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108120u;
        // 0x108124: 0x3463ff00  ori         $v1, $v1, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108120) {
            ctx->pc = 0x1084ECu;
            return;
        }
    }
    ctx->pc = 0x108128u;
}
