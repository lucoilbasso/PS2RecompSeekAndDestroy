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

// Function: entry_001bec00
// Address: 0x1bec00 - 0x1bec30
void entry_001bec00_0x1bec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bec00_0x1bec00");
#endif

    ctx->pc = 0x1bec00u;

    // 0x1bec00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec04: 0x1810  mfhi        $v1
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bec08: 0xb812  mflo        $s7
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1bec0c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1bec0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec10: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1bec14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BEC14u;
    {
        const bool branch_taken_0x1bec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC14u;
        // 0x1bec18: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec14) {
            ctx->pc = 0x1BEC60u;
            return;
        }
    }
    ctx->pc = 0x1BEC1Cu;
    // 0x1bec1c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bec20: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1bec24: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x1bec28: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x1bec2c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x1bec2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    ctx->pc = 0x1bec30u;
}
