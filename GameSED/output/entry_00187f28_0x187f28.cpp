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

// Function: entry_00187f28
// Address: 0x187f28 - 0x187f5c
void entry_00187f28_0x187f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f28_0x187f28");
#endif

    switch (ctx->pc) {
        case 0x187f58u: goto label_187f58;
        default: break;
    }

    ctx->pc = 0x187f28u;

    // 0x187f28: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x187f2c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x187f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187f30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187f3c: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187f40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x187f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x187f44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x187f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x187f48: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x187f4c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x187f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x187f50: 0xc061b96  jal         func_186E58
    ctx->pc = 0x187F50u;
    SET_GPR_U32(ctx, 31, 0x187F58u);
    ctx->pc = 0x187F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187F50u;
    // 0x187f54: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E58u, 0x187F50u, 0x187F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F58u;
label_187f58:
    // 0x187f58: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x187f5cu;
}
