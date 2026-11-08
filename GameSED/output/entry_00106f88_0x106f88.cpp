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

// Function: entry_00106f88
// Address: 0x106f88 - 0x106fa0
void entry_00106f88_0x106f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f88_0x106f88");
#endif

    ctx->pc = 0x106f88u;

    // 0x106f88: 0x2451f270  addiu       $s1, $v0, -0xD90
    ctx->pc = 0x106f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
    // 0x106f8c: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x106f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106f98: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x106F98u;
    SET_GPR_U32(ctx, 31, 0x106FA0u);
    ctx->pc = 0x106F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F98u;
    // 0x106f9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x106F98u, 0x106FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FA0u;
}
