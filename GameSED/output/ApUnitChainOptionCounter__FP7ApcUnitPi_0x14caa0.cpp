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

// Function: ApUnitChainOptionCounter__FP7ApcUnitPi
// Address: 0x14caa0 - 0x14cb20
void ApUnitChainOptionCounter__FP7ApcUnitPi_0x14caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitChainOptionCounter__FP7ApcUnitPi_0x14caa0");
#endif

    switch (ctx->pc) {
        case 0x14cad4u: goto label_14cad4;
        case 0x14caf4u: goto label_14caf4;
        default: break;
    }

    ctx->pc = 0x14caa0u;

    // 0x14caa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14caa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14caa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14caa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14caac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14cab0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14cab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14cab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14cab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cabc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14cac0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14CAC0u;
    {
        const bool branch_taken_0x14cac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAC0u;
        // 0x14cac4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cac0) {
            ctx->pc = 0x14CACCu;
            goto label_14cacc;
        }
    }
    ctx->pc = 0x14CAC8u;
    // 0x14cac8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14cacc:
    // 0x14cacc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14CACCu;
    SET_GPR_U32(ctx, 31, 0x14CAD4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14CACCu, 0x14CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAD4u;
label_14cad4:
    // 0x14cad4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cadc: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14cae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cae4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CAE4u;
    {
        const bool branch_taken_0x14cae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAE4u;
        // 0x14cae8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cae4) {
            ctx->pc = 0x14CAF4u;
            goto label_14caf4;
        }
    }
    ctx->pc = 0x14CAECu;
    // 0x14caec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CAECu;
    SET_GPR_U32(ctx, 31, 0x14CAF4u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CAECu, 0x14CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAF4u;
label_14caf4:
    // 0x14caf4: 0x8e2301bc  lw          $v1, 0x1BC($s1)
    ctx->pc = 0x14caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x14caf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14caf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cafc: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x14cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x14cb00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x14cb04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14cb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cb08: 0xae3001bc  sw          $s0, 0x1BC($s1)
    ctx->pc = 0x14cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 16));
    // 0x14cb0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14cb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14cb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14cb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14cb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB18u;
        // 0x14cb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CB20u;
}
