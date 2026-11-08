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

// Function: WImageAllocPackage__FP7WcImagei
// Address: 0x17d630 - 0x17d6d8
void WImageAllocPackage__FP7WcImagei_0x17d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageAllocPackage__FP7WcImagei_0x17d630");
#endif

    switch (ctx->pc) {
        case 0x17d664u: goto label_17d664;
        case 0x17d684u: goto label_17d684;
        case 0x17d6a0u: goto label_17d6a0;
        default: break;
    }

    ctx->pc = 0x17d630u;

    // 0x17d630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d634: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17d634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17d638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d640: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17d644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d64c: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x17d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x17d650: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D650u;
    {
        const bool branch_taken_0x17d650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D650u;
        // 0x17d654: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d650) {
            ctx->pc = 0x17D65Cu;
            goto label_17d65c;
        }
    }
    ctx->pc = 0x17D658u;
    // 0x17d658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17d65c:
    // 0x17d65c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17D65Cu;
    SET_GPR_U32(ctx, 31, 0x17D664u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17D65Cu, 0x17D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D664u;
label_17d664:
    // 0x17d664: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17d664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d668: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D668u;
    {
        const bool branch_taken_0x17d668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D668u;
        // 0x17d66c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d668) {
            ctx->pc = 0x17D690u;
            goto label_17d690;
        }
    }
    ctx->pc = 0x17D670u;
    // 0x17d670: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d678: 0x24a57c28  addiu       $a1, $a1, 0x7C28
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31784));
    // 0x17d67c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D67Cu;
    SET_GPR_U32(ctx, 31, 0x17D684u);
    ctx->pc = 0x17D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D67Cu;
    // 0x17d680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D67Cu, 0x17D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D684u;
label_17d684:
    // 0x17d684: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17D684u;
    {
        const bool branch_taken_0x17d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D684u;
        // 0x17d688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d684) {
            ctx->pc = 0x17D6C8u;
            goto label_17d6c8;
        }
    }
    ctx->pc = 0x17D68Cu;
    // 0x17d68c: 0x0  nop
    ctx->pc = 0x17d68cu;
    // NOP
label_17d690:
    // 0x17d690: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d694: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D694u;
    {
        const bool branch_taken_0x17d694 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D694u;
        // 0x17d698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d694) {
            ctx->pc = 0x17D6C4u;
            goto label_17d6c4;
        }
    }
    ctx->pc = 0x17D69Cu;
    // 0x17d69c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17d6a0:
    // 0x17d6a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17d6a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17d6a8: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x17d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x17d6ac: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x17d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x17d6b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d6b4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x17d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x17d6b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d6bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D6BCu;
    {
        const bool branch_taken_0x17d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6BCu;
        // 0x17d6c0: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6bc) {
            ctx->pc = 0x17D6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d6a0;
        }
    }
    ctx->pc = 0x17D6C4u;
label_17d6c4:
    // 0x17d6c4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17d6c8:
    // 0x17d6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d6cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6D0u;
        // 0x17d6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D6D8u;
}
