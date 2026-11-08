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

// Function: entry_001aaeb4
// Address: 0x1aaeb4 - 0x1aaed8
void entry_001aaeb4_0x1aaeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaeb4_0x1aaeb4");
#endif

    ctx->pc = 0x1aaeb4u;

    // 0x1aaeb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1aaeb8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1aaeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1aaebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aaebcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1aaec0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1aaec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1aaec4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAEC4u;
    {
        const bool branch_taken_0x1aaec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEC4u;
        // 0x1aaec8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaec4) {
            ctx->pc = 0x1AAEF4u;
            return;
        }
    }
    ctx->pc = 0x1AAECCu;
    // 0x1aaecc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1aaed0: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1aaed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1aaed4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1aaed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aaed8u;
}
