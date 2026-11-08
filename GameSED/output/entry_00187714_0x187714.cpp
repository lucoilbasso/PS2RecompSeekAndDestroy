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

// Function: entry_00187714
// Address: 0x187714 - 0x187738
void entry_00187714_0x187714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187714_0x187714");
#endif

    switch (ctx->pc) {
        case 0x187720u: goto label_187720;
        default: break;
    }

    ctx->pc = 0x187714u;

    // 0x187714: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x187718: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x187718u;
    SET_GPR_U32(ctx, 31, 0x187720u);
    ctx->pc = 0x18771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187718u;
    // 0x18771c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x187718u, 0x187720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187720u;
label_187720:
    // 0x187720: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x187720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x187724: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x187724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x187728: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x18772c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187730: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x187730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187734: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x187734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
    ctx->pc = 0x187738u;
}
