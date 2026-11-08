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

// Function: entry_001c14fc
// Address: 0x1c14fc - 0x1c1524
void entry_001c14fc_0x1c14fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c14fc_0x1c14fc");
#endif

    switch (ctx->pc) {
        case 0x1c1520u: goto label_1c1520;
        default: break;
    }

    ctx->pc = 0x1c14fcu;

    // 0x1c14fc: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x1c14fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1c1500: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1c1504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1508: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c1508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c150c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1c150cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1514: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c1514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1518: 0xc070664  jal         func_1C1990
    ctx->pc = 0x1C1518u;
    SET_GPR_U32(ctx, 31, 0x1C1520u);
    ctx->pc = 0x1C151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1518u;
    // 0x1c151c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1990u, 0x1C1518u, 0x1C1520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1520u;
label_1c1520:
    // 0x1c1520: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->pc = 0x1c1524u;
}
