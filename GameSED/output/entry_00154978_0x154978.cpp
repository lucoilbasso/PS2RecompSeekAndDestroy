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

// Function: entry_00154978
// Address: 0x154978 - 0x154998
void entry_00154978_0x154978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154978_0x154978");
#endif

    switch (ctx->pc) {
        case 0x154990u: goto label_154990;
        default: break;
    }

    ctx->pc = 0x154978u;

    // 0x154978: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15497c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154980u;
    {
        const bool branch_taken_0x154980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154980u;
        // 0x154984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154980) {
            ctx->pc = 0x154998u;
            return;
        }
    }
    ctx->pc = 0x154988u;
    // 0x154988: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x154988u;
    SET_GPR_U32(ctx, 31, 0x154990u);
    ctx->pc = 0x15498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154988u;
    // 0x15498c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x154988u, 0x154990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154990u;
label_154990:
    // 0x154990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x154990u;
    {
        const bool branch_taken_0x154990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154990u;
        // 0x154994: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154990) {
            ctx->pc = 0x1549B4u;
            return;
        }
    }
    ctx->pc = 0x154998u;
}
