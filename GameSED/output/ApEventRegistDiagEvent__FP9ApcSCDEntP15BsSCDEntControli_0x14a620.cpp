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

// Function: ApEventRegistDiagEvent__FP9ApcSCDEntP15BsSCDEntControli
// Address: 0x14a620 - 0x14a6d4
void ApEventRegistDiagEvent__FP9ApcSCDEntP15BsSCDEntControli_0x14a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventRegistDiagEvent__FP9ApcSCDEntP15BsSCDEntControli_0x14a620");
#endif

    switch (ctx->pc) {
        case 0x14a660u: goto label_14a660;
        case 0x14a698u: goto label_14a698;
        default: break;
    }

    ctx->pc = 0x14a620u;

    // 0x14a620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a624: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14a624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14a628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a62c: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x14a62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x14a630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14a634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14a63c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14a644: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14a648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2043D0u));
    // 0x14a64c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A64Cu;
    {
        const bool branch_taken_0x14a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A64Cu;
        // 0x14a650: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a64c) {
            ctx->pc = 0x14A664u;
            goto label_14a664;
        }
    }
    ctx->pc = 0x14A654u;
    // 0x14a654: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14a658: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14A658u;
    SET_GPR_U32(ctx, 31, 0x14A660u);
    ctx->pc = 0x14A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A658u;
    // 0x14a65c: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14A658u, 0x14A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A660u;
label_14a660:
    // 0x14a660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14a664:
    // 0x14a664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a668: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14a668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a66c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14a670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a674: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14a674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14a678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a67c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x14a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x14a680: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14a684: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x14a688: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x14a688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x14a68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a690: 0xc05250a  jal         func_149428
    ctx->pc = 0x14A690u;
    SET_GPR_U32(ctx, 31, 0x14A698u);
    ctx->pc = 0x14A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A690u;
    // 0x14a694: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x14A690u, 0x14A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A698u;
label_14a698:
    // 0x14a698: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a69c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A69Cu;
    {
        const bool branch_taken_0x14a69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A69Cu;
        // 0x14a6a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a69c) {
            ctx->pc = 0x14A6BCu;
            goto label_14a6bc;
        }
    }
    ctx->pc = 0x14A6A4u;
    // 0x14a6a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x14a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14a6a8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A6A8u;
    {
        const bool branch_taken_0x14a6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a6a8) {
            ctx->pc = 0x14A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6A8u;
            // 0x14a6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6C0u;
            goto label_14a6c0;
        }
    }
    ctx->pc = 0x14A6B0u;
    // 0x14a6b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a6b4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x14a6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x14a6b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_14a6bc:
    // 0x14a6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a6c0:
    // 0x14a6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a6c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14a6c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a6c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14a6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6CCu;
        // 0x14a6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A6D4u;
}
