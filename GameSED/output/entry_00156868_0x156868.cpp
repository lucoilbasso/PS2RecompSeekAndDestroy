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

// Function: entry_00156868
// Address: 0x156868 - 0x156894
void entry_00156868_0x156868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156868_0x156868");
#endif

    ctx->pc = 0x156868u;

    // 0x156868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15686c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15686cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156874: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x156874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x156878: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15687c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x15687cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x156880: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x156880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x156884: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x156884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x156888: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x156888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x15688c: 0xc046152  jal         func_118548
    ctx->pc = 0x15688Cu;
    SET_GPR_U32(ctx, 31, 0x156894u);
    ctx->pc = 0x156890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15688Cu;
    // 0x156890: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118548u, 0x15688Cu, 0x156894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156894u;
}
