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

// Function: entry_0014ba70
// Address: 0x14ba70 - 0x14baa8
void entry_0014ba70_0x14ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ba70_0x14ba70");
#endif

    ctx->pc = 0x14ba70u;

    // 0x14ba70: 0x5460005d  bnel        $v1, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x14BA70u;
    {
        const bool branch_taken_0x14ba70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba70) {
            ctx->pc = 0x14BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA70u;
            // 0x14ba74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            return;
        }
    }
    ctx->pc = 0x14BA78u;
    // 0x14ba78: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x14BA78u;
    {
        const bool branch_taken_0x14ba78 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x14ba78) {
            ctx->pc = 0x14BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA78u;
            // 0x14ba7c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAA8u;
            return;
        }
    }
    ctx->pc = 0x14BA80u;
    // 0x14ba80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14ba80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ba84: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x14ba88: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BA88u;
    {
        const bool branch_taken_0x14ba88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ba88) {
            ctx->pc = 0x14BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA88u;
            // 0x14ba8c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAA8u;
            return;
        }
    }
    ctx->pc = 0x14BA90u;
    // 0x14ba90: 0x96020266  lhu         $v0, 0x266($s0)
    ctx->pc = 0x14ba90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 614)));
    // 0x14ba94: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x14ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x14ba98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ba9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA9Cu;
    {
        const bool branch_taken_0x14ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA9Cu;
        // 0x14baa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba9c) {
            ctx->pc = 0x14BAC0u;
            return;
        }
    }
    ctx->pc = 0x14BAA4u;
    // 0x14baa4: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    ctx->pc = 0x14baa8u;
}
