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

// Function: FontCenterGetUV__9WcFontManUissUs
// Address: 0x17ca48 - 0x17caec
void FontCenterGetUV__9WcFontManUissUs_0x17ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontCenterGetUV__9WcFontManUissUs_0x17ca48");
#endif

    switch (ctx->pc) {
        case 0x17ca90u: goto label_17ca90;
        case 0x17cab0u: goto label_17cab0;
        default: break;
    }

    ctx->pc = 0x17ca48u;

    // 0x17ca48: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x17ca48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x17ca4c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ca50: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x17ca54: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x17ca54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x17ca58: 0x2d0200ff  sltiu       $v0, $t0, 0xFF
    ctx->pc = 0x17ca58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x17ca5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ca60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ca64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ca6c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x17ca6cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x17ca70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17ca74: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x17ca78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ca7c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x17ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA80u;
    {
        const bool branch_taken_0x17ca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA80u;
        // 0x17ca84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca80) {
            ctx->pc = 0x17CA94u;
            goto label_17ca94;
        }
    }
    ctx->pc = 0x17CA88u;
    // 0x17ca88: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17CA88u;
    SET_GPR_U32(ctx, 31, 0x17CA90u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17CA88u, 0x17CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA90u;
label_17ca90:
    // 0x17ca90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ca90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ca94:
    // 0x17ca94: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x17ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17ca98: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x17ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17caa0: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x17caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x17caa4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x17caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17caa8: 0xc061004  jal         func_184010
    ctx->pc = 0x17CAA8u;
    SET_GPR_U32(ctx, 31, 0x17CAB0u);
    ctx->pc = 0x17CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CAA8u;
    // 0x17caac: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184010u, 0x17CAA8u, 0x17CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CAB0u;
label_17cab0:
    // 0x17cab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17cab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cab4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CAB4u;
    {
        const bool branch_taken_0x17cab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAB4u;
        // 0x17cab8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cab4) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17CABCu;
    // 0x17cabc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x17cabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17cac0: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x17cac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17cac4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x17cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17cac8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x17cacc: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x17caccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17cad0:
    // 0x17cad0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cad4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17cad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cad8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17cad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cadc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17cadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17cae0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cae4: 0x3e00008  jr          $ra
    ctx->pc = 0x17CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAE4u;
        // 0x17cae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CAECu;
}
