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

// Function: ImagePageInfoSetImage__9ApcObjRsciP7WcImage
// Address: 0x100f80 - 0x1010dc
void ImagePageInfoSetImage__9ApcObjRsciP7WcImage_0x100f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoSetImage__9ApcObjRsciP7WcImage_0x100f80");
#endif

    switch (ctx->pc) {
        case 0x100fccu: goto label_100fcc;
        case 0x101004u: goto label_101004;
        case 0x101010u: goto label_101010;
        case 0x101018u: goto label_101018;
        case 0x10102cu: goto label_10102c;
        case 0x101038u: goto label_101038;
        case 0x101040u: goto label_101040;
        case 0x101048u: goto label_101048;
        default: break;
    }

    ctx->pc = 0x100f80u;

    // 0x100f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100f88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x100f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100f90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x100f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x100f94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x100f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100f9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100fa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x100fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100fa8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x100fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100FACu;
    {
        const bool branch_taken_0x100fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FACu;
        // 0x100fb0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fac) {
            ctx->pc = 0x100FCCu;
            goto label_100fcc;
        }
    }
    ctx->pc = 0x100FB4u;
    // 0x100fb4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fbc: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
    // 0x100fc0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x100fc4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100FC4u;
    SET_GPR_U32(ctx, 31, 0x100FCCu);
    ctx->pc = 0x100FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FC4u;
    // 0x100fc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100FC4u, 0x100FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FCCu;
label_100fcc:
    // 0x100fcc: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x100FCCu;
    {
        const bool branch_taken_0x100fcc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x100FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FCCu;
        // 0x100fd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fcc) {
            ctx->pc = 0x100FE4u;
            goto label_100fe4;
        }
    }
    ctx->pc = 0x100FD4u;
    // 0x100fd4: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x100fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x100fd8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x100fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100fdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100FDCu;
    {
        const bool branch_taken_0x100fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100fdc) {
            ctx->pc = 0x100FE8u;
            goto label_100fe8;
        }
    }
    ctx->pc = 0x100FE4u;
label_100fe4:
    // 0x100fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100fe8:
    // 0x100fe8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x100FE8u;
    {
        const bool branch_taken_0x100fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FE8u;
        // 0x100fec: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fe8) {
            ctx->pc = 0x101004u;
            goto label_101004;
        }
    }
    ctx->pc = 0x100FF0u;
    // 0x100ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ff4: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
    // 0x100ff8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100ffc: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x100FFCu;
    SET_GPR_U32(ctx, 31, 0x101004u);
    ctx->pc = 0x101000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FFCu;
    // 0x101000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x100FFCu, 0x101004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101004u;
label_101004:
    // 0x101004: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x101008: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101008u;
    SET_GPR_U32(ctx, 31, 0x101010u);
    ctx->pc = 0x10100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101008u;
    // 0x10100c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101008u, 0x101010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101010u;
label_101010:
    // 0x101010: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101010u;
    SET_GPR_U32(ctx, 31, 0x101018u);
    ctx->pc = 0x101014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101010u;
    // 0x101014: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101010u, 0x101018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101018u;
label_101018:
    // 0x101018: 0x8e130020  lw          $s3, 0x20($s0)
    ctx->pc = 0x101018u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10101c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101024: 0xc04039c  jal         func_100E70
    ctx->pc = 0x101024u;
    SET_GPR_U32(ctx, 31, 0x10102Cu);
    ctx->pc = 0x101028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101024u;
    // 0x101028: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x101024u, 0x10102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10102Cu;
label_10102c:
    // 0x10102c: 0x1a600020  blez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x10102Cu;
    {
        const bool branch_taken_0x10102c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x101030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10102Cu;
        // 0x101030: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10102c) {
            ctx->pc = 0x1010B0u;
            goto label_1010b0;
        }
    }
    ctx->pc = 0x101034u;
    // 0x101034: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101038:
    // 0x101038: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x101038u;
    SET_GPR_U32(ctx, 31, 0x101040u);
    ctx->pc = 0x10103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101038u;
    // 0x10103c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x101038u, 0x101040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101040u;
label_101040:
    // 0x101040: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x101040u;
    SET_GPR_U32(ctx, 31, 0x101048u);
    ctx->pc = 0x101044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101040u;
    // 0x101044: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x101040u, 0x101048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101048u;
label_101048:
    // 0x101048: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x10104c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101050: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x101054: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x101054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x101058: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x10105c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x101060: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x101064: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x101064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x10106c: 0x253302a  slt         $a2, $s2, $s3
    ctx->pc = 0x10106cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x101070: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x101070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x101074: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x101074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101078: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x101078u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x10107c: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x10107cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x101080: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x101080u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x101084: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x101084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x101088: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x101088u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x10108c: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x10108cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x101090: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x101090u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x101094: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x101094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x101098: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x101098u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x10109c: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x10109cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1010a0: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x1010a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x1010a4: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x1010a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1010a8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1010A8u;
    {
        const bool branch_taken_0x1010a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1010ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010A8u;
        // 0x1010ac: 0xfca20038  sd          $v0, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010a8) {
            ctx->pc = 0x101038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101038;
        }
    }
    ctx->pc = 0x1010B0u;
label_1010b0:
    // 0x1010b0: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x1010b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x1010b4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1010b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1010b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1010b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1010bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1010bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1010c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1010c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1010c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1010c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1010c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1010cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1010ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1010d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1010d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010D4u;
        // 0x1010d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010DCu;
}
