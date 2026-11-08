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

// Function: caseD_f
// Address: 0x1cb8c8 - 0x1cb900
void caseD_f_0x1cb8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1cb8c8");
#endif

    switch (ctx->pc) {
        case 0x1cb8e4u: goto label_1cb8e4;
        default: break;
    }

    ctx->pc = 0x1cb8c8u;

    // 0x1cb8c8: 0xa62003f8  sh          $zero, 0x3F8($s1)
    ctx->pc = 0x1cb8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cb8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1cb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1cb8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d8: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x1cb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x1cb8dc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB8DCu;
    SET_GPR_U32(ctx, 31, 0x1CB8E4u);
    ctx->pc = 0x1CB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8DCu;
    // 0x1cb8e0: 0xa2200477  sb          $zero, 0x477($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB8DCu, 0x1CB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8E4u;
label_1cb8e4:
    // 0x1cb8e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8ec: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cb8f0: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x1cb8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1cb8f4: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1CB8F4u;
    {
        const bool branch_taken_0x1cb8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8F4u;
        // 0x1cb8f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f4) {
            ctx->pc = 0x1CBA94u;
            return;
        }
    }
    ctx->pc = 0x1CB8FCu;
    // 0x1cb8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb900u;
}
