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

// Function: entry_001b60f8
// Address: 0x1b60f8 - 0x1b6138
void entry_001b60f8_0x1b60f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b60f8_0x1b60f8");
#endif

    switch (ctx->pc) {
        case 0x1b6124u: goto label_1b6124;
        default: break;
    }

    ctx->pc = 0x1b60f8u;

    // 0x1b60f8: 0x26b0b400  addiu       $s0, $s5, -0x4C00
    ctx->pc = 0x1b60f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947840));
    // 0x1b60fc: 0x24a4b600  addiu       $a0, $a1, -0x4A00
    ctx->pc = 0x1b60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    // 0x1b6100: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6104: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b610c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b610cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6110: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b6110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b6114: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6118: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b611c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B611Cu;
    SET_GPR_U32(ctx, 31, 0x1B6124u);
    ctx->pc = 0x1B6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B611Cu;
    // 0x1b6120: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B611Cu, 0x1B6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6124u;
label_1b6124:
    // 0x1b6124: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6124u;
    {
        const bool branch_taken_0x1b6124 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6124) {
            ctx->pc = 0x1B6128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6124u;
            // 0x1b6128: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6138u;
            return;
        }
    }
    ctx->pc = 0x1B612Cu;
    // 0x1b612c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6130u;
    {
        const bool branch_taken_0x1b6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6130u;
        // 0x1b6134: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6130) {
            ctx->pc = 0x1B6140u;
            return;
        }
    }
    ctx->pc = 0x1B6138u;
}
