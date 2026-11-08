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

// Function: WTxPanelPrintLocateScan__FP9WcTxPanelPcPUsP8TxLocate
// Address: 0x18dc28 - 0x18dd90
void WTxPanelPrintLocateScan__FP9WcTxPanelPcPUsP8TxLocate_0x18dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelPrintLocateScan__FP9WcTxPanelPcPUsP8TxLocate_0x18dc28");
#endif

    switch (ctx->pc) {
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd54u: goto label_18dd54;
        default: break;
    }

    ctx->pc = 0x18dc28u;

    // 0x18dc28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18dc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18dc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18dc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18dc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18dc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18dc38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18dc38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18dc40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18dc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18dc48: 0x86020244  lh          $v0, 0x244($s0)
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18dc4c: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18dc50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18dc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18dc54: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18DC54u;
    {
        const bool branch_taken_0x18dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC54u;
        // 0x18dc58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc54) {
            ctx->pc = 0x18DCC8u;
            goto label_18dcc8;
        }
    }
    ctx->pc = 0x18DC5Cu;
    // 0x18dc5c: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18dc60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18DC60u;
    {
        const bool branch_taken_0x18dc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC60u;
        // 0x18dc64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc60) {
            ctx->pc = 0x18DCC8u;
            goto label_18dcc8;
        }
    }
    ctx->pc = 0x18DC68u;
    // 0x18dc68: 0x96050246  lhu         $a1, 0x246($s0)
    ctx->pc = 0x18dc68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18dc6c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18dc70: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18dc74: 0xa6000244  sh          $zero, 0x244($s0)
    ctx->pc = 0x18dc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18dc78: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18dc7c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18dc7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18dc80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18dc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DC84u;
    {
        const bool branch_taken_0x18dc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC84u;
        // 0x18dc88: 0xa6030246  sh          $v1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc84) {
            ctx->pc = 0x18DC98u;
            goto label_18dc98;
        }
    }
    ctx->pc = 0x18DC8Cu;
    // 0x18dc8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC8Cu;
    {
        const bool branch_taken_0x18dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC8Cu;
        // 0x18dc90: 0xa6050246  sh          $a1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc8c) {
            ctx->pc = 0x18DCA8u;
            goto label_18dca8;
        }
    }
    ctx->pc = 0x18DC94u;
    // 0x18dc94: 0x0  nop
    ctx->pc = 0x18dc94u;
    // NOP
label_18dc98:
    // 0x18dc98: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x18dc9c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18dca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dca4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_18dca8:
    // 0x18dca8: 0x85020246  lh          $v0, 0x246($t0)
    ctx->pc = 0x18dca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 582)));
    // 0x18dcac: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18dcb0: 0x85040244  lh          $a0, 0x244($t0)
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 580)));
    // 0x18dcb4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18dcb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18dcb8: 0x8d050214  lw          $a1, 0x214($t0)
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 532)));
    // 0x18dcbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dcc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18dcc4: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x18dcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18dcc8:
    // 0x18dcc8: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18dccc: 0x2611023c  addiu       $s1, $s0, 0x23C
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x18dcd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcd4: 0x260402a0  addiu       $a0, $s0, 0x2A0
    ctx->pc = 0x18dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x18dcd8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x18dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x18dcdc: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x18dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dce0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x18dce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x18dce4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x18dce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x18dce8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x18dce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dcec: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x18dcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dcf0: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dcf4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18dcf8: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x18dcf8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18dcfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DCFCu;
    {
        const bool branch_taken_0x18dcfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0xae02025c  sw          $v0, 0x25C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcfc) {
            ctx->pc = 0x18DD18u;
            goto label_18dd18;
        }
    }
    ctx->pc = 0x18DD04u;
    // 0x18dd04: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd0c: 0x24a58118  addiu       $a1, $a1, -0x7EE8
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934808));
    // 0x18dd10: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DD10u;
    SET_GPR_U32(ctx, 31, 0x18DD18u);
    ctx->pc = 0x18DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD10u;
    // 0x18dd14: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DD10u, 0x18DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD18u;
label_18dd18:
    // 0x18dd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dd1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd20: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x18dd20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18dd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd28: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18DD28u;
    SET_GPR_U32(ctx, 31, 0x18DD30u);
    ctx->pc = 0x18DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD28u;
    // 0x18dd2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18DD28u, 0x18DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD30u;
label_18dd30:
    // 0x18dd30: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x18dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x18dd34: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x18dd38: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DD38u;
    {
        const bool branch_taken_0x18dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18dd38) {
            ctx->pc = 0x18DD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DD38u;
            // 0x18dd3c: 0x8e03025c  lw          $v1, 0x25C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DD58u;
            goto label_18dd58;
        }
    }
    ctx->pc = 0x18DD40u;
    // 0x18dd40: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18dd44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd48: 0x24a58130  addiu       $a1, $a1, -0x7ED0
    ctx->pc = 0x18dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934832));
    // 0x18dd4c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18DD4Cu;
    SET_GPR_U32(ctx, 31, 0x18DD54u);
    ctx->pc = 0x18DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD4Cu;
    // 0x18dd50: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18DD4Cu, 0x18DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD54u;
label_18dd54:
    // 0x18dd54: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x18dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_18dd58:
    // 0x18dd58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18dd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18dd5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18dd60: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x18dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x18dd64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18dd64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd68: 0xae03025c  sw          $v1, 0x25C($s0)
    ctx->pc = 0x18dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
    // 0x18dd6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18dd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dd70: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x18dd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x18dd74: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x18dd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x18dd78: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x18dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dd7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18dd7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd80: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x18dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18dd84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18dd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD88u;
        // 0x18dd8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD90u;
}
