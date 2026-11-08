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

// Function: entry_001549f8
// Address: 0x1549f8 - 0x154a18
void entry_001549f8_0x1549f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001549f8_0x1549f8");
#endif

    switch (ctx->pc) {
        case 0x154a10u: goto label_154a10;
        default: break;
    }

    ctx->pc = 0x1549f8u;

    // 0x1549f8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1549fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1549fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154A00u;
    {
        const bool branch_taken_0x154a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A00u;
        // 0x154a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a00) {
            ctx->pc = 0x154A18u;
            return;
        }
    }
    ctx->pc = 0x154A08u;
    // 0x154a08: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x154A08u;
    SET_GPR_U32(ctx, 31, 0x154A10u);
    ctx->pc = 0x154A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A08u;
    // 0x154a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154A08u, 0x154A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A10u;
label_154a10:
    // 0x154a10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x154A10u;
    {
        const bool branch_taken_0x154a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A10u;
        // 0x154a14: 0x8e62037c  lw          $v0, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a10) {
            ctx->pc = 0x154A38u;
            return;
        }
    }
    ctx->pc = 0x154A18u;
}
