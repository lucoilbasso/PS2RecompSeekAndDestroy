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

// Function: _request_bind
// Address: 0x1b15e0 - 0x1b1690
void _request_bind_0x1b15e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_bind_0x1b15e0");
#endif

    switch (ctx->pc) {
        case 0x1b1604u: goto label_1b1604;
        case 0x1b1630u: goto label_1b1630;
        default: break;
    }

    ctx->pc = 0x1b15e0u;

    // 0x1b15e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b15e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b15e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b15e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b15e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b15e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b15ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b15ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b15f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b15f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b15f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b15f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b15fc: 0xc06c4ac  jal         func_1B12B0
    ctx->pc = 0x1B15FCu;
    SET_GPR_U32(ctx, 31, 0x1B1604u);
    ctx->pc = 0x1B1600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15FCu;
    // 0x1b1600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12B0u, 0x1B15FCu, 0x1B1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1604u;
label_1b1604:
    // 0x1b1604: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b1604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1608: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b160c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b1610: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1614: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1b1614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1b1618: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x1b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x1b161c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1b161cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1b1620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1624: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1b1624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1b1628: 0xc06c564  jal         func_1B1590
    ctx->pc = 0x1B1628u;
    SET_GPR_U32(ctx, 31, 0x1B1630u);
    ctx->pc = 0x1B162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1628u;
    // 0x1b162c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1590u, 0x1B1628u, 0x1B1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1630u;
label_1b1630:
    // 0x1b1630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b1630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1634: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1634u;
    {
        const bool branch_taken_0x1b1634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1634) {
            ctx->pc = 0x1B1638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1634u;
            // 0x1b1638: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B164Cu;
            goto label_1b164c;
        }
    }
    ctx->pc = 0x1B163Cu;
    // 0x1b163c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1b163cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1b1640: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1b1640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1b1644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1644u;
    {
        const bool branch_taken_0x1b1644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1644u;
        // 0x1b1648: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1644) {
            ctx->pc = 0x1B165Cu;
            goto label_1b165c;
        }
    }
    ctx->pc = 0x1B164Cu;
label_1b164c:
    // 0x1b164c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b1650: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1b1650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1b1654: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b1658: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1b1658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1b165c:
    // 0x1b165c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1660: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1664: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1668: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1b1668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1b166c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b166cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1670: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b167c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1688: 0x806df8e  j           func_1B7E38
    ctx->pc = 0x1B1688u;
    ctx->pc = 0x1B168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1688u;
    // 0x1b168c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E38u;
    isceSifSendCmd_0x1b7e38(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1690u;
}
