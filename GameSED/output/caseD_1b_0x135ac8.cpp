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

// Function: caseD_1b
// Address: 0x135ac8 - 0x135b30
void caseD_1b_0x135ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x135ac8");
#endif

    switch (ctx->pc) {
        case 0x135ad0u: goto label_135ad0;
        case 0x135adcu: goto label_135adc;
        case 0x135af8u: goto label_135af8;
        default: break;
    }

    ctx->pc = 0x135ac8u;

    // 0x135ac8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135AC8u;
    SET_GPR_U32(ctx, 31, 0x135AD0u);
    ctx->pc = 0x135ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AC8u;
    // 0x135acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135AC8u, 0x135AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AD0u;
label_135ad0:
    // 0x135ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ad4: 0xc050820  jal         func_142080
    ctx->pc = 0x135AD4u;
    SET_GPR_U32(ctx, 31, 0x135ADCu);
    ctx->pc = 0x135AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AD4u;
    // 0x135ad8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142080u, 0x135AD4u, 0x135ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135ADCu;
label_135adc:
    // 0x135adc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135ae0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135ae8: 0x106400d9  beq         $v1, $a0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x135AE8u;
    {
        const bool branch_taken_0x135ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AE8u;
        // 0x135aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ae8) {
            ctx->pc = 0x135E50u;
            return;
        }
    }
    ctx->pc = 0x135AF0u;
    // 0x135af0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135AF0u;
    SET_GPR_U32(ctx, 31, 0x135AF8u);
    ctx->pc = 0x135AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AF0u;
    // 0x135af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135AF0u, 0x135AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AF8u;
label_135af8:
    // 0x135af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135b10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135b14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135b14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135b18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135b1c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135b20: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135b24: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135b28: 0x8050808  j           func_142020
    ctx->pc = 0x135B28u;
    ctx->pc = 0x135B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B28u;
    // 0x135b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142020u;
    ApCameraChangeMoveRate__FP7WcActorf_0x142020(rdram, ctx, runtime); return;
    ctx->pc = 0x135B30u;
}
