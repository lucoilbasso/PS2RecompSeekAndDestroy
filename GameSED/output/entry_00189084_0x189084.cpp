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

// Function: entry_00189084
// Address: 0x189084 - 0x1890d0
void entry_00189084_0x189084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189084_0x189084");
#endif

    ctx->pc = 0x189084u;

    // 0x189084: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x189084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x189088: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x189088u;
    {
        const bool branch_taken_0x189088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189088u;
        // 0x18908c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189088) {
            ctx->pc = 0x189268u;
            return;
        }
    }
    ctx->pc = 0x189090u;
    // 0x189090: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x189094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x189094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x189098: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x189098u;
    {
        const bool branch_taken_0x189098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189098u;
        // 0x18909c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189098) {
            ctx->pc = 0x1891B0u;
            return;
        }
    }
    ctx->pc = 0x1890A0u;
    // 0x1890a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1890a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1890a8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1890A8u;
    {
        const bool branch_taken_0x1890a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A8u;
        // 0x1890ac: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890a8) {
            ctx->pc = 0x189100u;
            return;
        }
    }
    ctx->pc = 0x1890B0u;
    // 0x1890b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1890B0u;
    {
        const bool branch_taken_0x1890b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0x266500d0  addiu       $a1, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b0) {
            ctx->pc = 0x1890D0u;
            return;
        }
    }
    ctx->pc = 0x1890B8u;
    // 0x1890b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1890bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1890BCu;
    {
        const bool branch_taken_0x1890bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1890C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890BCu;
        // 0x1890c0: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890bc) {
            ctx->pc = 0x189160u;
            return;
        }
    }
    ctx->pc = 0x1890C4u;
    // 0x1890c4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1891A0u;
            return;
        }
    }
    ctx->pc = 0x1890CCu;
    // 0x1890cc: 0x0  nop
    ctx->pc = 0x1890ccu;
    // NOP
    ctx->pc = 0x1890d0u;
}
