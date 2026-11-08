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

// Function: entry_0010c058
// Address: 0x10c058 - 0x10c070
void entry_0010c058_0x10c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c058_0x10c058");
#endif

    switch (ctx->pc) {
        case 0x10c06cu: goto label_10c06c;
        default: break;
    }

    ctx->pc = 0x10c058u;

    // 0x10c058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c05c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x10c060: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10c060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10c064: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C064u;
    SET_GPR_U32(ctx, 31, 0x10C06Cu);
    ctx->pc = 0x10C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C064u;
    // 0x10c068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C064u, 0x10C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C06Cu;
label_10c06c:
    // 0x10c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10c070u;
}
