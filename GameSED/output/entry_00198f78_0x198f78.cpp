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

// Function: entry_00198f78
// Address: 0x198f78 - 0x198f98
void entry_00198f78_0x198f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f78_0x198f78");
#endif

    switch (ctx->pc) {
        case 0x198f84u: goto label_198f84;
        default: break;
    }

    ctx->pc = 0x198f78u;

    // 0x198f78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f7c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x198F7Cu;
    SET_GPR_U32(ctx, 31, 0x198F84u);
    ctx->pc = 0x198F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F7Cu;
    // 0x198f80: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x198F7Cu, 0x198F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F84u;
label_198f84:
    // 0x198f84: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x198f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x198f88: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x198f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x198f8c: 0x2610a890  addiu       $s0, $s0, -0x5770
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944912));
    // 0x198f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f94: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x198f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    ctx->pc = 0x198f98u;
}
