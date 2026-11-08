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

// Function: entry_0015bc00
// Address: 0x15bc00 - 0x15bc78
void entry_0015bc00_0x15bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc00_0x15bc00");
#endif

    switch (ctx->pc) {
        case 0x15bc54u: goto label_15bc54;
        default: break;
    }

    ctx->pc = 0x15bc00u;

label_15bc00:
    // 0x15bc00: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bc04:
    // 0x15bc04: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15bc08:
    if (ctx->pc == 0x15BC08u) {
        ctx->pc = 0x15BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC04u;
        // 0x15bc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC0Cu;
        goto label_15bc0c;
    }
    ctx->pc = 0x15BC04u;
    {
        const bool branch_taken_0x15bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc04) {
            ctx->pc = 0x15BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC04u;
            // 0x15bc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCECu;
            return;
        }
    }
    ctx->pc = 0x15BC0Cu;
label_15bc0c:
    // 0x15bc0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bc10:
    // 0x15bc10: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15bc14:
    if (ctx->pc == 0x15BC14u) {
        ctx->pc = 0x15BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC10u;
        // 0x15bc14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC18u;
        goto label_15bc18;
    }
    ctx->pc = 0x15BC10u;
    {
        const bool branch_taken_0x15bc10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc10) {
            ctx->pc = 0x15BC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC10u;
            // 0x15bc14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BCECu;
            return;
        }
    }
    ctx->pc = 0x15BC18u;
label_15bc18:
    // 0x15bc18: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15bc1c:
    // 0x15bc1c: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15bc20:
    // 0x15bc20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc24:
    // 0x15bc24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15bc28:
    if (ctx->pc == 0x15BC28u) {
        ctx->pc = 0x15BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC24u;
        // 0x15bc28: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC2Cu;
        goto label_15bc2c;
    }
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC24u;
        // 0x15bc28: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC88u;
            return;
        }
    }
    ctx->pc = 0x15BC2Cu;
label_15bc2c:
    // 0x15bc2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15bc30:
    // 0x15bc30: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15bc34:
    if (ctx->pc == 0x15BC34u) {
        ctx->pc = 0x15BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC30u;
        // 0x15bc34: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC38u;
        goto label_15bc38;
    }
    ctx->pc = 0x15BC30u;
    {
        const bool branch_taken_0x15bc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bc30) {
            ctx->pc = 0x15BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC30u;
            // 0x15bc34: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BC7Cu;
            return;
        }
    }
    ctx->pc = 0x15BC38u;
label_15bc38:
    // 0x15bc38: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc3c:
    // 0x15bc3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bc40:
    // 0x15bc40: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bc44:
    // 0x15bc44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bc44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bc48:
    // 0x15bc48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bc4c:
    // 0x15bc4c: 0x60f809  jalr        $v1
label_15bc50:
    if (ctx->pc == 0x15BC50u) {
        ctx->pc = 0x15BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC4Cu;
        // 0x15bc50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC54u;
        goto label_15bc54;
    }
    ctx->pc = 0x15BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC54u);
        ctx->pc = 0x15BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC4Cu;
        // 0x15bc50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC4Cu, 0x15BC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC54u;
label_15bc54:
    // 0x15bc54: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15bc58:
    // 0x15bc58: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15bc5c:
    if (ctx->pc == 0x15BC5Cu) {
        ctx->pc = 0x15BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC58u;
        // 0x15bc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC60u;
        goto label_15bc60;
    }
    ctx->pc = 0x15BC58u;
    {
        const bool branch_taken_0x15bc58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC58u;
        // 0x15bc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc58) {
            ctx->pc = 0x15BC78u;
            return;
        }
    }
    ctx->pc = 0x15BC60u;
label_15bc60:
    // 0x15bc60: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15bc64:
    // 0x15bc64: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15bc68:
    // 0x15bc68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bc6c:
    // 0x15bc6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15bc70:
    // 0x15bc70: 0x60f809  jalr        $v1
label_15bc74:
    if (ctx->pc == 0x15BC74u) {
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC78u;
        goto label_fallthrough_0x15bc70;
    }
    ctx->pc = 0x15BC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC78u);
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC70u, 0x15BC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15bc70:
    ctx->pc = 0x15BC78u;
}
