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

// Function: entry_001792d0
// Address: 0x1792d0 - 0x179310
void entry_001792d0_0x1792d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001792d0_0x1792d0");
#endif

    ctx->pc = 0x1792d0u;

    // 0x1792d0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1792D0u;
    {
        const bool branch_taken_0x1792d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1792D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792D0u;
        // 0x1792d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792d0) {
            ctx->pc = 0x179340u;
            return;
        }
    }
    ctx->pc = 0x1792D8u;
    // 0x1792d8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1792d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1792dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1792dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1792e0: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1792E0u;
    {
        const bool branch_taken_0x1792e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1792E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E0u;
        // 0x1792e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792e0) {
            ctx->pc = 0x179324u;
            return;
        }
    }
    ctx->pc = 0x1792E8u;
    // 0x1792e8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x179324u;
            return;
        }
    }
    ctx->pc = 0x1792F0u;
    // 0x1792f0: 0x8e434040  lw          $v1, 0x4040($s2)
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16448)));
    // 0x1792f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1792f8: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1792F8u;
    {
        const bool branch_taken_0x1792f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1792f8) {
            ctx->pc = 0x1792FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792F8u;
            // 0x1792fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x179300u;
    // 0x179300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179304: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x179304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
    // 0x179308: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x179308u;
    {
        const bool branch_taken_0x179308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179308u;
        // 0x17930c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179308) {
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x179310u;
}
