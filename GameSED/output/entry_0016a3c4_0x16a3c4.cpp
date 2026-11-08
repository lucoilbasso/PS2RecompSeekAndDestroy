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

// Function: entry_0016a3c4
// Address: 0x16a3c4 - 0x16a3e4
void entry_0016a3c4_0x16a3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a3c4_0x16a3c4");
#endif

    switch (ctx->pc) {
        case 0x16a3d0u: goto label_16a3d0;
        default: break;
    }

    ctx->pc = 0x16a3c4u;

    // 0x16a3c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3c8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3C8u;
    // 0x16a3cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x16A3C8u, 0x16A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a3d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a3e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16a3e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16a3e4u;
}
