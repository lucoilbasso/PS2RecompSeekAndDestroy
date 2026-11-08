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

// Function: entry_001b4278
// Address: 0x1b4278 - 0x1b4298
void entry_001b4278_0x1b4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4278_0x1b4278");
#endif

    switch (ctx->pc) {
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4288u: goto label_1b4288;
        default: break;
    }

    ctx->pc = 0x1b4278u;

    // 0x1b4278: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4278u;
    SET_GPR_U32(ctx, 31, 0x1B4280u);
    ctx->pc = 0x1B427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4278u;
    // 0x1b427c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4278u, 0x1B4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4280u;
label_1b4280:
    // 0x1b4280: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4280u;
    SET_GPR_U32(ctx, 31, 0x1B4288u);
    ctx->pc = 0x1B4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4280u;
    // 0x1b4284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4280u, 0x1B4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4288u;
label_1b4288:
    // 0x1b4288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b428c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4290: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b4290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b4294: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b4294u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1b4298u;
}
