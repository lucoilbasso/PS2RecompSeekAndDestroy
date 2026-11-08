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

// Function: entry_001cc638
// Address: 0x1cc638 - 0x1cc69c
void entry_001cc638_0x1cc638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc638_0x1cc638");
#endif

    switch (ctx->pc) {
        case 0x1cc66cu: goto label_1cc66c;
        default: break;
    }

    ctx->pc = 0x1cc638u;

label_1cc638:
    // 0x1cc638: 0x8d8c0000  lw          $t4, 0x0($t4)
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1cc63c:
    // 0x1cc63c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc640:
    // 0x1cc640: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc644:
    // 0x1cc644: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1cc644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cc648:
    // 0x1cc648: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1cc64c:
    // 0x1cc64c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1cc64cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc650:
    // 0x1cc650: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc654:
    // 0x1cc654: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cc658:
    // 0x1cc658: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cc65c:
    // 0x1cc65c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc660:
    // 0x1cc660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc664:
    // 0x1cc664: 0x40f809  jalr        $v0
label_1cc668:
    if (ctx->pc == 0x1CC668u) {
        ctx->pc = 0x1CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC664u;
        // 0x1cc668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC66Cu;
        goto label_1cc66c;
    }
    ctx->pc = 0x1CC664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC66Cu);
        ctx->pc = 0x1CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC664u;
        // 0x1cc668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC664u, 0x1CC66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC66Cu;
label_1cc66c:
    // 0x1cc66c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1cc670:
    // 0x1cc670: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc674:
    // 0x1cc674: 0x8fb3000c  lw          $s3, 0xC($sp)
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1cc678:
    // 0x1cc678: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cc678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1cc67c:
    // 0x1cc67c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc67cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc680:
    // 0x1cc680: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1cc684:
    // 0x1cc684: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc688:
    // 0x1cc688: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
label_1cc68c:
    if (ctx->pc == 0x1CC68Cu) {
        ctx->pc = 0x1CC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC688u;
        // 0x1cc68c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC690u;
        goto label_1cc690;
    }
    ctx->pc = 0x1CC688u;
    {
        const bool branch_taken_0x1cc688 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC688u;
        // 0x1cc68c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc688) {
            ctx->pc = 0x1CC69Cu;
            return;
        }
    }
    ctx->pc = 0x1CC690u;
label_1cc690:
    // 0x1cc690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc694:
    // 0x1cc694: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
label_1cc698:
    if (ctx->pc == 0x1CC698u) {
        ctx->pc = 0x1CC69Cu;
        goto label_fallthrough_0x1cc694;
    }
    ctx->pc = 0x1CC694u;
    {
        const bool branch_taken_0x1cc694 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc694) {
            ctx->pc = 0x1CC6B8u;
            return;
        }
    }
label_fallthrough_0x1cc694:
    ctx->pc = 0x1CC69Cu;
}
