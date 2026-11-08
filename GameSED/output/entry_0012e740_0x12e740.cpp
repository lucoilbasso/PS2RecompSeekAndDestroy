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

// Function: entry_0012e740
// Address: 0x12e740 - 0x12e760
void entry_0012e740_0x12e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e740_0x12e740");
#endif

    switch (ctx->pc) {
        case 0x12e758u: goto label_12e758;
        default: break;
    }

    ctx->pc = 0x12e740u;

    // 0x12e740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e744: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e74c: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
    // 0x12e750: 0xc04c8d8  jal         func_132360
    ctx->pc = 0x12E750u;
    SET_GPR_U32(ctx, 31, 0x12E758u);
    ctx->pc = 0x12E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E750u;
    // 0x12e754: 0x8e300150  lw          $s0, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132360u, 0x12E750u, 0x12E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E758u;
label_12e758:
    // 0x12e758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e75c: 0x26220198  addiu       $v0, $s1, 0x198
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    ctx->pc = 0x12e760u;
}
