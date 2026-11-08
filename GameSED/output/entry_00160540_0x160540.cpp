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

// Function: entry_00160540
// Address: 0x160540 - 0x160570
void entry_00160540_0x160540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160540_0x160540");
#endif

    ctx->pc = 0x160540u;

    // 0x160540: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x160540u;
    {
        const bool branch_taken_0x160540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160540u;
        // 0x160544: 0x28820801  slti        $v0, $a0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160540) {
            ctx->pc = 0x1609F0u;
            return;
        }
    }
    ctx->pc = 0x160548u;
    // 0x160548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160548u;
    {
        const bool branch_taken_0x160548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160548u;
        // 0x16054c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160548) {
            ctx->pc = 0x160570u;
            return;
        }
    }
    ctx->pc = 0x160550u;
    // 0x160550: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x160554: 0x10820112  beq         $a0, $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x160554u;
    {
        const bool branch_taken_0x160554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160554u;
        // 0x160558: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160554) {
            ctx->pc = 0x1609A0u;
            return;
        }
    }
    ctx->pc = 0x16055Cu;
    // 0x16055c: 0x10820124  beq         $a0, $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x16055Cu;
    {
        const bool branch_taken_0x16055c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x160560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16055Cu;
        // 0x160560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16055c) {
            ctx->pc = 0x1609F0u;
            return;
        }
    }
    ctx->pc = 0x160564u;
    // 0x160564: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x160564u;
    {
        const bool branch_taken_0x160564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160564u;
        // 0x160568: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160564) {
            ctx->pc = 0x160A40u;
            return;
        }
    }
    ctx->pc = 0x16056Cu;
    // 0x16056c: 0x0  nop
    ctx->pc = 0x16056cu;
    // NOP
    ctx->pc = 0x160570u;
}
