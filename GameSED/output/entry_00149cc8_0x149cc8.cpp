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

// Function: entry_00149cc8
// Address: 0x149cc8 - 0x149cf0
void entry_00149cc8_0x149cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149cc8_0x149cc8");
#endif

    ctx->pc = 0x149cc8u;

    // 0x149cc8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x149CC8u;
    {
        const bool branch_taken_0x149cc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x149CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149CC8u;
        // 0x149ccc: 0x2882ffc0  slti        $v0, $a0, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149cc8) {
            ctx->pc = 0x149CF0u;
            return;
        }
    }
    ctx->pc = 0x149CD0u;
    // 0x149cd0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x149CD0u;
    {
        const bool branch_taken_0x149cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149cd0) {
            ctx->pc = 0x149CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CD0u;
            // 0x149cd4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CF4u;
            return;
        }
    }
    ctx->pc = 0x149CD8u;
    // 0x149cd8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x149cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x149cdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149CDCu;
    {
        const bool branch_taken_0x149cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149cdc) {
            ctx->pc = 0x149CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149CDCu;
            // 0x149ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149CF4u;
            return;
        }
    }
    ctx->pc = 0x149CE4u;
    // 0x149ce4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x149ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149ce8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x149ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x149cec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x149cecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149cf0u;
}
