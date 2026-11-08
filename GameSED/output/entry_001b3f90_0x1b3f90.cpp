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

// Function: entry_001b3f90
// Address: 0x1b3f90 - 0x1b4014
void entry_001b3f90_0x1b3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f90_0x1b3f90");
#endif

    switch (ctx->pc) {
        case 0x1b3fa8u: goto label_1b3fa8;
        case 0x1b3ff4u: goto label_1b3ff4;
        case 0x1b4004u: goto label_1b4004;
        case 0x1b400cu: goto label_1b400c;
        default: break;
    }

    ctx->pc = 0x1b3f90u;

    // 0x1b3f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3f94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3f98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3f9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3fa0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3FA0u;
    SET_GPR_U32(ctx, 31, 0x1B3FA8u);
    ctx->pc = 0x1B3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FA0u;
    // 0x1b3fa4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3FA0u, 0x1B3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FA8u;
label_1b3fa8:
    // 0x1b3fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3fb0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b3fb4: 0xae719a80  sw          $s1, -0x6580($s3)
    ctx->pc = 0x1b3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941312), GPR_U32(ctx, 17));
    // 0x1b3fb8: 0x2452a6c0  addiu       $s2, $v0, -0x5940
    ctx->pc = 0x1b3fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    // 0x1b3fbc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b3fc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3fc4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1b3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1b3fc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b3fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b3fcc: 0x2484b180  addiu       $a0, $a0, -0x4E80
    ctx->pc = 0x1b3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947200));
    // 0x1b3fd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b3fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3fd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fe0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b3fe4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1b3fe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fe8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3fec: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3FECu;
    SET_GPR_U32(ctx, 31, 0x1B3FF4u);
    ctx->pc = 0x1B3FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FECu;
    // 0x1b3ff0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3FECu, 0x1B3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FF4u;
label_1b3ff4:
    // 0x1b3ff4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3FF4u;
    {
        const bool branch_taken_0x1b3ff4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FF4u;
        // 0x1b3ff8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ff4) {
            ctx->pc = 0x1B4014u;
            return;
        }
    }
    ctx->pc = 0x1B3FFCu;
    // 0x1b3ffc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3FFCu;
    SET_GPR_U32(ctx, 31, 0x1B4004u);
    ctx->pc = 0x1B4000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3FFCu;
    // 0x1b4000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3FFCu, 0x1B4004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4004u;
label_1b4004:
    // 0x1b4004: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4004u;
    SET_GPR_U32(ctx, 31, 0x1B400Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4004u, 0x1B400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B400Cu;
label_1b400c:
    // 0x1b400c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B400Cu;
    {
        const bool branch_taken_0x1b400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B400Cu;
        // 0x1b4010: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b400c) {
            ctx->pc = 0x1B404Cu;
            return;
        }
    }
    ctx->pc = 0x1B4014u;
}
