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

// Function: entry_001d6168
// Address: 0x1d6168 - 0x1d6188
void entry_001d6168_0x1d6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6168_0x1d6168");
#endif

    switch (ctx->pc) {
        case 0x1d6174u: goto label_1d6174;
        default: break;
    }

    ctx->pc = 0x1d6168u;

    // 0x1d6168: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1d616c: 0xc0755ac  jal         func_1D56B0
    ctx->pc = 0x1D616Cu;
    SET_GPR_U32(ctx, 31, 0x1D6174u);
    ctx->pc = 0x1D6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D616Cu;
    // 0x1d6170: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56B0u, 0x1D616Cu, 0x1D6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6174u;
label_1d6174:
    // 0x1d6174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6178: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d617c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d6180: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d6180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d6184: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x1d6184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x1d6188u;
}
