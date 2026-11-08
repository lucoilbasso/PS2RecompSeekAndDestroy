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

// Function: OMTSuperReport__FP5BcObji
// Address: 0x1a0970 - 0x1a0ac8
void OMTSuperReport__FP5BcObji_0x1a0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OMTSuperReport__FP5BcObji_0x1a0970");
#endif

    switch (ctx->pc) {
        case 0x1a09c0u: goto label_1a09c0;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a88u: goto label_1a0a88;
        case 0x1a0aa8u: goto label_1a0aa8;
        case 0x1a0abcu: goto label_1a0abc;
        default: break;
    }

    ctx->pc = 0x1a0970u;

    // 0x1a0970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0974: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a0974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0978: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0978u;
    {
        const bool branch_taken_0x1a0978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0978u;
        // 0x1a097c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0978) {
            ctx->pc = 0x1A0990u;
            goto label_1a0990;
        }
    }
    ctx->pc = 0x1A0980u;
    // 0x1a0980: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a0984: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A0984u;
    {
        const bool branch_taken_0x1a0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0984u;
        // 0x1a0988: 0x2446d8d0  addiu       $a2, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0984) {
            ctx->pc = 0x1A0A38u;
            goto label_1a0a38;
        }
    }
    ctx->pc = 0x1A098Cu;
    // 0x1a098c: 0x0  nop
    ctx->pc = 0x1a098cu;
    // NOP
label_1a0990:
    // 0x1a0990: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1a0990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1a0994: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x1a0998: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a099c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a09a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a09a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A09A4u;
    {
        const bool branch_taken_0x1a09a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09A4u;
        // 0x1a09a8: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09a4) {
            ctx->pc = 0x1A09F0u;
            goto label_1a09f0;
        }
    }
    ctx->pc = 0x1A09ACu;
    // 0x1a09ac: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a09b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A09B4u;
    {
        const bool branch_taken_0x1a09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09B4u;
        // 0x1a09b8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09b4) {
            ctx->pc = 0x1A0A30u;
            goto label_1a0a30;
        }
    }
    ctx->pc = 0x1A09BCu;
    // 0x1a09bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a09c0:
    // 0x1a09c0: 0x5044001c  beql        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A09C0u;
    {
        const bool branch_taken_0x1a09c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a09c0) {
            ctx->pc = 0x1A09C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09C0u;
            // 0x1a09c4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A34u;
            goto label_1a0a34;
        }
    }
    ctx->pc = 0x1A09C8u;
    // 0x1a09c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a09cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09d0: 0x0  nop
    ctx->pc = 0x1a09d0u;
    // NOP
    // 0x1a09d4: 0x0  nop
    ctx->pc = 0x1a09d4u;
    // NOP
    // 0x1a09d8: 0x0  nop
    ctx->pc = 0x1a09d8u;
    // NOP
    // 0x1a09dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A09DCu;
    {
        const bool branch_taken_0x1a09dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a09dc) {
            ctx->pc = 0x1A09E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09DCu;
            // 0x1a09e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a09c0;
        }
    }
    ctx->pc = 0x1A09E4u;
    // 0x1a09e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A09E4u;
    {
        const bool branch_taken_0x1a09e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09E4u;
        // 0x1a09e8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09e4) {
            ctx->pc = 0x1A0A30u;
            goto label_1a0a30;
        }
    }
    ctx->pc = 0x1A09ECu;
    // 0x1a09ec: 0x0  nop
    ctx->pc = 0x1a09ecu;
    // NOP
label_1a09f0:
    // 0x1a09f0: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a09f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A09F8u;
    {
        const bool branch_taken_0x1a09f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F8u;
        // 0x1a09fc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09f8) {
            ctx->pc = 0x1A0A2Cu;
            goto label_1a0a2c;
        }
    }
    ctx->pc = 0x1A0A00u;
    // 0x1a0a00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a0a04: 0x0  nop
    ctx->pc = 0x1a0a04u;
    // NOP
label_1a0a08:
    // 0x1a0a08: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0A08u;
    {
        const bool branch_taken_0x1a0a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0a08) {
            ctx->pc = 0x1A0A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A08u;
            // 0x1a0a0c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A34u;
            goto label_1a0a34;
        }
    }
    ctx->pc = 0x1A0A10u;
    // 0x1a0a10: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a0a14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0a18: 0x0  nop
    ctx->pc = 0x1a0a18u;
    // NOP
    // 0x1a0a1c: 0x0  nop
    ctx->pc = 0x1a0a1cu;
    // NOP
    // 0x1a0a20: 0x0  nop
    ctx->pc = 0x1a0a20u;
    // NOP
    // 0x1a0a24: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0A24u;
    {
        const bool branch_taken_0x1a0a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a24) {
            ctx->pc = 0x1A0A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A24u;
            // 0x1a0a28: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0a08;
        }
    }
    ctx->pc = 0x1A0A2Cu;
label_1a0a2c:
    // 0x1a0a2c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1a0a30:
    // 0x1a0a30: 0x24458fc8  addiu       $a1, $v0, -0x7038
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
label_1a0a34:
    // 0x1a0a34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a0a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a38:
    // 0x1a0a38: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a0a3c: 0x54e20006  bnel        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A3Cu;
    {
        const bool branch_taken_0x1a0a3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a3c) {
            ctx->pc = 0x1A0A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A3Cu;
            // 0x1a0a40: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A58u;
            goto label_1a0a58;
        }
    }
    ctx->pc = 0x1A0A44u;
    // 0x1a0a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a4c: 0x805bed8  j           func_16FB60
    ctx->pc = 0x1A0A4Cu;
    ctx->pc = 0x1A0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A4Cu;
    // 0x1a0a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB60u;
    ApDebugHistoryEnable__Fb_0x16fb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0A54u;
    // 0x1a0a54: 0x0  nop
    ctx->pc = 0x1a0a54u;
    // NOP
label_1a0a58:
    // 0x1a0a58: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0A58u;
    {
        const bool branch_taken_0x1a0a58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a58) {
            ctx->pc = 0x1A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A70u;
            goto label_1a0a70;
        }
    }
    ctx->pc = 0x1A0A60u;
    // 0x1a0a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a68: 0x805bed8  j           func_16FB60
    ctx->pc = 0x1A0A68u;
    ctx->pc = 0x1A0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A68u;
    // 0x1a0a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB60u;
    ApDebugHistoryEnable__Fb_0x16fb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0A70u;
label_1a0a70:
    // 0x1a0a70: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0A70u;
    {
        const bool branch_taken_0x1a0a70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a70) {
            ctx->pc = 0x1A0A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A70u;
            // 0x1a0a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A90u;
            goto label_1a0a90;
        }
    }
    ctx->pc = 0x1A0A78u;
    // 0x1a0a78: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0a7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a0a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a80: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x1A0A80u;
    SET_GPR_U32(ctx, 31, 0x1A0A88u);
    ctx->pc = 0x1A0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A80u;
    // 0x1a0a84: 0x24849090  addiu       $a0, $a0, -0x6F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x1A0A80u, 0x1A0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A88u;
label_1a0a88:
    // 0x1a0a88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0A88u;
    {
        const bool branch_taken_0x1a0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A88u;
        // 0x1a0a8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a88) {
            ctx->pc = 0x1A0AC0u;
            goto label_1a0ac0;
        }
    }
    ctx->pc = 0x1A0A90u;
label_1a0a90:
    // 0x1a0a90: 0x54e20007  bnel        $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0A90u;
    {
        const bool branch_taken_0x1a0a90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a90) {
            ctx->pc = 0x1A0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A90u;
            // 0x1a0a94: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0AB0u;
            goto label_1a0ab0;
        }
    }
    ctx->pc = 0x1A0A98u;
    // 0x1a0a98: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0a9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a0a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0aa0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0AA0u;
    SET_GPR_U32(ctx, 31, 0x1A0AA8u);
    ctx->pc = 0x1A0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AA0u;
    // 0x1a0aa4: 0x248490a8  addiu       $a0, $a0, -0x6F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0AA0u, 0x1A0AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AA8u;
label_1a0aa8:
    // 0x1a0aa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0AA8u;
    {
        const bool branch_taken_0x1a0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AA8u;
        // 0x1a0aac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0aa8) {
            ctx->pc = 0x1A0AC0u;
            goto label_1a0ac0;
        }
    }
    ctx->pc = 0x1A0AB0u;
label_1a0ab0:
    // 0x1a0ab0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ab4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0AB4u;
    SET_GPR_U32(ctx, 31, 0x1A0ABCu);
    ctx->pc = 0x1A0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AB4u;
    // 0x1a0ab8: 0x248490b8  addiu       $a0, $a0, -0x6F48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0AB4u, 0x1A0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ABCu;
label_1a0abc:
    // 0x1a0abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0ac0:
    // 0x1a0ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AC0u;
        // 0x1a0ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AC8u;
}
