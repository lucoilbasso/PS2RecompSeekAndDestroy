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

// Function: entry_0014d440
// Address: 0x14d440 - 0x14d478
void entry_0014d440_0x14d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d440_0x14d440");
#endif

    switch (ctx->pc) {
        case 0x14d44cu: goto label_14d44c;
        default: break;
    }

    ctx->pc = 0x14d440u;

    // 0x14d440: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14d444: 0xc0529f0  jal         func_14A7C0
    ctx->pc = 0x14D444u;
    SET_GPR_U32(ctx, 31, 0x14D44Cu);
    ctx->pc = 0x14D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D444u;
    // 0x14d448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x14D444u, 0x14D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D44Cu;
label_14d44c:
    // 0x14d44c: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14d450: 0xae000690  sw          $zero, 0x690($s0)
    ctx->pc = 0x14d450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 0));
    // 0x14d454: 0xae000694  sw          $zero, 0x694($s0)
    ctx->pc = 0x14d454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 0));
    // 0x14d458: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d45c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x14d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x14d460: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x14d464: 0xae0006d8  sw          $zero, 0x6D8($s0)
    ctx->pc = 0x14d464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1752), GPR_U32(ctx, 0));
    // 0x14d468: 0xae0006a4  sw          $zero, 0x6A4($s0)
    ctx->pc = 0x14d468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1700), GPR_U32(ctx, 0));
    // 0x14d46c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14d470: 0x260206d4  addiu       $v0, $s0, 0x6D4
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x14d474: 0x0  nop
    ctx->pc = 0x14d474u;
    // NOP
    ctx->pc = 0x14d478u;
}
