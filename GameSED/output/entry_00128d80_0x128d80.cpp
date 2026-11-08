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

// Function: entry_00128d80
// Address: 0x128d80 - 0x128dbc
void entry_00128d80_0x128d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d80_0x128d80");
#endif

    ctx->pc = 0x128d80u;

    // 0x128d80: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x128d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x128d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128d88: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x128D88u;
    {
        const bool branch_taken_0x128d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D88u;
        // 0x128d8c: 0x8fb700d0  lw          $s7, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d88) {
            ctx->pc = 0x128DBCu;
            return;
        }
    }
    ctx->pc = 0x128D90u;
    // 0x128d90: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x128d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x128d94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x128d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128d98: 0x144001b3  bnez        $v0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x128D98u;
    {
        const bool branch_taken_0x128d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128D98u;
        // 0x128d9c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128d98) {
            ctx->pc = 0x129468u;
            return;
        }
    }
    ctx->pc = 0x128DA0u;
    // 0x128da0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x128da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128da4: 0x12e201b0  beq         $s7, $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x128DA4u;
    {
        const bool branch_taken_0x128da4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DA4u;
        // 0x128da8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128da4) {
            ctx->pc = 0x129468u;
            return;
        }
    }
    ctx->pc = 0x128DACu;
    // 0x128dac: 0x12e201ae  beq         $s7, $v0, . + 4 + (0x1AE << 2)
    ctx->pc = 0x128DACu;
    {
        const bool branch_taken_0x128dac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DACu;
        // 0x128db0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128dac) {
            ctx->pc = 0x129468u;
            return;
        }
    }
    ctx->pc = 0x128DB4u;
    // 0x128db4: 0x12e201ad  beq         $s7, $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x128DB4u;
    {
        const bool branch_taken_0x128db4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x128DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128DB4u;
        // 0x128db8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128db4) {
            ctx->pc = 0x12946Cu;
            return;
        }
    }
    ctx->pc = 0x128DBCu;
}
