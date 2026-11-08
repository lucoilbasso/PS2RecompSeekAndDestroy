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

// Function: entry_0018d918
// Address: 0x18d918 - 0x18d940
void entry_0018d918_0x18d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d918_0x18d918");
#endif

    ctx->pc = 0x18d918u;

    // 0x18d918: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x18d918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d91c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x18d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18d920: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x18d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x18d924: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x18d928: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D928u;
    {
        const bool branch_taken_0x18d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D928u;
        // 0x18d92c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d928) {
            ctx->pc = 0x18D970u;
            return;
        }
    }
    ctx->pc = 0x18D930u;
    // 0x18d930: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x18d934: 0x54670010  bnel        $v1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D934u;
    {
        const bool branch_taken_0x18d934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x18d934) {
            ctx->pc = 0x18D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D934u;
            // 0x18d938: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D978u;
            return;
        }
    }
    ctx->pc = 0x18D93Cu;
    // 0x18d93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18d940u;
}
