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

// Function: TankTurretRotate__7ApcTankib
// Address: 0x155810 - 0x1558b0
void TankTurretRotate__7ApcTankib_0x155810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankTurretRotate__7ApcTankib_0x155810");
#endif

    switch (ctx->pc) {
        case 0x155840u: goto label_155840;
        case 0x155854u: goto label_155854;
        case 0x155868u: goto label_155868;
        default: break;
    }

    ctx->pc = 0x155810u;

    // 0x155810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155814: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x155814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15581c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155820: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155820u;
        // 0x155824: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155820) {
            ctx->pc = 0x155848u;
            goto label_155848;
        }
    }
    ctx->pc = 0x155828u;
    // 0x155828: 0x8e050310  lw          $a1, 0x310($s0)
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x15582c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x15582cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x155830: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x155830u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x155834: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x155834u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x155838: 0xc058528  jal         func_1614A0
    ctx->pc = 0x155838u;
    SET_GPR_U32(ctx, 31, 0x155840u);
    ctx->pc = 0x15583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155838u;
    // 0x15583c: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614A0u, 0x155838u, 0x155840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155840u;
label_155840:
    // 0x155840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155840u;
    {
        const bool branch_taken_0x155840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155840u;
        // 0x155844: 0x8e04076c  lw          $a0, 0x76C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155840) {
            ctx->pc = 0x155858u;
            goto label_155858;
        }
    }
    ctx->pc = 0x155848u;
label_155848:
    // 0x155848: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15584c: 0xc058562  jal         func_161588
    ctx->pc = 0x15584Cu;
    SET_GPR_U32(ctx, 31, 0x155854u);
    ctx->pc = 0x155850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15584Cu;
    // 0x155850: 0x8e060310  lw          $a2, 0x310($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x15584Cu, 0x155854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155854u;
label_155854:
    // 0x155854: 0x8e04076c  lw          $a0, 0x76C($s0)
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
label_155858:
    // 0x155858: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x155858u;
    {
        const bool branch_taken_0x155858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155858) {
            ctx->pc = 0x15585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155858u;
            // 0x15585c: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15586Cu;
            goto label_15586c;
        }
    }
    ctx->pc = 0x155860u;
    // 0x155860: 0xc061944  jal         func_186510
    ctx->pc = 0x155860u;
    SET_GPR_U32(ctx, 31, 0x155868u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x155860u, 0x155868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_15586c:
    // 0x15586c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x155870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x155870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x155874: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155874) {
            ctx->pc = 0x155878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155874u;
            // 0x155878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1558A4u;
            goto label_1558a4;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x155880: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x155884: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x155884u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x155888: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15588c: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x15588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x155890: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x155890u;
    {
        const bool branch_taken_0x155890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155890) {
            ctx->pc = 0x155894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155890u;
            // 0x155894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1558A4u;
            goto label_1558a4;
        }
    }
    ctx->pc = 0x155898u;
    // 0x155898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15589c: 0xae020850  sw          $v0, 0x850($s0)
    ctx->pc = 0x15589cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
    // 0x1558a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1558a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1558a4:
    // 0x1558a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1558a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1558a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1558A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558A8u;
        // 0x1558ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558B0u;
}
