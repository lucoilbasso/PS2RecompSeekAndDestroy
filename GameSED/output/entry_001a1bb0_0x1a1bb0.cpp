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

// Function: entry_001a1bb0
// Address: 0x1a1bb0 - 0x1a1bd4
void entry_001a1bb0_0x1a1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1bb0_0x1a1bb0");
#endif

    ctx->pc = 0x1a1bb0u;

    // 0x1a1bb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a1bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bb4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1bb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bbc: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x1a1bc0: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1BC0u;
    {
        const bool branch_taken_0x1a1bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BC0u;
        // 0x1a1bc4: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bc0) {
            ctx->pc = 0x1A1C24u;
            return;
        }
    }
    ctx->pc = 0x1A1BC8u;
    // 0x1a1bc8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1BC8u;
    {
        const bool branch_taken_0x1a1bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BC8u;
        // 0x1a1bcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bc8) {
            ctx->pc = 0x1A1BD4u;
            return;
        }
    }
    ctx->pc = 0x1A1BD0u;
    // 0x1a1bd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1a1bd4u;
}
