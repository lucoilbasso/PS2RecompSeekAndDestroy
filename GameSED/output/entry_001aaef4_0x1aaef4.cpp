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

// Function: entry_001aaef4
// Address: 0x1aaef4 - 0x1aaf28
void entry_001aaef4_0x1aaef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaef4_0x1aaef4");
#endif

    ctx->pc = 0x1aaef4u;

    // 0x1aaef4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1aaef8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x1aaef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x1aaefc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1aaefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1aaf00: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1aaf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1aaf04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x1aaf08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1aaf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1aaf0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AAF0Cu;
    {
        const bool branch_taken_0x1aaf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF0Cu;
        // 0x1aaf10: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf0c) {
            ctx->pc = 0x1AAF44u;
            return;
        }
    }
    ctx->pc = 0x1AAF14u;
    // 0x1aaf14: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1aaf18: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1aaf18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1aaf1c: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1aaf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x1aaf20: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1aaf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1aaf24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1aaf24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aaf28u;
}
