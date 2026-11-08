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

// Function: entry_00196698
// Address: 0x196698 - 0x1966e0
void entry_00196698_0x196698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196698_0x196698");
#endif

    ctx->pc = 0x196698u;

    // 0x196698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19669c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19669cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1966a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1966a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1966a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1966a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1966a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1966ac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1966b0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1966B0u;
    {
        const bool branch_taken_0x1966b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1966B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B0u;
        // 0x1966b4: 0x26140200  addiu       $s4, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966b0) {
            ctx->pc = 0x196788u;
            return;
        }
    }
    ctx->pc = 0x1966B8u;
    // 0x1966b8: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1966bc: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x1966c0: 0x36730200  ori         $s3, $s3, 0x200
    ctx->pc = 0x1966c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
    // 0x1966c4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1966c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1966c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1966d0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1966D0u;
    {
        const bool branch_taken_0x1966d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1966D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966D0u;
        // 0x1966d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966d0) {
            ctx->pc = 0x196710u;
            return;
        }
    }
    ctx->pc = 0x1966D8u;
    // 0x1966d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1966d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966dc: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->pc = 0x1966e0u;
}
