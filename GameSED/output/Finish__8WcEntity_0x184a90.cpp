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

// Function: Finish__8WcEntity
// Address: 0x184a90 - 0x184b7c
void Finish__8WcEntity_0x184a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcEntity_0x184a90");
#endif

    switch (ctx->pc) {
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        default: break;
    }

    ctx->pc = 0x184a90u;

label_184a90:
    // 0x184a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_184a94:
    // 0x184a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_184a98:
    // 0x184a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184a9c:
    // 0x184a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_184aa0:
    // 0x184aa0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x184aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184aa4:
    // 0x184aa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_184aa8:
    // 0x184aa8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x184aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_184aac:
    // 0x184aac: 0xc0617f0  jal         func_185FC0
label_184ab0:
    if (ctx->pc == 0x184AB0u) {
        ctx->pc = 0x184AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AACu;
        // 0x184ab0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AB4u;
        goto label_184ab4;
    }
    ctx->pc = 0x184AACu;
    SET_GPR_U32(ctx, 31, 0x184AB4u);
    ctx->pc = 0x184AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AACu;
    // 0x184ab0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FC0u, 0x184AACu, 0x184AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AB4u;
label_184ab4:
    // 0x184ab4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_184ab8:
    // 0x184ab8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x184ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_184abc:
    // 0x184abc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x184abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184ac0:
    // 0x184ac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_184ac4:
    // 0x184ac4: 0x60f809  jalr        $v1
label_184ac8:
    if (ctx->pc == 0x184AC8u) {
        ctx->pc = 0x184AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AC4u;
        // 0x184ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184ACCu;
        goto label_184acc;
    }
    ctx->pc = 0x184AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184ACCu);
        ctx->pc = 0x184AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AC4u;
        // 0x184ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184AC4u, 0x184ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184ACCu;
label_184acc:
    // 0x184acc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_184ad0:
    // 0x184ad0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_184ad4:
    if (ctx->pc == 0x184AD4u) {
        ctx->pc = 0x184AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AD0u;
        // 0x184ad4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AD8u;
        goto label_184ad8;
    }
    ctx->pc = 0x184AD0u;
    {
        const bool branch_taken_0x184ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ad0) {
            ctx->pc = 0x184AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184AD0u;
            // 0x184ad4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184B00u;
            goto label_184b00;
        }
    }
    ctx->pc = 0x184AD8u;
label_184ad8:
    // 0x184ad8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x184ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_184adc:
    // 0x184adc: 0x0  nop
    ctx->pc = 0x184adcu;
    // NOP
label_184ae0:
    // 0x184ae0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x184ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184ae4:
    // 0x184ae4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x184ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_184ae8:
    // 0x184ae8: 0xc069070  jal         func_1A41C0
label_184aec:
    if (ctx->pc == 0x184AECu) {
        ctx->pc = 0x184AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AE8u;
        // 0x184aec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AF0u;
        goto label_184af0;
    }
    ctx->pc = 0x184AE8u;
    SET_GPR_U32(ctx, 31, 0x184AF0u);
    ctx->pc = 0x184AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184AE8u;
    // 0x184aec: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x184AE8u, 0x184AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184AF0u;
label_184af0:
    // 0x184af0: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_184af4:
    // 0x184af4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_184af8:
    if (ctx->pc == 0x184AF8u) {
        ctx->pc = 0x184AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184AF4u;
        // 0x184af8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AFCu;
        goto label_184afc;
    }
    ctx->pc = 0x184AF4u;
    {
        const bool branch_taken_0x184af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184af4) {
            ctx->pc = 0x184AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184AF4u;
            // 0x184af8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184ae0;
        }
    }
    ctx->pc = 0x184AFCu;
label_184afc:
    // 0x184afc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x184afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_184b00:
    // 0x184b00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_184b04:
    // 0x184b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x184b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_184b08:
    // 0x184b08: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_184b0c:
    if (ctx->pc == 0x184B0Cu) {
        ctx->pc = 0x184B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B08u;
        // 0x184b0c: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B10u;
        goto label_184b10;
    }
    ctx->pc = 0x184B08u;
    {
        const bool branch_taken_0x184b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b08) {
            ctx->pc = 0x184B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184B08u;
            // 0x184b0c: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184B38u;
            goto label_184b38;
        }
    }
    ctx->pc = 0x184B10u;
label_184b10:
    // 0x184b10: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_184b14:
    // 0x184b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184b18:
    // 0x184b18: 0xc0685b8  jal         func_1A16E0
label_184b1c:
    if (ctx->pc == 0x184B1Cu) {
        ctx->pc = 0x184B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B18u;
        // 0x184b1c: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B20u;
        goto label_184b20;
    }
    ctx->pc = 0x184B18u;
    SET_GPR_U32(ctx, 31, 0x184B20u);
    ctx->pc = 0x184B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B18u;
    // 0x184b1c: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B18u, 0x184B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B20u;
label_184b20:
    // 0x184b20: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
label_184b24:
    // 0x184b24: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x184b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_184b28:
    // 0x184b28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x184b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_184b2c:
    // 0x184b2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x184b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_184b30:
    // 0x184b30: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x184b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_184b34:
    // 0x184b34: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_184b38:
    // 0x184b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184b3c:
    // 0x184b3c: 0xc0685b8  jal         func_1A16E0
label_184b40:
    if (ctx->pc == 0x184B40u) {
        ctx->pc = 0x184B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B3Cu;
        // 0x184b40: 0x248415a8  addiu       $a0, $a0, 0x15A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B44u;
        goto label_184b44;
    }
    ctx->pc = 0x184B3Cu;
    SET_GPR_U32(ctx, 31, 0x184B44u);
    ctx->pc = 0x184B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B3Cu;
    // 0x184b40: 0x248415a8  addiu       $a0, $a0, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B3Cu, 0x184B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B44u;
label_184b44:
    // 0x184b44: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_184b48:
    // 0x184b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184b4c:
    // 0x184b4c: 0xc0685b8  jal         func_1A16E0
label_184b50:
    if (ctx->pc == 0x184B50u) {
        ctx->pc = 0x184B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B4Cu;
        // 0x184b50: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B54u;
        goto label_184b54;
    }
    ctx->pc = 0x184B4Cu;
    SET_GPR_U32(ctx, 31, 0x184B54u);
    ctx->pc = 0x184B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B4Cu;
    // 0x184b50: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B4Cu, 0x184B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B54u;
label_184b54:
    // 0x184b54: 0xc068364  jal         func_1A0D90
label_184b58:
    if (ctx->pc == 0x184B58u) {
        ctx->pc = 0x184B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B54u;
        // 0x184b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B5Cu;
        goto label_184b5c;
    }
    ctx->pc = 0x184B54u;
    SET_GPR_U32(ctx, 31, 0x184B5Cu);
    ctx->pc = 0x184B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B54u;
    // 0x184b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x184B54u, 0x184B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B5Cu;
label_184b5c:
    // 0x184b5c: 0xc068396  jal         func_1A0E58
label_184b60:
    if (ctx->pc == 0x184B60u) {
        ctx->pc = 0x184B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B5Cu;
        // 0x184b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B64u;
        goto label_184b64;
    }
    ctx->pc = 0x184B5Cu;
    SET_GPR_U32(ctx, 31, 0x184B64u);
    ctx->pc = 0x184B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B5Cu;
    // 0x184b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x184B5Cu, 0x184B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B64u;
label_184b64:
    // 0x184b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184b68:
    // 0x184b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_184b6c:
    // 0x184b6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184b70:
    // 0x184b70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_184b74:
    // 0x184b74: 0x3e00008  jr          $ra
label_184b78:
    if (ctx->pc == 0x184B78u) {
        ctx->pc = 0x184B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B74u;
        // 0x184b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B7Cu;
        goto label_fallthrough_0x184b74;
    }
    ctx->pc = 0x184B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B74u;
        // 0x184b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x184b74:
    ctx->pc = 0x184B7Cu;
}
