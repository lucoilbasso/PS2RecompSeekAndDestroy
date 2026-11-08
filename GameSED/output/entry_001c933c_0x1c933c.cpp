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

// Function: entry_001c933c
// Address: 0x1c933c - 0x1c9380
void entry_001c933c_0x1c933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c933c_0x1c933c");
#endif

    ctx->pc = 0x1c933cu;

    // 0x1c933c: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9340: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9344: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c934c: 0x9042bde0  lbu         $v0, -0x4220($v0)
    ctx->pc = 0x1c934cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1c9350: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9354: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9358: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9358u;
    {
        const bool branch_taken_0x1c9358 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9358u;
        // 0x1c935c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9358) {
            ctx->pc = 0x1C9380u;
            return;
        }
    }
    ctx->pc = 0x1C9360u;
    // 0x1c9360: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c9364: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9364u;
        // 0x1c9368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C936Cu;
    // 0x1c936c: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1c936cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9370: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C9370u;
    {
        const bool branch_taken_0x1c9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9370u;
        // 0x1c9374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9370) {
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C9378u;
    // 0x1c9378: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C9378u;
    {
        const bool branch_taken_0x1c9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9378u;
        // 0x1c937c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9378) {
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C9380u;
}
