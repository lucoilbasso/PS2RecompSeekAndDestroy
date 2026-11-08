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

// Function: entry_001a71c4
// Address: 0x1a71c4 - 0x1a71e0
void entry_001a71c4_0x1a71c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a71c4_0x1a71c4");
#endif

    ctx->pc = 0x1a71c4u;

    // 0x1a71c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a71c8: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A71C8u;
    {
        const bool branch_taken_0x1a71c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71c8) {
            ctx->pc = 0x1A71CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A71C8u;
            // 0x1a71cc: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A71E0u;
            return;
        }
    }
    ctx->pc = 0x1A71D0u;
    // 0x1a71d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a71d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a71d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A71D8u;
    {
        const bool branch_taken_0x1a71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71D8u;
        // 0x1a71dc: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71d8) {
            ctx->pc = 0x1A7214u;
            return;
        }
    }
    ctx->pc = 0x1A71E0u;
}
