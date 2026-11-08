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

// Function: entry_00160f00
// Address: 0x160f00 - 0x160f20
void entry_00160f00_0x160f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160f00_0x160f00");
#endif

    switch (ctx->pc) {
        case 0x160f0cu: goto label_160f0c;
        default: break;
    }

    ctx->pc = 0x160f00u;

    // 0x160f00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160f04: 0xc065e6a  jal         func_1979A8
    ctx->pc = 0x160F04u;
    SET_GPR_U32(ctx, 31, 0x160F0Cu);
    ctx->pc = 0x160F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F04u;
    // 0x160f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979A8u, 0x160F04u, 0x160F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F0Cu;
label_160f0c:
    // 0x160f0c: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x160f10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x160f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160f14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x160f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x160f18: 0x26020cc0  addiu       $v0, $s0, 0xCC0
    ctx->pc = 0x160f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    // 0x160f1c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x160f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x160f20u;
}
