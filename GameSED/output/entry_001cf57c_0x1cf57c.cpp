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

// Function: entry_001cf57c
// Address: 0x1cf57c - 0x1cf5a0
void entry_001cf57c_0x1cf57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf57c_0x1cf57c");
#endif

    switch (ctx->pc) {
        case 0x1cf594u: goto label_1cf594;
        default: break;
    }

    ctx->pc = 0x1cf57cu;

    // 0x1cf57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf588: 0x2610e1b0  addiu       $s0, $s0, -0x1E50
    ctx->pc = 0x1cf588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959536));
    // 0x1cf58c: 0xc074066  jal         func_1D0198
    ctx->pc = 0x1CF58Cu;
    SET_GPR_U32(ctx, 31, 0x1CF594u);
    ctx->pc = 0x1CF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF58Cu;
    // 0x1cf590: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0198u, 0x1CF58Cu, 0x1CF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF594u;
label_1cf594:
    // 0x1cf594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf598: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1CF598u;
    SET_GPR_U32(ctx, 31, 0x1CF5A0u);
    ctx->pc = 0x1CF59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF598u;
    // 0x1cf59c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1CF598u, 0x1CF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF5A0u;
}
