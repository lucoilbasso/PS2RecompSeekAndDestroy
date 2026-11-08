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

// Function: ApMCardDataLoad__FP8ApcMCardii
// Address: 0x11ca50 - 0x11caf4
void ApMCardDataLoad__FP8ApcMCardii_0x11ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMCardDataLoad__FP8ApcMCardii_0x11ca50");
#endif

    switch (ctx->pc) {
        case 0x11cab8u: goto label_11cab8;
        case 0x11cae0u: goto label_11cae0;
        default: break;
    }

    ctx->pc = 0x11ca50u;

    // 0x11ca50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ca54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ca64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ca6c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11CA6Cu;
    {
        const bool branch_taken_0x11ca6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA6Cu;
        // 0x11ca70: 0x28a30002  slti        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca6c) {
            ctx->pc = 0x11CAB0u;
            goto label_11cab0;
        }
    }
    ctx->pc = 0x11CA74u;
    // 0x11ca74: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CA74u;
    {
        const bool branch_taken_0x11ca74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca74) {
            ctx->pc = 0x11CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA74u;
            // 0x11ca78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CA90u;
            goto label_11ca90;
        }
    }
    ctx->pc = 0x11CA7Cu;
    // 0x11ca7c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CA7Cu;
    {
        const bool branch_taken_0x11ca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA7Cu;
        // 0x11ca80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca7c) {
            ctx->pc = 0x11CAA0u;
            goto label_11caa0;
        }
    }
    ctx->pc = 0x11CA84u;
    // 0x11ca84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11CA84u;
    {
        const bool branch_taken_0x11ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA84u;
        // 0x11ca88: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca84) {
            ctx->pc = 0x11CAE8u;
            goto label_11cae8;
        }
    }
    ctx->pc = 0x11CA8Cu;
    // 0x11ca8c: 0x0  nop
    ctx->pc = 0x11ca8cu;
    // NOP
label_11ca90:
    // 0x11ca90: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CA90u;
    {
        const bool branch_taken_0x11ca90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA90u;
        // 0x11ca94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca90) {
            ctx->pc = 0x11CAD8u;
            goto label_11cad8;
        }
    }
    ctx->pc = 0x11CA98u;
    // 0x11ca98: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11CA98u;
    {
        const bool branch_taken_0x11ca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA98u;
        // 0x11ca9c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca98) {
            ctx->pc = 0x11CAE8u;
            goto label_11cae8;
        }
    }
    ctx->pc = 0x11CAA0u;
label_11caa0:
    // 0x11caa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11caa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11caa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11caa8: 0x80472be  j           func_11CAF8
    ctx->pc = 0x11CAA8u;
    ctx->pc = 0x11CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAA8u;
    // 0x11caac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CAF8u;
    ApMCardDataLoadSystem__FP8ApcMCard_0x11caf8(rdram, ctx, runtime); return;
    ctx->pc = 0x11CAB0u;
label_11cab0:
    // 0x11cab0: 0xc0472be  jal         func_11CAF8
    ctx->pc = 0x11CAB0u;
    SET_GPR_U32(ctx, 31, 0x11CAB8u);
    ctx->pc = 0x11CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CAF8u, 0x11CAB0u, 0x11CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAB8u;
label_11cab8:
    // 0x11cab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cabc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11cabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cacc: 0x80472d2  j           func_11CB48
    ctx->pc = 0x11CACCu;
    ctx->pc = 0x11CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CACCu;
    // 0x11cad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB48u;
    ApMCardDataLoadSingle__FP8ApcMCardi_0x11cb48(rdram, ctx, runtime); return;
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x0  nop
    ctx->pc = 0x11cad4u;
    // NOP
label_11cad8:
    // 0x11cad8: 0xc04702e  jal         func_11C0B8
    ctx->pc = 0x11CAD8u;
    SET_GPR_U32(ctx, 31, 0x11CAE0u);
    ctx->pc = 0x11C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B8u, 0x11CAD8u, 0x11CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAE0u;
label_11cae0:
    // 0x11cae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11cae8:
    // 0x11cae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11caec: 0x3e00008  jr          $ra
    ctx->pc = 0x11CAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAECu;
        // 0x11caf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CAF4u;
}
