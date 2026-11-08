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

// Function: entry_0018d490
// Address: 0x18d490 - 0x18d4c0
void entry_0018d490_0x18d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d490_0x18d490");
#endif

    ctx->pc = 0x18d490u;

    // 0x18d490: 0x14c2002f  bne         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18D490u;
    {
        const bool branch_taken_0x18d490 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D490u;
        // 0x18d494: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d490) {
            ctx->pc = 0x18D550u;
            return;
        }
    }
    ctx->pc = 0x18D498u;
    // 0x18d498: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d49c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d4a0: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d4a4: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d4a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d4a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D4A8u;
    {
        const bool branch_taken_0x18d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A8u;
        // 0x18d4ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4a8) {
            ctx->pc = 0x18D4F0u;
            return;
        }
    }
    ctx->pc = 0x18D4B0u;
    // 0x18d4b0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d4b4: 0x54670010  bnel        $v1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D4B4u;
    {
        const bool branch_taken_0x18d4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18d4b4) {
            ctx->pc = 0x18D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D4B4u;
            // 0x18d4b8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D4F8u;
            return;
        }
    }
    ctx->pc = 0x18D4BCu;
    // 0x18d4bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18d4c0u;
}
