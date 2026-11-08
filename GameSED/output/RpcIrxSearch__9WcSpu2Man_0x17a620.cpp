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

// Function: RpcIrxSearch__9WcSpu2Man
// Address: 0x17a620 - 0x17a6c8
void RpcIrxSearch__9WcSpu2Man_0x17a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RpcIrxSearch__9WcSpu2Man_0x17a620");
#endif

    switch (ctx->pc) {
        case 0x17a640u: goto label_17a640;
        case 0x17a650u: goto label_17a650;
        case 0x17a660u: goto label_17a660;
        case 0x17a688u: goto label_17a688;
        default: break;
    }

    ctx->pc = 0x17a620u;

    // 0x17a620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a624: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17a628: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a630: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17a634: 0x24112710  addiu       $s1, $zero, 0x2710
    ctx->pc = 0x17a634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x17a638: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a63c: 0x3c120025  lui         $s2, 0x25
    ctx->pc = 0x17a63cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
label_17a640:
    // 0x17a640: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x17a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17a644: 0x24057650  addiu       $a1, $zero, 0x7650
    ctx->pc = 0x17a644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30288));
    // 0x17a648: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x17A648u;
    SET_GPR_U32(ctx, 31, 0x17A650u);
    ctx->pc = 0x17A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A648u;
    // 0x17a64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x17A648u, 0x17A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A650u;
label_17a650:
    // 0x17a650: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17A650u;
    {
        const bool branch_taken_0x17a650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17a650) {
            ctx->pc = 0x17A654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A650u;
            // 0x17a654: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A680u;
            goto label_17a680;
        }
    }
    ctx->pc = 0x17A658u;
    // 0x17a658: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17A658u;
    SET_GPR_U32(ctx, 31, 0x17A660u);
    ctx->pc = 0x17A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A658u;
    // 0x17a65c: 0x26447ac0  addiu       $a0, $s2, 0x7AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17A658u, 0x17A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A660u;
label_17a660:
    // 0x17a660: 0x0  nop
    ctx->pc = 0x17a660u;
    // NOP
    // 0x17a664: 0x0  nop
    ctx->pc = 0x17a664u;
    // NOP
    // 0x17a668: 0x0  nop
    ctx->pc = 0x17a668u;
    // NOP
    // 0x17a66c: 0x0  nop
    ctx->pc = 0x17a66cu;
    // NOP
    // 0x17a670: 0x0  nop
    ctx->pc = 0x17a670u;
    // NOP
    // 0x17a674: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A674u;
    {
        const bool branch_taken_0x17a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a674) {
            ctx->pc = 0x17A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a660;
        }
    }
    ctx->pc = 0x17A67Cu;
    // 0x17a67c: 0x0  nop
    ctx->pc = 0x17a67cu;
    // NOP
label_17a680:
    // 0x17a680: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x17a684: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_17a688:
    // 0x17a688: 0x0  nop
    ctx->pc = 0x17a688u;
    // NOP
    // 0x17a68c: 0x0  nop
    ctx->pc = 0x17a68cu;
    // NOP
    // 0x17a690: 0x0  nop
    ctx->pc = 0x17a690u;
    // NOP
    // 0x17a694: 0x0  nop
    ctx->pc = 0x17a694u;
    // NOP
    // 0x17a698: 0x0  nop
    ctx->pc = 0x17a698u;
    // NOP
    // 0x17a69c: 0x5c60fffa  bgtzl       $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A69Cu;
    {
        const bool branch_taken_0x17a69c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17a69c) {
            ctx->pc = 0x17A6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A69Cu;
            // 0x17a6a0: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a688;
        }
    }
    ctx->pc = 0x17A6A4u;
    // 0x17a6a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17a6a8: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17A6A8u;
    {
        const bool branch_taken_0x17a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6A8u;
        // 0x17a6ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6a8) {
            ctx->pc = 0x17A640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a640;
        }
    }
    ctx->pc = 0x17A6B0u;
    // 0x17a6b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17a6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17a6b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17a6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a6bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C0u;
        // 0x17a6c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6C8u;
}
