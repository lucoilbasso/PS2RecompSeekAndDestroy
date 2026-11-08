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

// Function: entry_0015b9f8
// Address: 0x15b9f8 - 0x15ba70
void entry_0015b9f8_0x15b9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b9f8_0x15b9f8");
#endif

    switch (ctx->pc) {
        case 0x15ba4cu: goto label_15ba4c;
        default: break;
    }

    ctx->pc = 0x15b9f8u;

label_15b9f8:
    // 0x15b9f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15b9fc:
    // 0x15b9fc: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15ba00:
    if (ctx->pc == 0x15BA00u) {
        ctx->pc = 0x15BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9FCu;
        // 0x15ba00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA04u;
        goto label_15ba04;
    }
    ctx->pc = 0x15B9FCu;
    {
        const bool branch_taken_0x15b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9fc) {
            ctx->pc = 0x15BA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B9FCu;
            // 0x15ba00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAE4u;
            return;
        }
    }
    ctx->pc = 0x15BA04u;
label_15ba04:
    // 0x15ba04: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ba08:
    // 0x15ba08: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15ba0c:
    if (ctx->pc == 0x15BA0Cu) {
        ctx->pc = 0x15BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA08u;
        // 0x15ba0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA10u;
        goto label_15ba10;
    }
    ctx->pc = 0x15BA08u;
    {
        const bool branch_taken_0x15ba08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba08) {
            ctx->pc = 0x15BA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA08u;
            // 0x15ba0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BAE4u;
            return;
        }
    }
    ctx->pc = 0x15BA10u;
label_15ba10:
    // 0x15ba10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ba14:
    // 0x15ba14: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15ba18:
    // 0x15ba18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba1c:
    // 0x15ba1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ba20:
    if (ctx->pc == 0x15BA20u) {
        ctx->pc = 0x15BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA1Cu;
        // 0x15ba20: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA24u;
        goto label_15ba24;
    }
    ctx->pc = 0x15BA1Cu;
    {
        const bool branch_taken_0x15ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA1Cu;
        // 0x15ba20: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba1c) {
            ctx->pc = 0x15BA80u;
            return;
        }
    }
    ctx->pc = 0x15BA24u;
label_15ba24:
    // 0x15ba24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ba28:
    // 0x15ba28: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ba2c:
    if (ctx->pc == 0x15BA2Cu) {
        ctx->pc = 0x15BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA28u;
        // 0x15ba2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA30u;
        goto label_15ba30;
    }
    ctx->pc = 0x15BA28u;
    {
        const bool branch_taken_0x15ba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba28) {
            ctx->pc = 0x15BA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BA28u;
            // 0x15ba2c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BA74u;
            return;
        }
    }
    ctx->pc = 0x15BA30u;
label_15ba30:
    // 0x15ba30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba34:
    // 0x15ba34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ba38:
    // 0x15ba38: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba3c:
    // 0x15ba3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba40:
    // 0x15ba40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ba44:
    // 0x15ba44: 0x60f809  jalr        $v1
label_15ba48:
    if (ctx->pc == 0x15BA48u) {
        ctx->pc = 0x15BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA44u;
        // 0x15ba48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA4Cu;
        goto label_15ba4c;
    }
    ctx->pc = 0x15BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BA4Cu);
        ctx->pc = 0x15BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA44u;
        // 0x15ba48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA44u, 0x15BA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BA4Cu;
label_15ba4c:
    // 0x15ba4c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ba50:
    // 0x15ba50: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ba54:
    if (ctx->pc == 0x15BA54u) {
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA50u;
        // 0x15ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA58u;
        goto label_15ba58;
    }
    ctx->pc = 0x15BA50u;
    {
        const bool branch_taken_0x15ba50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA50u;
        // 0x15ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba50) {
            ctx->pc = 0x15BA70u;
            return;
        }
    }
    ctx->pc = 0x15BA58u;
label_15ba58:
    // 0x15ba58: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ba5c:
    // 0x15ba5c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ba60:
    // 0x15ba60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ba64:
    // 0x15ba64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ba68:
    // 0x15ba68: 0x60f809  jalr        $v1
label_15ba6c:
    if (ctx->pc == 0x15BA6Cu) {
        ctx->pc = 0x15BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA68u;
        // 0x15ba6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BA70u;
        goto label_fallthrough_0x15ba68;
    }
    ctx->pc = 0x15BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BA70u);
        ctx->pc = 0x15BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA68u;
        // 0x15ba6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BA68u, 0x15BA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ba68:
    ctx->pc = 0x15BA70u;
}
