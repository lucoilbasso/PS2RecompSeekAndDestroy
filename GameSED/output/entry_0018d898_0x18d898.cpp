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

// Function: entry_0018d898
// Address: 0x18d898 - 0x18d8d0
void entry_0018d898_0x18d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d898_0x18d898");
#endif

    ctx->pc = 0x18d898u;

    // 0x18d898: 0x14c300cf  bne         $a2, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x18D898u;
    {
        const bool branch_taken_0x18d898 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x18D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D898u;
        // 0x18d89c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d898) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18D8A0u;
    // 0x18d8a0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x18d8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x18d8a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18d8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8a8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d8ac: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d8b0: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d8b4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18D8B4u;
    {
        const bool branch_taken_0x18d8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8B4u;
        // 0x18d8b8: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8b4) {
            ctx->pc = 0x18D900u;
            return;
        }
    }
    ctx->pc = 0x18D8BCu;
    // 0x18d8bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x18d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d8c0: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D8C0u;
    {
        const bool branch_taken_0x18d8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d8c0) {
            ctx->pc = 0x18D8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D8C0u;
            // 0x18d8c4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D908u;
            return;
        }
    }
    ctx->pc = 0x18D8C8u;
    // 0x18d8c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8cc: 0x0  nop
    ctx->pc = 0x18d8ccu;
    // NOP
    ctx->pc = 0x18d8d0u;
}
