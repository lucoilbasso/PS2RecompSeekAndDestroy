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

// Function: entry_0012c520
// Address: 0x12c520 - 0x12c548
void entry_0012c520_0x12c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c520_0x12c520");
#endif

    switch (ctx->pc) {
        case 0x12c52cu: goto label_12c52c;
        default: break;
    }

    ctx->pc = 0x12c520u;

    // 0x12c520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c524: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12C524u;
    SET_GPR_U32(ctx, 31, 0x12C52Cu);
    ctx->pc = 0x12C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C524u;
    // 0x12c528: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12C524u, 0x12C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C52Cu;
label_12c52c:
    // 0x12c52c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x12c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12c530: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12c534: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12c538: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c53c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x12c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12c540: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x12c540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12c544: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x12c548u;
}
