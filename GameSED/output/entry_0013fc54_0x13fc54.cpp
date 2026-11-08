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

// Function: entry_0013fc54
// Address: 0x13fc54 - 0x13fc74
void entry_0013fc54_0x13fc54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fc54_0x13fc54");
#endif

    ctx->pc = 0x13fc54u;

    // 0x13fc54: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FC54u;
    {
        const bool branch_taken_0x13fc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC54u;
        // 0x13fc58: 0x26630040  addiu       $v1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc54) {
            ctx->pc = 0x13FC74u;
            return;
        }
    }
    ctx->pc = 0x13FC5Cu;
    // 0x13fc5c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x13fc5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13fc60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13fc64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc6c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13FC6Cu;
    SET_GPR_U32(ctx, 31, 0x13FC74u);
    ctx->pc = 0x13FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC6Cu;
    // 0x13fc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FC6Cu, 0x13FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC74u;
}
