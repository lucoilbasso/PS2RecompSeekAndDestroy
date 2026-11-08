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

// Function: entry_00188784
// Address: 0x188784 - 0x1887a8
void entry_00188784_0x188784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188784_0x188784");
#endif

    switch (ctx->pc) {
        case 0x188790u: goto label_188790;
        default: break;
    }

    ctx->pc = 0x188784u;

    // 0x188784: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x188788: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x188788u;
    SET_GPR_U32(ctx, 31, 0x188790u);
    ctx->pc = 0x18878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188788u;
    // 0x18878c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x188788u, 0x188790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188790u;
label_188790:
    // 0x188790: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x188790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x188794: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x188798: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x18879c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1887a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1887a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1887a4: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x1887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
    ctx->pc = 0x1887a8u;
}
