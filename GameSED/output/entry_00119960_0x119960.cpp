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

// Function: entry_00119960
// Address: 0x119960 - 0x119988
void entry_00119960_0x119960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119960_0x119960");
#endif

    switch (ctx->pc) {
        case 0x119968u: goto label_119968;
        default: break;
    }

    ctx->pc = 0x119960u;

    // 0x119960: 0xc041794  jal         func_105E50
    ctx->pc = 0x119960u;
    SET_GPR_U32(ctx, 31, 0x119968u);
    ctx->pc = 0x119964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119960u;
    // 0x119964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x119960u, 0x119968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119968u;
label_119968:
    // 0x119968: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11996c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119970: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119974: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x119974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119978: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11997c: 0x2463d530  addiu       $v1, $v1, -0x2AD0
    ctx->pc = 0x11997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956336));
    // 0x119980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119984: 0x0  nop
    ctx->pc = 0x119984u;
    // NOP
    ctx->pc = 0x119988u;
}
