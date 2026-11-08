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

// Function: entry_001ddbbc
// Address: 0x1ddbbc - 0x1ddbe4
void entry_001ddbbc_0x1ddbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddbbc_0x1ddbbc");
#endif

    switch (ctx->pc) {
        case 0x1ddbc8u: goto label_1ddbc8;
        default: break;
    }

    ctx->pc = 0x1ddbbcu;

    // 0x1ddbbc: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1ddbc0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1DDBC0u;
    SET_GPR_U32(ctx, 31, 0x1DDBC8u);
    ctx->pc = 0x1DDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBC0u;
    // 0x1ddbc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DDBC0u, 0x1DDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBC8u;
label_1ddbc8:
    // 0x1ddbc8: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1ddbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1ddbcc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ddbd0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1ddbd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ddbd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ddbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ddbdc: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x1ddbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
    // 0x1ddbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ddbe4u;
}
