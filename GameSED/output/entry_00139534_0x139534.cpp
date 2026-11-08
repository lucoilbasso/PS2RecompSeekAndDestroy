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

// Function: entry_00139534
// Address: 0x139534 - 0x139558
void entry_00139534_0x139534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139534_0x139534");
#endif

    ctx->pc = 0x139534u;

    // 0x139534: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x139534u;
    {
        const bool branch_taken_0x139534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139534u;
        // 0x139538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139534) {
            ctx->pc = 0x139584u;
            return;
        }
    }
    ctx->pc = 0x13953Cu;
    // 0x13953c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13953Cu;
    {
        const bool branch_taken_0x13953c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13953c) {
            ctx->pc = 0x139540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13953Cu;
            // 0x139540: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139558u;
            return;
        }
    }
    ctx->pc = 0x139544u;
    // 0x139544: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x139544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x139548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13954c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x139550: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x139550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x139554: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x139558u;
}
