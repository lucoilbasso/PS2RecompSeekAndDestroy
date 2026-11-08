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

// Function: entry_001ba1a0
// Address: 0x1ba1a0 - 0x1ba1c8
void entry_001ba1a0_0x1ba1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba1a0_0x1ba1a0");
#endif

    switch (ctx->pc) {
        case 0x1ba1a8u: goto label_1ba1a8;
        default: break;
    }

    ctx->pc = 0x1ba1a0u;

    // 0x1ba1a0: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BA1A0u;
    SET_GPR_U32(ctx, 31, 0x1BA1A8u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BA1A0u, 0x1BA1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A8u;
label_1ba1a8:
    // 0x1ba1a8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1ba1ac: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1ba1b0: 0x8c90d684  lw          $s0, -0x297C($a0)
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x40D684u));
    // 0x1ba1b4: 0xac71d688  sw          $s1, -0x2978($v1)
    ctx->pc = 0x1ba1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x40D688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40D688u, _value); } while (0);
    // 0x1ba1b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA1B8u;
    {
        const bool branch_taken_0x1ba1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1B8u;
        // 0x1ba1bc: 0xac92d684  sw          $s2, -0x297C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956676), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1b8) {
            ctx->pc = 0x1BA1C8u;
            return;
        }
    }
    ctx->pc = 0x1BA1C0u;
    // 0x1ba1c0: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1BA1C0u;
    SET_GPR_U32(ctx, 31, 0x1BA1C8u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1BA1C0u, 0x1BA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1C8u;
}
