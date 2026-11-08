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

// Function: entry_001b26f0
// Address: 0x1b26f0 - 0x1b2744
void entry_001b26f0_0x1b26f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b26f0_0x1b26f0");
#endif

    switch (ctx->pc) {
        case 0x1b26f8u: goto label_1b26f8;
        case 0x1b2730u: goto label_1b2730;
        default: break;
    }

    ctx->pc = 0x1b26f0u;

    // 0x1b26f0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B26F0u;
    SET_GPR_U32(ctx, 31, 0x1B26F8u);
    ctx->pc = 0x1B26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26F0u;
    // 0x1b26f4: 0x2610a6c0  addiu       $s0, $s0, -0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B26F0u, 0x1B26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26F8u;
label_1b26f8:
    // 0x1b26f8: 0x2623a700  addiu       $v1, $s1, -0x5900
    ctx->pc = 0x1b26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944512));
    // 0x1b26fc: 0x26479a40  addiu       $a3, $s2, -0x65C0
    ctx->pc = 0x1b26fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941248));
    // 0x1b2700: 0xae439a40  sw          $v1, -0x65C0($s2)
    ctx->pc = 0x1b2700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294941248), GPR_U32(ctx, 3));
    // 0x1b2704: 0x2664b180  addiu       $a0, $s3, -0x4E80
    ctx->pc = 0x1b2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947200));
    // 0x1b2708: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x1b270c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2710: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1b2714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2718: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b271c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1b271cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b2720: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b2720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2724: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b2724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b2728: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B2728u;
    SET_GPR_U32(ctx, 31, 0x1B2730u);
    ctx->pc = 0x1B272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2728u;
    // 0x1b272c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B2728u, 0x1B2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2730u;
label_1b2730:
    // 0x1b2730: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2730u;
    {
        const bool branch_taken_0x1b2730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2730u;
        // 0x1b2734: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2730) {
            ctx->pc = 0x1B2744u;
            return;
        }
    }
    ctx->pc = 0x1B2738u;
    // 0x1b2738: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b273c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B273Cu;
    {
        const bool branch_taken_0x1b273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B273Cu;
        // 0x1b2740: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b273c) {
            ctx->pc = 0x1B279Cu;
            return;
        }
    }
    ctx->pc = 0x1B2744u;
}
