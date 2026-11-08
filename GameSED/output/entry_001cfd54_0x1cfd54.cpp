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

// Function: entry_001cfd54
// Address: 0x1cfd54 - 0x1cfd80
void entry_001cfd54_0x1cfd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd54_0x1cfd54");
#endif

    ctx->pc = 0x1cfd54u;

    // 0x1cfd54: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x1cfd54u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1cfd58: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x1cfd58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x1cfd5c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1cfd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1cfd60: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFD60u;
    {
        const bool branch_taken_0x1cfd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd60) {
            ctx->pc = 0x1CFD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD60u;
            // 0x1cfd64: 0x2684e1b8  addiu       $a0, $s4, -0x1E48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDACu;
            return;
        }
    }
    ctx->pc = 0x1CFD68u;
    // 0x1cfd68: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFD68u;
    {
        const bool branch_taken_0x1cfd68 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD68u;
        // 0x1cfd6c: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd68) {
            ctx->pc = 0x1CFDA8u;
            return;
        }
    }
    ctx->pc = 0x1CFD70u;
    // 0x1cfd70: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1CFD70u;
    {
        const bool branch_taken_0x1cfd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD70u;
        // 0x1cfd74: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd70) {
            ctx->pc = 0x1CFC88u;
            return;
        }
    }
    ctx->pc = 0x1CFD78u;
    // 0x1cfd78: 0x9e430004  lwu         $v1, 0x4($s2)
    ctx->pc = 0x1cfd78u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cfd7c: 0x0  nop
    ctx->pc = 0x1cfd7cu;
    // NOP
    ctx->pc = 0x1cfd80u;
}
