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

// Function: caseD_3
// Address: 0x1352d8 - 0x135338
void caseD_3_0x1352d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1352d8");
#endif

    switch (ctx->pc) {
        case 0x1352e0u: goto label_1352e0;
        case 0x1352ecu: goto label_1352ec;
        case 0x1352f8u: goto label_1352f8;
        default: break;
    }

    ctx->pc = 0x1352d8u;

    // 0x1352d8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1352D8u;
    SET_GPR_U32(ctx, 31, 0x1352E0u);
    ctx->pc = 0x1352DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352D8u;
    // 0x1352dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1352D8u, 0x1352E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352E0u;
label_1352e0:
    // 0x1352e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352e4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1352E4u;
    SET_GPR_U32(ctx, 31, 0x1352ECu);
    ctx->pc = 0x1352E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352E4u;
    // 0x1352e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1352E4u, 0x1352ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352ECu;
label_1352ec:
    // 0x1352ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1352ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352f0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1352F0u;
    SET_GPR_U32(ctx, 31, 0x1352F8u);
    ctx->pc = 0x1352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352F0u;
    // 0x1352f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1352F0u, 0x1352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352F8u;
label_1352f8:
    // 0x1352f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1352f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1352fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135300: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135304: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x135304u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x135308: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13530c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13531c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13531cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135324: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135328: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13532c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135330: 0x805087a  j           func_1421E8
    ctx->pc = 0x135330u;
    ctx->pc = 0x135334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135330u;
    // 0x135334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    ApCMTraceSetViewParameter__FP18ApCMTraceParameterffi_0x1421e8(rdram, ctx, runtime); return;
    ctx->pc = 0x135338u;
}
