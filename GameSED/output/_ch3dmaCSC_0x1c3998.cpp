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

// Function: _ch3dmaCSC
// Address: 0x1c3998 - 0x1c3ad8
void _ch3dmaCSC_0x1c3998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ch3dmaCSC_0x1c3998");
#endif

    ctx->pc = 0x1c3998u;

    // 0x1c3998: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c3998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c399c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c39a0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1c39a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x1c39a4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c39a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c39a8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3));
    // 0x1c39ac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c39b0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1c39b4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c39b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c39bc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1c39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1c39c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x1c39c4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C39C4u;
    {
        const bool branch_taken_0x1c39c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39C4u;
        // 0x1c39c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39c4) {
            ctx->pc = 0x1C39E4u;
            goto label_1c39e4;
        }
    }
    ctx->pc = 0x1C39CCu;
    // 0x1c39cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c39d0: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1c39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x1c39d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x1c39d8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1c39d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1c39dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C39DCu;
    {
        const bool branch_taken_0x1c39dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39DCu;
        // 0x1c39e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39dc) {
            ctx->pc = 0x1C39F0u;
            goto label_1c39f0;
        }
    }
    ctx->pc = 0x1C39E4u;
label_1c39e4:
    // 0x1c39e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c39e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C39E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39E8u;
        // 0x1c39ec: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C39E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C39F0u;
label_1c39f0:
    // 0x1c39f0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1c39f4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1c39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c39f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c39fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c39fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c3a00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3A00u;
    {
        const bool branch_taken_0x1c3a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A00u;
        // 0x1c3a04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a00) {
            ctx->pc = 0x1C3A64u;
            goto label_1c3a64;
        }
    }
    ctx->pc = 0x1C3A08u;
    // 0x1c3a08: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a0c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1c3a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1c3a10: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1c3a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1c3a14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c3a18: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1c3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3a1c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3a20: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x1c3a20u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x1c3a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1c3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3a2c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3a30: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x1c3a30u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5));
    // 0x1c3a34: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1c3a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1c3a38: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1c3a3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c3a3cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x1c3a40: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1c3a44: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x1c3a48: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1c3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3a4c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1c3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3a54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c3a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3a5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3A5Cu;
    {
        const bool branch_taken_0x1c3a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A5Cu;
        // 0x1c3a60: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a5c) {
            ctx->pc = 0x1C3AC8u;
            goto label_1c3ac8;
        }
    }
    ctx->pc = 0x1C3A64u;
label_1c3a64:
    // 0x1c3a64: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c3a68: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3A68u;
    {
        const bool branch_taken_0x1c3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A68u;
        // 0x1c3a6c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a68) {
            ctx->pc = 0x1C3AC8u;
            goto label_1c3ac8;
        }
    }
    ctx->pc = 0x1C3A70u;
    // 0x1c3a70: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1c3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c3a74: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a78: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3a7c: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1c3a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x1c3a80: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x1c3a84: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x1c3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1c3a88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1c3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c3a8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3a90: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3a94: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x1c3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x1c3a98: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1c3a98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1c3a9c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1c3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1c3aa0: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1c3aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1c3aa4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3aa8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1c3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c3aac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3ab0: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x1c3ab0u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2));
    // 0x1c3ab4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1c3ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1c3ab8: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x1c3ab8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8));
    // 0x1c3abc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1c3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c3ac0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c3ac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1c3ac8:
    // 0x1c3ac8: 0xf  sync
    ctx->pc = 0x1c3ac8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1c3acc: 0x42000038  ei
    ctx->pc = 0x1c3accu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1c3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AD0u;
        // 0x1c3ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3AD8u;
}
