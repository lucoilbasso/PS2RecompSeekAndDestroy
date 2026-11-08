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

// Function: entry_001d3aa4
// Address: 0x1d3aa4 - 0x1d3ae8
void entry_001d3aa4_0x1d3aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3aa4_0x1d3aa4");
#endif

    ctx->pc = 0x1d3aa4u;

    // 0x1d3aa4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1d3aa8: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3aac: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x1d3aacu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3ab0: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1d3ab4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1d3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1d3ab8: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D3AB8u;
    {
        const bool branch_taken_0x1d3ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AB8u;
        // 0x1d3abc: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ab8) {
            ctx->pc = 0x1D3B5Cu;
            return;
        }
    }
    ctx->pc = 0x1D3AC0u;
    // 0x1d3ac0: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3AC0u;
    {
        const bool branch_taken_0x1d3ac0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ac0) {
            ctx->pc = 0x1D3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3AC0u;
            // 0x1d3ac4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3AE8u;
            return;
        }
    }
    ctx->pc = 0x1D3AC8u;
    // 0x1d3ac8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3acc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3ACCu;
    {
        const bool branch_taken_0x1d3acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ACCu;
        // 0x1d3ad0: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3acc) {
            ctx->pc = 0x1D3B34u;
            return;
        }
    }
    ctx->pc = 0x1D3AD4u;
    // 0x1d3ad4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d3ad8: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1d3adc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D3ADCu;
    {
        const bool branch_taken_0x1d3adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ADCu;
        // 0x1d3ae0: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3adc) {
            ctx->pc = 0x1D3B34u;
            return;
        }
    }
    ctx->pc = 0x1D3AE4u;
    // 0x1d3ae4: 0x0  nop
    ctx->pc = 0x1d3ae4u;
    // NOP
    ctx->pc = 0x1d3ae8u;
}
