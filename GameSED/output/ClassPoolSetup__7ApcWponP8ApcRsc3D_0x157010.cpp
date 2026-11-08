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

// Function: ClassPoolSetup__7ApcWponP8ApcRsc3D
// Address: 0x157010 - 0x1570a0
void ClassPoolSetup__7ApcWponP8ApcRsc3D_0x157010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassPoolSetup__7ApcWponP8ApcRsc3D_0x157010");
#endif

    switch (ctx->pc) {
        case 0x157038u: goto label_157038;
        case 0x157040u: goto label_157040;
        case 0x157048u: goto label_157048;
        default: break;
    }

    ctx->pc = 0x157010u;

    // 0x157010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157014: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x157018: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x15701c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157024: 0x24701028  addiu       $s0, $v1, 0x1028
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4136));
    // 0x157028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15702c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157034: 0x2452f0d0  addiu       $s2, $v0, -0xF30
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963408));
label_157038:
    // 0x157038: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x157038u;
    SET_GPR_U32(ctx, 31, 0x157040u);
    ctx->pc = 0x15703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157038u;
    // 0x15703c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x157038u, 0x157040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157040u;
label_157040:
    // 0x157040: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x157040u;
    SET_GPR_U32(ctx, 31, 0x157048u);
    ctx->pc = 0x157044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157040u;
    // 0x157044: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x157040u, 0x157048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x157048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15704c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15704cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x157050: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157050u;
    {
        const bool branch_taken_0x157050 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x157054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157050u;
        // 0x157054: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157050) {
            ctx->pc = 0x157060u;
            goto label_157060;
        }
    }
    ctx->pc = 0x157058u;
    // 0x157058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157058u;
    {
        const bool branch_taken_0x157058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157058u;
        // 0x15705c: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157058) {
            ctx->pc = 0x157068u;
            goto label_157068;
        }
    }
    ctx->pc = 0x157060u;
label_157060:
    // 0x157060: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x157064: 0xac43026c  sw          $v1, 0x26C($v0)
    ctx->pc = 0x157064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 3));
label_157068:
    // 0x157068: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x157068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15706c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15706cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x157070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x157074: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x157074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x157078: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x157078u;
    {
        const bool branch_taken_0x157078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157078u;
        // 0x15707c: 0xac60026c  sw          $zero, 0x26C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157078) {
            ctx->pc = 0x157038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157038;
        }
    }
    ctx->pc = 0x157080u;
    // 0x157080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157084: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x157088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15708c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15708cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x157090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157094: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x157094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x157098: 0x3e00008  jr          $ra
    ctx->pc = 0x157098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157098u;
        // 0x15709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1570A0u;
}
