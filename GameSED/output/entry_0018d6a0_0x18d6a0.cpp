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

// Function: entry_0018d6a0
// Address: 0x18d6a0 - 0x18d760
void entry_0018d6a0_0x18d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d6a0_0x18d6a0");
#endif

    switch (ctx->pc) {
        case 0x18d6bcu: goto label_18d6bc;
        default: break;
    }

    ctx->pc = 0x18d6a0u;

    // 0x18d6a0: 0x54c2004f  bnel        $a2, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x18D6A0u;
    {
        const bool branch_taken_0x18d6a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x18d6a0) {
            ctx->pc = 0x18D6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D6A0u;
            // 0x18d6a4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D7E0u;
            return;
        }
    }
    ctx->pc = 0x18D6A8u;
    // 0x18d6a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6b4: 0xc06370a  jal         func_18DC28
    ctx->pc = 0x18D6B4u;
    SET_GPR_U32(ctx, 31, 0x18D6BCu);
    ctx->pc = 0x18D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6B4u;
    // 0x18d6b8: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC28u, 0x18D6B4u, 0x18D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6BCu;
label_18d6bc:
    // 0x18d6bc: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x18d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18d6c0: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x18D6C0u;
    {
        const bool branch_taken_0x18d6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C0u;
        // 0x18d6c4: 0x97a70006  lhu         $a3, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6c0) {
            ctx->pc = 0x18D790u;
            return;
        }
    }
    ctx->pc = 0x18D6C8u;
    // 0x18d6c8: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18d6cc: 0x86240244  lh          $a0, 0x244($s1)
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x18d6d0: 0x8e260208  lw          $a2, 0x208($s1)
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18d6d4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18d6d8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x18d6dc: 0x8e280214  lw          $t0, 0x214($s1)
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x18d6e0: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18d6e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18d6e8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x18d6e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18d6ec: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x18d6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18d6f0: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x18d6f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x18d6f4: 0xa6270246  sh          $a3, 0x246($s1)
    ctx->pc = 0x18d6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 7));
    // 0x18d6f8: 0x42843  sra         $a1, $a0, 1
    ctx->pc = 0x18d6f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 1));
    // 0x18d6fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x18d700: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x18d704: 0xa6250244  sh          $a1, 0x244($s1)
    ctx->pc = 0x18d704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 5));
    // 0x18d708: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18d708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x18d70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d710: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d714: 0x10800133  beqz        $a0, . + 4 + (0x133 << 2)
    ctx->pc = 0x18D714u;
    {
        const bool branch_taken_0x18d714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D714u;
        // 0x18d718: 0x1029021  addu        $s2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d714) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18D71Cu;
    // 0x18d71c: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x18d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x18d720: 0x2483023  subu        $a2, $s2, $t0
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x18d724: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x18d728: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x18d72c: 0x8e250238  lw          $a1, 0x238($s1)
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x18d730: 0x46a021  addu        $s4, $v0, $a2
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18d734: 0x8e240218  lw          $a0, 0x218($s1)
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x18d738: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x18d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x18d73c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d740: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x18d740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d744: 0x8cb50010  lw          $s5, 0x10($a1)
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18d748: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D748u;
    {
        const bool branch_taken_0x18d748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D748u;
        // 0x18d74c: 0x86b021  addu        $s6, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d748) {
            ctx->pc = 0x18D760u;
            return;
        }
    }
    ctx->pc = 0x18D750u;
    // 0x18d750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d758: 0xc063b70  jal         func_18EDC0
    ctx->pc = 0x18D758u;
    SET_GPR_U32(ctx, 31, 0x18D760u);
    ctx->pc = 0x18D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D758u;
    // 0x18d75c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D758u, 0x18D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D760u;
}
