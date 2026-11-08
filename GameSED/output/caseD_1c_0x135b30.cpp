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

// Function: caseD_1c
// Address: 0x135b30 - 0x135b90
void caseD_1c_0x135b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1c_0x135b30");
#endif

    switch (ctx->pc) {
        case 0x135b38u: goto label_135b38;
        case 0x135b44u: goto label_135b44;
        case 0x135b58u: goto label_135b58;
        default: break;
    }

    ctx->pc = 0x135b30u;

    // 0x135b30: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135B30u;
    SET_GPR_U32(ctx, 31, 0x135B38u);
    ctx->pc = 0x135B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B30u;
    // 0x135b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135B30u, 0x135B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B38u;
label_135b38:
    // 0x135b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b3c: 0xc050838  jal         func_1420E0
    ctx->pc = 0x135B3Cu;
    SET_GPR_U32(ctx, 31, 0x135B44u);
    ctx->pc = 0x135B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B3Cu;
    // 0x135b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1420E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1420E0u, 0x135B3Cu, 0x135B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B44u;
label_135b44:
    // 0x135b44: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x135b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x135b48: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x135B48u;
    {
        const bool branch_taken_0x135b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B48u;
        // 0x135b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b48) {
            ctx->pc = 0x135E50u;
            return;
        }
    }
    ctx->pc = 0x135B50u;
    // 0x135b50: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135B50u;
    SET_GPR_U32(ctx, 31, 0x135B58u);
    ctx->pc = 0x135B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B50u;
    // 0x135b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135B50u, 0x135B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B58u;
label_135b58:
    // 0x135b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135b74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135b74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135b78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135b78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135b7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135b80: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135b84: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135b88: 0x8050850  j           func_142140
    ctx->pc = 0x135B88u;
    ctx->pc = 0x135B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B88u;
    // 0x135b8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    ApCameraChangeRotRate__FP7WcActorf_0x142140(rdram, ctx, runtime); return;
    ctx->pc = 0x135B90u;
}
