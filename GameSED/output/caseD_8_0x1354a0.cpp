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

// Function: caseD_8
// Address: 0x1354a0 - 0x135510
void caseD_8_0x1354a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1354a0");
#endif

    switch (ctx->pc) {
        case 0x1354bcu: goto label_1354bc;
        case 0x1354c8u: goto label_1354c8;
        case 0x1354f0u: goto label_1354f0;
        case 0x1354f8u: goto label_1354f8;
        case 0x135508u: goto label_135508;
        default: break;
    }

    ctx->pc = 0x1354a0u;

    // 0x1354a0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1354a4: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x1354a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x1354a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1354a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1354ac: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1354ACu;
    {
        const bool branch_taken_0x1354ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354ACu;
        // 0x1354b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354ac) {
            ctx->pc = 0x135534u;
            return;
        }
    }
    ctx->pc = 0x1354B4u;
    // 0x1354b4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1354B4u;
    SET_GPR_U32(ctx, 31, 0x1354BCu);
    ctx->pc = 0x1354B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354B4u;
    // 0x1354b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1354B4u, 0x1354BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354BCu;
label_1354bc:
    // 0x1354bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1354bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354c0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1354C0u;
    SET_GPR_U32(ctx, 31, 0x1354C8u);
    ctx->pc = 0x1354C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354C0u;
    // 0x1354c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1354C0u, 0x1354C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354C8u;
label_1354c8:
    // 0x1354c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1354cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1354ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1354d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1354d4: 0x10700011  beq         $v1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1354D4u;
    {
        const bool branch_taken_0x1354d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1354D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354D4u;
        // 0x1354d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354d4) {
            ctx->pc = 0x13551Cu;
            return;
        }
    }
    ctx->pc = 0x1354DCu;
    // 0x1354dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1354dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1354e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1354E0u;
    {
        const bool branch_taken_0x1354e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1354e0) {
            ctx->pc = 0x135510u;
            return;
        }
    }
    ctx->pc = 0x1354E8u;
    // 0x1354e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1354E8u;
    SET_GPR_U32(ctx, 31, 0x1354F0u);
    ctx->pc = 0x1354ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354E8u;
    // 0x1354ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1354E8u, 0x1354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F0u;
label_1354f0:
    // 0x1354f0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1354F0u;
    SET_GPR_U32(ctx, 31, 0x1354F8u);
    ctx->pc = 0x1354F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354F0u;
    // 0x1354f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1354F0u, 0x1354F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F8u;
label_1354f8:
    // 0x1354f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1354f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1354fc: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x1354fcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    // 0x135500: 0xc067a02  jal         func_19E808
    ctx->pc = 0x135500u;
    SET_GPR_U32(ctx, 31, 0x135508u);
    ctx->pc = 0x135504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135500u;
    // 0x135504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x135500u, 0x135508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135508u;
label_135508:
    // 0x135508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135508u;
    {
        const bool branch_taken_0x135508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135508u;
        // 0x13550c: 0x2022823  subu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135508) {
            ctx->pc = 0x13551Cu;
            return;
        }
    }
    ctx->pc = 0x135510u;
}
