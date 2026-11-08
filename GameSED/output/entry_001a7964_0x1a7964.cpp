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

// Function: entry_001a7964
// Address: 0x1a7964 - 0x1a7980
void entry_001a7964_0x1a7964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7964_0x1a7964");
#endif

    ctx->pc = 0x1a7964u;

    // 0x1a7964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7968: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7968u;
    {
        const bool branch_taken_0x1a7968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7968) {
            ctx->pc = 0x1A796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7968u;
            // 0x1a796c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7980u;
            return;
        }
    }
    ctx->pc = 0x1A7970u;
    // 0x1a7970: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7974: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7978: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7978u;
    {
        const bool branch_taken_0x1a7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7978u;
        // 0x1a797c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7978) {
            ctx->pc = 0x1A79B4u;
            return;
        }
    }
    ctx->pc = 0x1A7980u;
}
