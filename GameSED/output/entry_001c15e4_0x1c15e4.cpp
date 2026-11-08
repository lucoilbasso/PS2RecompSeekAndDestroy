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

// Function: entry_001c15e4
// Address: 0x1c15e4 - 0x1c1658
void entry_001c15e4_0x1c15e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c15e4_0x1c15e4");
#endif

    switch (ctx->pc) {
        case 0x1c1604u: goto label_1c1604;
        case 0x1c160cu: goto label_1c160c;
        case 0x1c1650u: goto label_1c1650;
        default: break;
    }

    ctx->pc = 0x1c15e4u;

    // 0x1c15e4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C15E4u;
    {
        const bool branch_taken_0x1c15e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15E4u;
        // 0x1c15e8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15e4) {
            ctx->pc = 0x1C1658u;
            return;
        }
    }
    ctx->pc = 0x1C15ECu;
    // 0x1c15ec: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c15f0: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c15f4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1c15f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c15f8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1c15fc: 0xc070dfa  jal         func_1C37E8
    ctx->pc = 0x1C15FCu;
    SET_GPR_U32(ctx, 31, 0x1C1604u);
    ctx->pc = 0x1C1600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15FCu;
    // 0x1c1600: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C37E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C37E8u, 0x1C15FCu, 0x1C1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1604u;
label_1c1604:
    // 0x1c1604: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C1604u;
    SET_GPR_U32(ctx, 31, 0x1C160Cu);
    ctx->pc = 0x1C1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1604u;
    // 0x1c1608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C1604u, 0x1C160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C160Cu;
label_1c160c:
    // 0x1c160c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1610: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1c1610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1c1614: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x1c1614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1c1618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c161c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1c161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1c1620: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1c1620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c1624: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1628: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
    // 0x1c162c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1c162cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1c1630: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x1c1634: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c1638: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1c1638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1c163c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1c163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1c1640: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c1640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c1644: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x1c1648: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C1648u;
    SET_GPR_U32(ctx, 31, 0x1C1650u);
    ctx->pc = 0x1C164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1648u;
    // 0x1c164c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C1648u, 0x1C1650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1650u;
label_1c1650:
    // 0x1c1650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1650u;
    {
        const bool branch_taken_0x1c1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1650u;
        // 0x1c1654: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1650) {
            ctx->pc = 0x1C1670u;
            return;
        }
    }
    ctx->pc = 0x1C1658u;
}
