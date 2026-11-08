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

// Function: entry_0011d1e8
// Address: 0x11d1e8 - 0x11d22c
void entry_0011d1e8_0x11d1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d1e8_0x11d1e8");
#endif

    switch (ctx->pc) {
        case 0x11d204u: goto label_11d204;
        case 0x11d210u: goto label_11d210;
        case 0x11d218u: goto label_11d218;
        default: break;
    }

    ctx->pc = 0x11d1e8u;

    // 0x11d1e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d1ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x11d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11d1f0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11d1f4: 0x24216fe0  addiu       $at, $at, 0x6FE0
    ctx->pc = 0x11d1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28640));
    // 0x11d1f8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x11d1fc: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x11D1FCu;
    SET_GPR_U32(ctx, 31, 0x11D204u);
    ctx->pc = 0x11D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1FCu;
    // 0x11d200: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDA8u, 0x11D1FCu, 0x11D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D204u;
label_11d204:
    // 0x11d204: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d208: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11D208u;
    SET_GPR_U32(ctx, 31, 0x11D210u);
    ctx->pc = 0x11D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D208u;
    // 0x11d20c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11D208u, 0x11D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D210u;
label_11d210:
    // 0x11d210: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11D210u;
    SET_GPR_U32(ctx, 31, 0x11D218u);
    ctx->pc = 0x11D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D210u;
    // 0x11d214: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11D210u, 0x11D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D218u;
label_11d218:
    // 0x11d218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d21c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D220u;
    {
        const bool branch_taken_0x11d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D220u;
        // 0x11d224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d220) {
            ctx->pc = 0x11D22Cu;
            return;
        }
    }
    ctx->pc = 0x11D228u;
    // 0x11d228: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x11d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x11d22cu;
}
