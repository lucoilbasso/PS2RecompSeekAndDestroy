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

// Function: entry_00136168
// Address: 0x136168 - 0x136190
void entry_00136168_0x136168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136168_0x136168");
#endif

    ctx->pc = 0x136168u;

    // 0x136168: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x136168u;
    {
        const bool branch_taken_0x136168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136168u;
        // 0x13616c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136168) {
            ctx->pc = 0x13619Cu;
            return;
        }
    }
    ctx->pc = 0x136170u;
    // 0x136170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x136170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136174: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136178: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136178u;
    {
        const bool branch_taken_0x136178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x136178) {
            ctx->pc = 0x13617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136178u;
            // 0x13617c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1361A0u;
            return;
        }
    }
    ctx->pc = 0x136180u;
    // 0x136180: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x136180u;
    {
        const bool branch_taken_0x136180 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136180u;
        // 0x136184: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136180) {
            ctx->pc = 0x136190u;
            return;
        }
    }
    ctx->pc = 0x136188u;
    // 0x136188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136188u;
    {
        const bool branch_taken_0x136188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136188u;
        // 0x13618c: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136188) {
            ctx->pc = 0x136198u;
            return;
        }
    }
    ctx->pc = 0x136190u;
}
