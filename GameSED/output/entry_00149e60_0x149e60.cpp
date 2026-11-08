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

// Function: entry_00149e60
// Address: 0x149e60 - 0x149eb8
void entry_00149e60_0x149e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149e60_0x149e60");
#endif

    ctx->pc = 0x149e60u;

    // 0x149e60: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x149e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x149e64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x149E64u;
    {
        const bool branch_taken_0x149e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E64u;
        // 0x149e68: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e64) {
            ctx->pc = 0x149EB8u;
            return;
        }
    }
    ctx->pc = 0x149E6Cu;
    // 0x149e6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x149e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149e70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149e74: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x149E74u;
    {
        const bool branch_taken_0x149e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E74u;
        // 0x149e78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e74) {
            ctx->pc = 0x149F1Cu;
            return;
        }
    }
    ctx->pc = 0x149E7Cu;
    // 0x149e7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x149e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149e80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149e84: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E84u;
        // 0x149e88: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149F20u;
            return;
        }
    }
    ctx->pc = 0x149E8Cu;
    // 0x149e8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x149e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x149e90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149e94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x149e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149e98: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x149E98u;
    {
        const bool branch_taken_0x149e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E98u;
        // 0x149e9c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e98) {
            ctx->pc = 0x149F24u;
            return;
        }
    }
    ctx->pc = 0x149EA0u;
    // 0x149ea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149ea4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x149ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149ea8: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x149EA8u;
    {
        const bool branch_taken_0x149ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ea8) {
            ctx->pc = 0x149EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EA8u;
            // 0x149eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F20u;
            return;
        }
    }
    ctx->pc = 0x149EB0u;
    // 0x149eb0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x149EB0u;
    {
        const bool branch_taken_0x149eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EB0u;
        // 0x149eb4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149eb0) {
            ctx->pc = 0x149F24u;
            return;
        }
    }
    ctx->pc = 0x149EB8u;
}
