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

// Function: entry_00187d68
// Address: 0x187d68 - 0x187db0
void entry_00187d68_0x187d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d68_0x187d68");
#endif

    ctx->pc = 0x187d68u;

    // 0x187d68: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x187d6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187d70: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x187d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187d74: 0x26110150  addiu       $s1, $s0, 0x150
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x187d78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187d7c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x187d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x187d80: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x187D80u;
    {
        const bool branch_taken_0x187d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d80) {
            ctx->pc = 0x187D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D80u;
            // 0x187d84: 0x8e4201b8  lw          $v0, 0x1B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E8Cu;
            return;
        }
    }
    ctx->pc = 0x187D88u;
    // 0x187d88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187d8c: 0x50570014  beql        $v0, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D8Cu;
            // 0x187d90: 0x26030160  addiu       $v1, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187DE0u;
            return;
        }
    }
    ctx->pc = 0x187D94u;
    // 0x187d94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x187D94u;
    {
        const bool branch_taken_0x187d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d94) {
            ctx->pc = 0x187D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D94u;
            // 0x187d98: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187DB0u;
            return;
        }
    }
    ctx->pc = 0x187D9Cu;
    // 0x187d9c: 0x50560028  beql        $v0, $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x187D9Cu;
    {
        const bool branch_taken_0x187d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x187d9c) {
            ctx->pc = 0x187DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187D9Cu;
            // 0x187da0: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187E40u;
            return;
        }
    }
    ctx->pc = 0x187DA4u;
    // 0x187da4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x187DA4u;
    {
        const bool branch_taken_0x187da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DA4u;
        // 0x187da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187da4) {
            ctx->pc = 0x187E80u;
            return;
        }
    }
    ctx->pc = 0x187DACu;
    // 0x187dac: 0x0  nop
    ctx->pc = 0x187dacu;
    // NOP
    ctx->pc = 0x187db0u;
}
