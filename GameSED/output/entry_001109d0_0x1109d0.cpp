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

// Function: entry_001109d0
// Address: 0x1109d0 - 0x110a10
void entry_001109d0_0x1109d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109d0_0x1109d0");
#endif

    switch (ctx->pc) {
        case 0x1109d8u: goto label_1109d8;
        case 0x110a0cu: goto label_110a0c;
        default: break;
    }

    ctx->pc = 0x1109d0u;

    // 0x1109d0: 0xc061422  jal         func_185088
    ctx->pc = 0x1109D0u;
    SET_GPR_U32(ctx, 31, 0x1109D8u);
    ctx->pc = 0x1109D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109D0u;
    // 0x1109d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1109D0u, 0x1109D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109D8u;
label_1109d8:
    // 0x1109d8: 0x26430110  addiu       $v1, $s2, 0x110
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x1109dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1109dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1109e0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1109e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1109e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1109e8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1109ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1109f0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1109F0u;
    {
        const bool branch_taken_0x1109f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1109f0) {
            ctx->pc = 0x110A10u;
            return;
        }
    }
    ctx->pc = 0x1109F8u;
    // 0x1109f8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1109f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1109fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110a04: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110A04u;
    SET_GPR_U32(ctx, 31, 0x110A0Cu);
    ctx->pc = 0x110A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A04u;
    // 0x110a08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110A04u, 0x110A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A0Cu;
label_110a0c:
    // 0x110a0c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x110a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110a10u;
}
