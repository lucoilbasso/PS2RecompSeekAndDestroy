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

// Function: ImagePageInfoGetImage__9ApcObjRsci
// Address: 0x103fa8 - 0x104060
void ImagePageInfoGetImage__9ApcObjRsci_0x103fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoGetImage__9ApcObjRsci_0x103fa8");
#endif

    switch (ctx->pc) {
        case 0x103fe0u: goto label_103fe0;
        case 0x104018u: goto label_104018;
        case 0x104048u: goto label_104048;
        default: break;
    }

    ctx->pc = 0x103fa8u;

    // 0x103fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103fb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103fb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103fc0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103fc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103FC4u;
    {
        const bool branch_taken_0x103fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FC4u;
        // 0x103fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fc4) {
            ctx->pc = 0x103FE0u;
            goto label_103fe0;
        }
    }
    ctx->pc = 0x103FCCu;
    // 0x103fcc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x103fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x103fd0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x103fd4: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x103fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x103fd8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103FD8u;
    SET_GPR_U32(ctx, 31, 0x103FE0u);
    ctx->pc = 0x103FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FD8u;
    // 0x103fdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103FD8u, 0x103FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FE0u;
label_103fe0:
    // 0x103fe0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x103FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE0u;
        // 0x103fe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x103FF8u;
            goto label_103ff8;
        }
    }
    ctx->pc = 0x103FE8u;
    // 0x103fe8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103fec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x103fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103ff0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103FF0u;
    {
        const bool branch_taken_0x103ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103ff0) {
            ctx->pc = 0x103FFCu;
            goto label_103ffc;
        }
    }
    ctx->pc = 0x103FF8u;
label_103ff8:
    // 0x103ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103ffc:
    // 0x103ffc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x103FFCu;
    {
        const bool branch_taken_0x103ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FFCu;
        // 0x104000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ffc) {
            ctx->pc = 0x104018u;
            goto label_104018;
        }
    }
    ctx->pc = 0x104004u;
    // 0x104004: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104008: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10400c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10400cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104010: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104010u;
    SET_GPR_U32(ctx, 31, 0x104018u);
    ctx->pc = 0x104014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104010u;
    // 0x104014: 0x24a51a10  addiu       $a1, $a1, 0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104010u, 0x104018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104018u;
label_104018:
    // 0x104018: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x104018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x10401c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10401cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x104020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104024: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x104024u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x104028: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x104028u;
    {
        const bool branch_taken_0x104028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x104028) {
            ctx->pc = 0x10402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104028u;
            // 0x10402c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10404Cu;
            goto label_10404c;
        }
    }
    ctx->pc = 0x104030u;
    // 0x104030: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104038: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x104038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10403c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10403cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104040: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104040u;
    SET_GPR_U32(ctx, 31, 0x104048u);
    ctx->pc = 0x104044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104040u;
    // 0x104044: 0x24a51a10  addiu       $a1, $a1, 0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104040u, 0x104048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104048u;
label_104048:
    // 0x104048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x104048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10404c:
    // 0x10404c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10404cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x104054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104058: 0x3e00008  jr          $ra
    ctx->pc = 0x104058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104058u;
        // 0x10405c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104060u;
}
