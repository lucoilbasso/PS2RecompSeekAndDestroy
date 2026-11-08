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

// Function: entry_00157e80
// Address: 0x157e80 - 0x157e94
void entry_00157e80_0x157e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e80_0x157e80");
#endif

    ctx->pc = 0x157e80u;

    // 0x157e80: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x157e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x157e84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e8c: 0xc055fb6  jal         func_157ED8
    ctx->pc = 0x157E8Cu;
    SET_GPR_U32(ctx, 31, 0x157E94u);
    ctx->pc = 0x157E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E8Cu;
    // 0x157e90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157ED8u, 0x157E8Cu, 0x157E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E94u;
}
