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

// Function: entry_001a75fc
// Address: 0x1a75fc - 0x1a7620
void entry_001a75fc_0x1a75fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a75fc_0x1a75fc");
#endif

    ctx->pc = 0x1a75fcu;

    // 0x1a75fc: 0x2701024  and         $v0, $s3, $s0
    ctx->pc = 0x1a75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x1a7600: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A7600u;
    {
        const bool branch_taken_0x1a7600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7600u;
        // 0x1a7604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7600) {
            ctx->pc = 0x1A7654u;
            return;
        }
    }
    ctx->pc = 0x1A7608u;
    // 0x1a7608: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7608u;
    {
        const bool branch_taken_0x1a7608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7608) {
            ctx->pc = 0x1A760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7608u;
            // 0x1a760c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7620u;
            return;
        }
    }
    ctx->pc = 0x1A7610u;
    // 0x1a7610: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7614: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7618: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7618u;
    {
        const bool branch_taken_0x1a7618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7618u;
        // 0x1a761c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7618) {
            ctx->pc = 0x1A7654u;
            return;
        }
    }
    ctx->pc = 0x1A7620u;
}
