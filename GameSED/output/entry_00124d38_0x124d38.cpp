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

// Function: entry_00124d38
// Address: 0x124d38 - 0x124d5c
void entry_00124d38_0x124d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d38_0x124d38");
#endif

    ctx->pc = 0x124d38u;

    // 0x124d38: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x124d3c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x124d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x124d40: 0x1600001b  bnez        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x124D40u;
    {
        const bool branch_taken_0x124d40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D40u;
        // 0x124d44: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d40) {
            ctx->pc = 0x124DB0u;
            return;
        }
    }
    ctx->pc = 0x124D48u;
    // 0x124d48: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D48u;
    {
        const bool branch_taken_0x124d48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d48) {
            ctx->pc = 0x124D5Cu;
            return;
        }
    }
    ctx->pc = 0x124D50u;
    // 0x124d50: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x124d50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d54: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x124d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124d5cu;
}
