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

// Function: entry_00100a80
// Address: 0x100a80 - 0x100ac8
void entry_00100a80_0x100a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a80_0x100a80");
#endif

    ctx->pc = 0x100a80u;

    // 0x100a80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x100a84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x100a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100a94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100a98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x100a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x100a9c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x100aa0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x100aa4: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x100AA4u;
    {
        const bool branch_taken_0x100aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x100AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA4u;
        // 0x100aa8: 0x8c730044  lw          $s3, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa4) {
            ctx->pc = 0x100BA0u;
            return;
        }
    }
    ctx->pc = 0x100AACu;
    // 0x100aac: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x100aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x100ab0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x100AB0u;
    {
        const bool branch_taken_0x100ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ab0) {
            ctx->pc = 0x100AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100AB0u;
            // 0x100ab4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100B20u;
            return;
        }
    }
    ctx->pc = 0x100AB8u;
    // 0x100ab8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100abc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x100abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ac0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x100AC0u;
    {
        const bool branch_taken_0x100ac0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AC0u;
        // 0x100ac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ac0) {
            ctx->pc = 0x100B10u;
            return;
        }
    }
    ctx->pc = 0x100AC8u;
}
