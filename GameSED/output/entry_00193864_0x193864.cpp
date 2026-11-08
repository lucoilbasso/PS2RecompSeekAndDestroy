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

// Function: entry_00193864
// Address: 0x193864 - 0x193880
void entry_00193864_0x193864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193864_0x193864");
#endif

    switch (ctx->pc) {
        case 0x193878u: goto label_193878;
        default: break;
    }

    ctx->pc = 0x193864u;

    // 0x193864: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x193864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x193868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19386c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x193870: 0xc04110c  jal         func_104430
    ctx->pc = 0x193870u;
    SET_GPR_U32(ctx, 31, 0x193878u);
    ctx->pc = 0x193874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193870u;
    // 0x193874: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x193870u, 0x193878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193878u;
label_193878:
    // 0x193878: 0x24500238  addiu       $s0, $v0, 0x238
    ctx->pc = 0x193878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    // 0x19387c: 0x0  nop
    ctx->pc = 0x19387cu;
    // NOP
    ctx->pc = 0x193880u;
}
