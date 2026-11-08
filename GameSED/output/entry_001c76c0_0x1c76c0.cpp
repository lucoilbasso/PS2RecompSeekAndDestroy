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

// Function: entry_001c76c0
// Address: 0x1c76c0 - 0x1c7700
void entry_001c76c0_0x1c76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c76c0_0x1c76c0");
#endif

    switch (ctx->pc) {
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76f4u: goto label_1c76f4;
        default: break;
    }

    ctx->pc = 0x1c76c0u;

label_1c76c0:
    // 0x1c76c0: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1c76c4: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C76C4u;
    SET_GPR_U32(ctx, 31, 0x1C76CCu);
    ctx->pc = 0x1C76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C4u;
    // 0x1c76c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C76C4u, 0x1C76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76CCu;
label_1c76cc:
    // 0x1c76cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c76ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c76d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76d4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C76D4u;
    SET_GPR_U32(ctx, 31, 0x1C76DCu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C76D4u, 0x1C76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76DCu;
label_1c76dc:
    // 0x1c76dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c76dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76e0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1c76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1c76e4: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x1c76e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x1c76e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c76e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c76ec: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C76ECu;
    SET_GPR_U32(ctx, 31, 0x1C76F4u);
    ctx->pc = 0x1C76F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76ECu;
    // 0x1c76f0: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C76ECu, 0x1C76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76F4u;
label_1c76f4:
    // 0x1c76f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c76f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76f8: 0x643fff1  bgezl       $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C76F8u;
    {
        const bool branch_taken_0x1c76f8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c76f8) {
            ctx->pc = 0x1C76FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C76F8u;
            // 0x1c76fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C76C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76c0;
        }
    }
    ctx->pc = 0x1C7700u;
}
