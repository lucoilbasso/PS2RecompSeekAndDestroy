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

// Function: caseD_a
// Address: 0x1355a8 - 0x135608
void caseD_a_0x1355a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1355a8");
#endif

    switch (ctx->pc) {
        case 0x1355b0u: goto label_1355b0;
        case 0x1355bcu: goto label_1355bc;
        case 0x1355c8u: goto label_1355c8;
        default: break;
    }

    ctx->pc = 0x1355a8u;

    // 0x1355a8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1355A8u;
    SET_GPR_U32(ctx, 31, 0x1355B0u);
    ctx->pc = 0x1355ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355A8u;
    // 0x1355ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1355A8u, 0x1355B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355B0u;
label_1355b0:
    // 0x1355b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1355b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355b4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1355B4u;
    SET_GPR_U32(ctx, 31, 0x1355BCu);
    ctx->pc = 0x1355B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355B4u;
    // 0x1355b8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1355B4u, 0x1355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355BCu;
label_1355bc:
    // 0x1355bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1355bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355c0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1355C0u;
    SET_GPR_U32(ctx, 31, 0x1355C8u);
    ctx->pc = 0x1355C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355C0u;
    // 0x1355c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1355C0u, 0x1355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C8u;
label_1355c8:
    // 0x1355c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1355c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1355ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1355d0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1355d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1355d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1355d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1355d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1355d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1355dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1355dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1355e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1355e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1355e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1355e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1355e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1355ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1355ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1355f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1355f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1355f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1355f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1355f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1355fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1355fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135600: 0x8050900  j           func_142400
    ctx->pc = 0x135600u;
    ctx->pc = 0x135604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135600u;
    // 0x135604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142400u;
    ApCameraSetRolling__FP7WcActorffi_0x142400(rdram, ctx, runtime); return;
    ctx->pc = 0x135608u;
}
