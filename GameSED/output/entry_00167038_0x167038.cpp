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

// Function: entry_00167038
// Address: 0x167038 - 0x167240
void entry_00167038_0x167038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167038_0x167038");
#endif

    switch (ctx->pc) {
        case 0x167064u: goto label_167064;
        case 0x167094u: goto label_167094;
        case 0x1670c4u: goto label_1670c4;
        case 0x1670f4u: goto label_1670f4;
        case 0x167124u: goto label_167124;
        case 0x167154u: goto label_167154;
        case 0x167184u: goto label_167184;
        case 0x1671b4u: goto label_1671b4;
        case 0x1671e4u: goto label_1671e4;
        case 0x1671fcu: goto label_1671fc;
        case 0x16721cu: goto label_16721c;
        case 0x167234u: goto label_167234;
        default: break;
    }

    ctx->pc = 0x167038u;

label_167038:
    // 0x167038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16703c:
    // 0x16703c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_167040:
    // 0x167040: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167044:
    // 0x167044: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167048:
    // 0x167048: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16704c:
    // 0x16704c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167050:
    // 0x167050: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167054:
    // 0x167054: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167058:
    // 0x167058: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16705c:
    // 0x16705c: 0x60f809  jalr        $v1
label_167060:
    if (ctx->pc == 0x167060u) {
        ctx->pc = 0x167060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16705Cu;
        // 0x167060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167064u;
        goto label_167064;
    }
    ctx->pc = 0x16705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167064u);
        ctx->pc = 0x167060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16705Cu;
        // 0x167060: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16705Cu, 0x167064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167064u;
label_167064:
    // 0x167064: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x167064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_167068:
    // 0x167068: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16706c:
    // 0x16706c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16706cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167070:
    // 0x167070: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167074:
    // 0x167074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167078:
    // 0x167078: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16707c:
    // 0x16707c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167080:
    // 0x167080: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167084:
    // 0x167084: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167088:
    // 0x167088: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16708c:
    // 0x16708c: 0x60f809  jalr        $v1
label_167090:
    if (ctx->pc == 0x167090u) {
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16708Cu;
        // 0x167090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167094u;
        goto label_167094;
    }
    ctx->pc = 0x16708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167094u);
        ctx->pc = 0x167090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16708Cu;
        // 0x167090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16708Cu, 0x167094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167094u;
label_167094:
    // 0x167094: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x167094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_167098:
    // 0x167098: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16709c:
    // 0x16709c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16709cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1670a0:
    // 0x1670a0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1670a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1670a4:
    // 0x1670a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1670a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1670a8:
    // 0x1670a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1670ac:
    // 0x1670ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1670acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1670b0:
    // 0x1670b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1670b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1670b4:
    // 0x1670b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1670b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1670b8:
    // 0x1670b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1670b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1670bc:
    // 0x1670bc: 0x60f809  jalr        $v1
label_1670c0:
    if (ctx->pc == 0x1670C0u) {
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670BCu;
        // 0x1670c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670C4u;
        goto label_1670c4;
    }
    ctx->pc = 0x1670BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1670C4u);
        ctx->pc = 0x1670C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670BCu;
        // 0x1670c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670BCu, 0x1670C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1670c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1670c8:
    // 0x1670c8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1670cc:
    // 0x1670cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1670ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1670d0:
    // 0x1670d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1670d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1670d4:
    // 0x1670d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1670d8:
    // 0x1670d8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1670d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1670dc:
    // 0x1670dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1670e0:
    // 0x1670e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1670e4:
    // 0x1670e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1670e8:
    // 0x1670e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1670e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1670ec:
    // 0x1670ec: 0x60f809  jalr        $v1
label_1670f0:
    if (ctx->pc == 0x1670F0u) {
        ctx->pc = 0x1670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670ECu;
        // 0x1670f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1670F4u;
        goto label_1670f4;
    }
    ctx->pc = 0x1670ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1670F4u);
        ctx->pc = 0x1670F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670ECu;
        // 0x1670f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1670ECu, 0x1670F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1670F4u;
label_1670f4:
    // 0x1670f4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1670f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1670f8:
    // 0x1670f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1670f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1670fc:
    // 0x1670fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1670fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167100:
    // 0x167100: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167104:
    // 0x167104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167108:
    // 0x167108: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16710c:
    // 0x16710c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167110:
    // 0x167110: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167114:
    // 0x167114: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167118:
    // 0x167118: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16711c:
    // 0x16711c: 0x60f809  jalr        $v1
label_167120:
    if (ctx->pc == 0x167120u) {
        ctx->pc = 0x167120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16711Cu;
        // 0x167120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167124u;
        goto label_167124;
    }
    ctx->pc = 0x16711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167124u);
        ctx->pc = 0x167120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16711Cu;
        // 0x167120: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16711Cu, 0x167124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167124u;
label_167124:
    // 0x167124: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x167124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_167128:
    // 0x167128: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16712c:
    // 0x16712c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16712cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167130:
    // 0x167130: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167134:
    // 0x167134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167138:
    // 0x167138: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16713c:
    // 0x16713c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167140:
    // 0x167140: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167144:
    // 0x167144: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167148:
    // 0x167148: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16714c:
    // 0x16714c: 0x60f809  jalr        $v1
label_167150:
    if (ctx->pc == 0x167150u) {
        ctx->pc = 0x167150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16714Cu;
        // 0x167150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167154u;
        goto label_167154;
    }
    ctx->pc = 0x16714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167154u);
        ctx->pc = 0x167150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16714Cu;
        // 0x167150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16714Cu, 0x167154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167154u;
label_167154:
    // 0x167154: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x167154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_167158:
    // 0x167158: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16715c:
    // 0x16715c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167160:
    // 0x167160: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167164:
    // 0x167164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167168:
    // 0x167168: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16716c:
    // 0x16716c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_167170:
    // 0x167170: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x167170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_167174:
    // 0x167174: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167178:
    // 0x167178: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16717c:
    // 0x16717c: 0x60f809  jalr        $v1
label_167180:
    if (ctx->pc == 0x167180u) {
        ctx->pc = 0x167180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16717Cu;
        // 0x167180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167184u;
        goto label_167184;
    }
    ctx->pc = 0x16717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167184u);
        ctx->pc = 0x167180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16717Cu;
        // 0x167180: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16717Cu, 0x167184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167184u;
label_167184:
    // 0x167184: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_167188:
    // 0x167188: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_16718c:
    // 0x16718c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167190:
    // 0x167190: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_167194:
    // 0x167194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167198:
    // 0x167198: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x167198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16719c:
    // 0x16719c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1671a0:
    // 0x1671a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1671a4:
    // 0x1671a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1671a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1671a8:
    // 0x1671a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1671a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1671ac:
    // 0x1671ac: 0x60f809  jalr        $v1
label_1671b0:
    if (ctx->pc == 0x1671B0u) {
        ctx->pc = 0x1671B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671ACu;
        // 0x1671b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671B4u;
        goto label_1671b4;
    }
    ctx->pc = 0x1671ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1671B4u);
        ctx->pc = 0x1671B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671ACu;
        // 0x1671b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1671ACu, 0x1671B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1671B4u;
label_1671b4:
    // 0x1671b4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1671b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1671b8:
    // 0x1671b8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1671b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1671bc:
    // 0x1671bc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1671c0:
    // 0x1671c0: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1671c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1671c4:
    // 0x1671c4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_1671c8:
    // 0x1671c8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1671cc:
    // 0x1671cc: 0xc79583c0  lwc1        $f21, -0x7C40($gp)
    ctx->pc = 0x1671ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1671d0:
    // 0x1671d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1671d4:
    // 0x1671d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1671d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1671d8:
    // 0x1671d8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1671d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1671dc:
    // 0x1671dc: 0xc06164c  jal         func_185930
label_1671e0:
    if (ctx->pc == 0x1671E0u) {
        ctx->pc = 0x1671E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671DCu;
        // 0x1671e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671E4u;
        goto label_1671e4;
    }
    ctx->pc = 0x1671DCu;
    SET_GPR_U32(ctx, 31, 0x1671E4u);
    ctx->pc = 0x1671E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671DCu;
    // 0x1671e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1671DCu, 0x1671E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671E4u;
label_1671e4:
    // 0x1671e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1671e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1671e8:
    // 0x1671e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1671e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1671ec:
    // 0x1671ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1671ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1671f0:
    // 0x1671f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1671f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1671f4:
    // 0x1671f4: 0xc069532  jal         func_1A54C8
label_1671f8:
    if (ctx->pc == 0x1671F8u) {
        ctx->pc = 0x1671F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671F4u;
        // 0x1671f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1671FCu;
        goto label_1671fc;
    }
    ctx->pc = 0x1671F4u;
    SET_GPR_U32(ctx, 31, 0x1671FCu);
    ctx->pc = 0x1671F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671F4u;
    // 0x1671f8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1671F4u, 0x1671FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671FCu;
label_1671fc:
    // 0x1671fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1671fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_167200:
    // 0x167200: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_167204:
    // 0x167204: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x167204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_167208:
    // 0x167208: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16720c:
    // 0x16720c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167210:
    // 0x167210: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x167210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167214:
    // 0x167214: 0xc06164c  jal         func_185930
label_167218:
    if (ctx->pc == 0x167218u) {
        ctx->pc = 0x167218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167214u;
        // 0x167218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16721Cu;
        goto label_16721c;
    }
    ctx->pc = 0x167214u;
    SET_GPR_U32(ctx, 31, 0x16721Cu);
    ctx->pc = 0x167218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167214u;
    // 0x167218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167214u, 0x16721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16721Cu;
label_16721c:
    // 0x16721c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167220:
    // 0x167220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167224:
    // 0x167224: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167228:
    // 0x167228: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x167228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_16722c:
    // 0x16722c: 0xc069532  jal         func_1A54C8
label_167230:
    if (ctx->pc == 0x167230u) {
        ctx->pc = 0x167230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16722Cu;
        // 0x167230: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167234u;
        goto label_167234;
    }
    ctx->pc = 0x16722Cu;
    SET_GPR_U32(ctx, 31, 0x167234u);
    ctx->pc = 0x167230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16722Cu;
    // 0x167230: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16722Cu, 0x167234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167234u;
label_167234:
    // 0x167234: 0x1000005a  b           . + 4 + (0x5A << 2)
label_167238:
    if (ctx->pc == 0x167238u) {
        ctx->pc = 0x167238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167234u;
        // 0x167238: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16723Cu;
        goto label_16723c;
    }
    ctx->pc = 0x167234u;
    {
        const bool branch_taken_0x167234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167234u;
        // 0x167238: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167234) {
            ctx->pc = 0x1673A0u;
            return;
        }
    }
    ctx->pc = 0x16723Cu;
label_16723c:
    // 0x16723c: 0x0  nop
    ctx->pc = 0x16723cu;
    // NOP
    ctx->pc = 0x167240u;
}
