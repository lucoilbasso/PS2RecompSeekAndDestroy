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

// Function: ModelBankInfoSetModel__9ApcObjRsciP7WcModel
// Address: 0x1040d8 - 0x1041a4
void ModelBankInfoSetModel__9ApcObjRsciP7WcModel_0x1040d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelBankInfoSetModel__9ApcObjRsciP7WcModel_0x1040d8");
#endif

    switch (ctx->pc) {
        case 0x10411cu: goto label_10411c;
        case 0x104154u: goto label_104154;
        case 0x104180u: goto label_104180;
        default: break;
    }

    ctx->pc = 0x1040d8u;

    // 0x1040d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1040d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1040dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1040dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1040e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1040e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1040e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1040e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1040e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1040ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1040f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1040f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1040f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1040f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1040f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1040fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104100: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x104100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x104104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104104u;
    {
        const bool branch_taken_0x104104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104104u;
        // 0x104108: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104104) {
            ctx->pc = 0x10411Cu;
            goto label_10411c;
        }
    }
    ctx->pc = 0x10410Cu;
    // 0x10410c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104114: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104114u;
    SET_GPR_U32(ctx, 31, 0x10411Cu);
    ctx->pc = 0x104118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104114u;
    // 0x104118: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104114u, 0x10411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10411Cu;
label_10411c:
    // 0x10411c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10411Cu;
    {
        const bool branch_taken_0x10411c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x104120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10411Cu;
        // 0x104120: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10411c) {
            ctx->pc = 0x104134u;
            goto label_104134;
        }
    }
    ctx->pc = 0x104124u;
    // 0x104124: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x104128: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x104128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10412c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10412Cu;
    {
        const bool branch_taken_0x10412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10412c) {
            ctx->pc = 0x104138u;
            goto label_104138;
        }
    }
    ctx->pc = 0x104134u;
label_104134:
    // 0x104134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104138:
    // 0x104138: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x104138u;
    {
        const bool branch_taken_0x104138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104138u;
        // 0x10413c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104138) {
            ctx->pc = 0x104154u;
            goto label_104154;
        }
    }
    ctx->pc = 0x104140u;
    // 0x104140: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104144: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x104148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10414c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10414Cu;
    SET_GPR_U32(ctx, 31, 0x104154u);
    ctx->pc = 0x104150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10414Cu;
    // 0x104150: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10414Cu, 0x104154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104154u;
label_104154:
    // 0x104154: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x104158: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x10415c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104164: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104164u;
    {
        const bool branch_taken_0x104164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104164u;
        // 0x104168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104164) {
            ctx->pc = 0x104180u;
            goto label_104180;
        }
    }
    ctx->pc = 0x10416Cu;
    // 0x10416c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104170: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x104170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x104174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104178: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104178u;
    SET_GPR_U32(ctx, 31, 0x104180u);
    ctx->pc = 0x10417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104178u;
    // 0x10417c: 0x24a51ab0  addiu       $a1, $a1, 0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104178u, 0x104180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104180u;
label_104180:
    // 0x104180: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x104180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x104184: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x104184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x104188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10418c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10418cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10419c: 0x3e00008  jr          $ra
    ctx->pc = 0x10419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10419Cu;
        // 0x1041a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1041A4u;
}
