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

// Function: _pack_header
// Address: 0x1bcdb8 - 0x1bcf08
void _pack_header_0x1bcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pack_header_0x1bcdb8");
#endif

    switch (ctx->pc) {
        case 0x1bcdf0u: goto label_1bcdf0;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce08u: goto label_1bce08;
        case 0x1bce14u: goto label_1bce14;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce44u: goto label_1bce44;
        case 0x1bce54u: goto label_1bce54;
        case 0x1bce60u: goto label_1bce60;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bced4u: goto label_1bced4;
        default: break;
    }

    ctx->pc = 0x1bcdb8u;

    // 0x1bcdb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bcdbc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1bcdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1bcdc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1bcdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1bcdc4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1bcdc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bcdc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdcc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1bcdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1bcdd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bcdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1bcdd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bcdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1bcdd8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1bcddc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bcddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bcde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcde4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bcde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bcde8: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCDE8u;
    SET_GPR_U32(ctx, 31, 0x1BCDF0u);
    ctx->pc = 0x1BCDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDE8u;
    // 0x1bcdec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCDE8u, 0x1BCDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDF0u;
label_1bcdf0:
    // 0x1bcdf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdf4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCDF4u;
    SET_GPR_U32(ctx, 31, 0x1BCDFCu);
    ctx->pc = 0x1BCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDF4u;
    // 0x1bcdf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCDF4u, 0x1BCDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDFCu;
label_1bcdfc:
    // 0x1bcdfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bcdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce00: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BCE00u;
    SET_GPR_U32(ctx, 31, 0x1BCE08u);
    ctx->pc = 0x1BCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE00u;
    // 0x1bce04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BCE00u, 0x1BCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce0c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE14u);
    ctx->pc = 0x1BCE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE0Cu;
    // 0x1bce10: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE0Cu, 0x1BCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE14u;
label_1bce14:
    // 0x1bce14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bce14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce18: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BCE18u;
    SET_GPR_U32(ctx, 31, 0x1BCE20u);
    ctx->pc = 0x1BCE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE18u;
    // 0x1bce1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BCE18u, 0x1BCE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE20u;
label_1bce20:
    // 0x1bce20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce24: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE24u;
    SET_GPR_U32(ctx, 31, 0x1BCE2Cu);
    ctx->pc = 0x1BCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE24u;
    // 0x1bce28: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE24u, 0x1BCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE2Cu;
label_1bce2c:
    // 0x1bce2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bce2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce30: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BCE30u;
    SET_GPR_U32(ctx, 31, 0x1BCE38u);
    ctx->pc = 0x1BCE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE30u;
    // 0x1bce34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BCE30u, 0x1BCE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE38u;
label_1bce38:
    // 0x1bce38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce3c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE44u);
    ctx->pc = 0x1BCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE3Cu;
    // 0x1bce40: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE3Cu, 0x1BCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE44u;
label_1bce44:
    // 0x1bce44: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1bce44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1bce48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce4c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE54u);
    ctx->pc = 0x1BCE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE4Cu;
    // 0x1bce50: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE4Cu, 0x1BCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE54u;
label_1bce54:
    // 0x1bce54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce58: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE58u;
    SET_GPR_U32(ctx, 31, 0x1BCE60u);
    ctx->pc = 0x1BCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE58u;
    // 0x1bce5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE58u, 0x1BCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE60u;
label_1bce60:
    // 0x1bce60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bce60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce64: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1bce68: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1bce68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1bce6c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1bce6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1bce70: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1bce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1bce74: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1bce74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1bce78: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1bce78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1bce7c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1bce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x1bce80: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCE80u;
    {
        const bool branch_taken_0x1bce80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE80u;
        // 0x1bce84: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce80) {
            ctx->pc = 0x1BCEA8u;
            goto label_1bcea8;
        }
    }
    ctx->pc = 0x1BCE88u;
    // 0x1bce88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce8c: 0x0  nop
    ctx->pc = 0x1bce8cu;
    // NOP
label_1bce90:
    // 0x1bce90: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCE90u;
    SET_GPR_U32(ctx, 31, 0x1BCE98u);
    ctx->pc = 0x1BCE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE90u;
    // 0x1bce94: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCE90u, 0x1BCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE98u;
label_1bce98:
    // 0x1bce98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bce9c: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1bce9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1bcea0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCEA0u;
    {
        const bool branch_taken_0x1bcea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA0u;
        // 0x1bcea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcea0) {
            ctx->pc = 0x1BCE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bce90;
        }
    }
    ctx->pc = 0x1BCEA8u;
label_1bcea8:
    // 0x1bcea8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bceac: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCEACu;
    SET_GPR_U32(ctx, 31, 0x1BCEB4u);
    ctx->pc = 0x1BCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEACu;
    // 0x1bceb0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCEACu, 0x1BCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB4u;
label_1bceb4:
    // 0x1bceb4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x1bceb8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCEB8u;
    {
        const bool branch_taken_0x1bceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bceb8) {
            ctx->pc = 0x1BCEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCEB8u;
            // 0x1bcebc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEDCu;
            goto label_1bcedc;
        }
    }
    ctx->pc = 0x1BCEC0u;
    // 0x1bcec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcec8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1bcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1bcecc: 0xc06f3c2  jal         func_1BCF08
    ctx->pc = 0x1BCECCu;
    SET_GPR_U32(ctx, 31, 0x1BCED4u);
    ctx->pc = 0x1BCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCECCu;
    // 0x1bced0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCF08u, 0x1BCECCu, 0x1BCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED4u;
label_1bced4:
    // 0x1bced4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCED4u;
    {
        const bool branch_taken_0x1bced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCED4u;
        // 0x1bced8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bced4) {
            ctx->pc = 0x1BCEE0u;
            goto label_1bcee0;
        }
    }
    ctx->pc = 0x1BCEDCu;
label_1bcedc:
    // 0x1bcedc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bcedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bcee0:
    // 0x1bcee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcee4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1bcee4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bcee8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1bcee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bceec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bceecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcef0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1bcef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bcef4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bcef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bcef8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bcef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcf00: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF00u;
        // 0x1bcf04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF08u;
}
