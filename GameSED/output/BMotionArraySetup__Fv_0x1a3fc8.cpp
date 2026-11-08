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

// Function: BMotionArraySetup__Fv
// Address: 0x1a3fc8 - 0x1a40a0
void BMotionArraySetup__Fv_0x1a3fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionArraySetup__Fv_0x1a3fc8");
#endif

    switch (ctx->pc) {
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a4090u: goto label_1a4090;
        default: break;
    }

    ctx->pc = 0x1a3fc8u;

    // 0x1a3fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3fcc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a3fd0: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x1a3fd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3fd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3fdc: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x1a3fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1a3fe0: 0x2446ff80  addiu       $a2, $v0, -0x80
    ctx->pc = 0x1a3fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x1a3fe4: 0x0  nop
    ctx->pc = 0x1a3fe4u;
    // NOP
label_1a3fe8:
    // 0x1a3fe8: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1a3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1a3fec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a3ff0: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1a3ff0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a3ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a3ff8: 0x28832ee0  slti        $v1, $a0, 0x2EE0
    ctx->pc = 0x1a3ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12000) ? 1 : 0);
    // 0x1a3ffc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a4000: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A4000u;
    {
        const bool branch_taken_0x1a4000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4000u;
        // 0x1a4004: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4000) {
            ctx->pc = 0x1A3FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3fe8;
        }
    }
    ctx->pc = 0x1A4008u;
    // 0x1a4008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a400c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4010: 0x244280c0  addiu       $v0, $v0, -0x7F40
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934720));
    // 0x1a4014: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4018: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a4018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a401c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1a401cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1a4020: 0xaf82917c  sw          $v0, -0x6E84($gp)
    ctx->pc = 0x1a4020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 2));
    // 0x1a4024: 0xaf809184  sw          $zero, -0x6E7C($gp)
    ctx->pc = 0x1a4024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 0));
    // 0x1a4028: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A4028u;
    SET_GPR_U32(ctx, 31, 0x1A4030u);
    ctx->pc = 0x1A402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4028u;
    // 0x1a402c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A4028u, 0x1A4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4030u;
label_1a4030:
    // 0x1a4030: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a4034: 0xaf82918c  sw          $v0, -0x6E74($gp)
    ctx->pc = 0x1a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939020), GPR_U32(ctx, 2));
    // 0x1a4038: 0x24668140  addiu       $a2, $v1, -0x7EC0
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x1a403c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4040: 0x24c7fff0  addiu       $a3, $a2, -0x10
    ctx->pc = 0x1a4040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1a4044: 0x0  nop
    ctx->pc = 0x1a4044u;
    // NOP
label_1a4048:
    // 0x1a4048: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a404c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a4050: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a4054: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x1a4054u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a4058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a405c: 0x28a40fa0  slti        $a0, $a1, 0xFA0
    ctx->pc = 0x1a405cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1a4060: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A4060u;
    {
        const bool branch_taken_0x1a4060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4060u;
        // 0x1a4064: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4060) {
            ctx->pc = 0x1A4048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4048;
        }
    }
    ctx->pc = 0x1A4068u;
    // 0x1a4068: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a406c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4070: 0x24427b30  addiu       $v0, $v0, 0x7B30
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31536));
    // 0x1a4074: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4078: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1a4078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1a407c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1a407cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1a4080: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a4080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a4084: 0xaf829180  sw          $v0, -0x6E80($gp)
    ctx->pc = 0x1a4084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 2));
    // 0x1a4088: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A4088u;
    SET_GPR_U32(ctx, 31, 0x1A4090u);
    ctx->pc = 0x1A408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4088u;
    // 0x1a408c: 0xaf809188  sw          $zero, -0x6E78($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A4088u, 0x1A4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4090u;
label_1a4090:
    // 0x1a4090: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4094: 0xaf829190  sw          $v0, -0x6E70($gp)
    ctx->pc = 0x1a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U32(ctx, 2));
    // 0x1a4098: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4098u;
        // 0x1a409c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A40A0u;
}
