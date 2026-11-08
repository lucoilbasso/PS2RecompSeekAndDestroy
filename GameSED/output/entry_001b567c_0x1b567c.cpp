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

// Function: entry_001b567c
// Address: 0x1b567c - 0x1b56a4
void entry_001b567c_0x1b567c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b567c_0x1b567c");
#endif

    switch (ctx->pc) {
        case 0x1b5694u: goto label_1b5694;
        default: break;
    }

    ctx->pc = 0x1b567cu;

    // 0x1b567c: 0x2630b240  addiu       $s0, $s1, -0x4DC0
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947392));
    // 0x1b5680: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b5684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5688: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1b5688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1b568c: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B568Cu;
    SET_GPR_U32(ctx, 31, 0x1B5694u);
    ctx->pc = 0x1B5690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B568Cu;
    // 0x1b5690: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B568Cu, 0x1B5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5694u;
label_1b5694:
    // 0x1b5694: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5694u;
    {
        const bool branch_taken_0x1b5694 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5694) {
            ctx->pc = 0x1B5698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5694u;
            // 0x1b5698: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B56A4u;
            return;
        }
    }
    ctx->pc = 0x1B569Cu;
    // 0x1b569c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B569Cu;
    {
        const bool branch_taken_0x1b569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B569Cu;
        // 0x1b56a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b569c) {
            ctx->pc = 0x1B56B4u;
            return;
        }
    }
    ctx->pc = 0x1B56A4u;
}
