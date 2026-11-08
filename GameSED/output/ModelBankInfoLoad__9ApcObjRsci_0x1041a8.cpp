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

// Function: ModelBankInfoLoad__9ApcObjRsci
// Address: 0x1041a8 - 0x104260
void ModelBankInfoLoad__9ApcObjRsci_0x1041a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelBankInfoLoad__9ApcObjRsci_0x1041a8");
#endif

    switch (ctx->pc) {
        case 0x1041e0u: goto label_1041e0;
        case 0x104218u: goto label_104218;
        case 0x104248u: goto label_104248;
        default: break;
    }

    ctx->pc = 0x1041a8u;

    // 0x1041a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1041a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1041ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1041acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1041b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1041b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1041b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1041b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1041bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1041c0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1041c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1041c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1041C4u;
    {
        const bool branch_taken_0x1041c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1041C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041C4u;
        // 0x1041c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041c4) {
            ctx->pc = 0x1041E0u;
            goto label_1041e0;
        }
    }
    ctx->pc = 0x1041CCu;
    // 0x1041cc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1041ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1041d0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1041d4: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x1041d8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1041D8u;
    SET_GPR_U32(ctx, 31, 0x1041E0u);
    ctx->pc = 0x1041DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041D8u;
    // 0x1041dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1041D8u, 0x1041E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041E0u;
label_1041e0:
    // 0x1041e0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1041E0u;
    {
        const bool branch_taken_0x1041e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041e0) {
            ctx->pc = 0x1041F8u;
            goto label_1041f8;
        }
    }
    ctx->pc = 0x1041E8u;
    // 0x1041e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1041ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1041f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1041F0u;
    {
        const bool branch_taken_0x1041f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1041f0) {
            ctx->pc = 0x1041FCu;
            goto label_1041fc;
        }
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1041fc:
    // 0x1041fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1041FCu;
    {
        const bool branch_taken_0x1041fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041FCu;
        // 0x104200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041fc) {
            ctx->pc = 0x104218u;
            goto label_104218;
        }
    }
    ctx->pc = 0x104204u;
    // 0x104204: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104208: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10420c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104210: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104210u;
    SET_GPR_U32(ctx, 31, 0x104218u);
    ctx->pc = 0x104214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104210u;
    // 0x104214: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104210u, 0x104218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104218u;
label_104218:
    // 0x104218: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x10421c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x10421cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x104220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104224: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x104224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104228: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x104228u;
    {
        const bool branch_taken_0x104228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x104228) {
            ctx->pc = 0x10422Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104228u;
            // 0x10422c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10424Cu;
            goto label_10424c;
        }
    }
    ctx->pc = 0x104230u;
    // 0x104230: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104238: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10423c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104240: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x104240u;
    SET_GPR_U32(ctx, 31, 0x104248u);
    ctx->pc = 0x104244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104240u;
    // 0x104244: 0x24a51af8  addiu       $a1, $a1, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x104240u, 0x104248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104248u;
label_104248:
    // 0x104248: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x104248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10424c:
    // 0x10424c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10424cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x104254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104258: 0x3e00008  jr          $ra
    ctx->pc = 0x104258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104258u;
        // 0x10425c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104260u;
}
