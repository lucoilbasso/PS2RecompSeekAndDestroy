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

// Function: entry_001993d8
// Address: 0x1993d8 - 0x199414
void entry_001993d8_0x1993d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001993d8_0x1993d8");
#endif

    ctx->pc = 0x1993d8u;

    // 0x1993d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1993dc: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1993e0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1993e4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1993e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1993e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1993ec: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1993f0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1993f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1993f4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x1993F4u;
    {
        const bool branch_taken_0x1993f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993f4) {
            ctx->pc = 0x199488u;
            return;
        }
    }
    ctx->pc = 0x1993FCu;
    // 0x1993fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1993fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199400: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199404u;
    {
        const bool branch_taken_0x199404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199404u;
        // 0x199408: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199404) {
            ctx->pc = 0x199414u;
            return;
        }
    }
    ctx->pc = 0x19940Cu;
    // 0x19940c: 0x16a0001e  bnez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x19940Cu;
    {
        const bool branch_taken_0x19940c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x19940c) {
            ctx->pc = 0x199488u;
            return;
        }
    }
    ctx->pc = 0x199414u;
}
