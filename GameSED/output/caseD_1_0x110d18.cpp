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

// Function: caseD_1
// Address: 0x110d18 - 0x110d38
void caseD_1_0x110d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x110d18");
#endif

    switch (ctx->pc) {
        case 0x110d2cu: goto label_110d2c;
        default: break;
    }

    ctx->pc = 0x110d18u;

    // 0x110d18: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x110d18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110d1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x110d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d24: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110D24u;
    SET_GPR_U32(ctx, 31, 0x110D2Cu);
    ctx->pc = 0x110D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D24u;
    // 0x110d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110D24u, 0x110D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D2Cu;
label_110d2c:
    // 0x110d2c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x110D2Cu;
    {
        const bool branch_taken_0x110d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D2Cu;
        // 0x110d30: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d2c) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110D34u;
    // 0x110d34: 0x0  nop
    ctx->pc = 0x110d34u;
    // NOP
    ctx->pc = 0x110d38u;
}
