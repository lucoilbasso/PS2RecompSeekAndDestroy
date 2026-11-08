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

// Function: entry_001c22c0
// Address: 0x1c22c0 - 0x1c22f4
void entry_001c22c0_0x1c22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c22c0_0x1c22c0");
#endif

    switch (ctx->pc) {
        case 0x1c22c8u: goto label_1c22c8;
        case 0x1c22e0u: goto label_1c22e0;
        default: break;
    }

    ctx->pc = 0x1c22c0u;

    // 0x1c22c0: 0xc0708c8  jal         func_1C2320
    ctx->pc = 0x1C22C0u;
    SET_GPR_U32(ctx, 31, 0x1C22C8u);
    ctx->pc = 0x1C22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22C0u;
    // 0x1c22c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2320u, 0x1C22C0u, 0x1C22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22C8u;
label_1c22c8:
    // 0x1c22c8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1c22cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c22ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22d0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1c22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1c22d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c22d8: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C22D8u;
    SET_GPR_U32(ctx, 31, 0x1C22E0u);
    ctx->pc = 0x1C22DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22D8u;
    // 0x1c22dc: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C22D8u, 0x1C22E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22E0u;
label_1c22e0:
    // 0x1c22e0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1c22e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c22e4: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1c22e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c22e8: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x1c22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x1c22ec: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x1c22ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x1c22f0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->pc = 0x1c22f4u;
}
