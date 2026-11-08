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

// Function: entry_0015e958
// Address: 0x15e958 - 0x15e9d0
void entry_0015e958_0x15e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e958_0x15e958");
#endif

    switch (ctx->pc) {
        case 0x15e9acu: goto label_15e9ac;
        default: break;
    }

    ctx->pc = 0x15e958u;

label_15e958:
    // 0x15e958: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e95c:
    // 0x15e95c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15e960:
    if (ctx->pc == 0x15E960u) {
        ctx->pc = 0x15E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E95Cu;
        // 0x15e960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E964u;
        goto label_15e964;
    }
    ctx->pc = 0x15E95Cu;
    {
        const bool branch_taken_0x15e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e95c) {
            ctx->pc = 0x15E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E95Cu;
            // 0x15e960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA44u;
            return;
        }
    }
    ctx->pc = 0x15E964u;
label_15e964:
    // 0x15e964: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e968:
    // 0x15e968: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15e96c:
    if (ctx->pc == 0x15E96Cu) {
        ctx->pc = 0x15E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E968u;
        // 0x15e96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E970u;
        goto label_15e970;
    }
    ctx->pc = 0x15E968u;
    {
        const bool branch_taken_0x15e968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e968) {
            ctx->pc = 0x15E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E968u;
            // 0x15e96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA44u;
            return;
        }
    }
    ctx->pc = 0x15E970u;
label_15e970:
    // 0x15e970: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e974:
    // 0x15e974: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e978:
    // 0x15e978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e97c:
    // 0x15e97c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15e980:
    if (ctx->pc == 0x15E980u) {
        ctx->pc = 0x15E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E97Cu;
        // 0x15e980: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E984u;
        goto label_15e984;
    }
    ctx->pc = 0x15E97Cu;
    {
        const bool branch_taken_0x15e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E97Cu;
        // 0x15e980: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e97c) {
            ctx->pc = 0x15E9E0u;
            return;
        }
    }
    ctx->pc = 0x15E984u;
label_15e984:
    // 0x15e984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e988:
    // 0x15e988: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e98c:
    if (ctx->pc == 0x15E98Cu) {
        ctx->pc = 0x15E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E988u;
        // 0x15e98c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E990u;
        goto label_15e990;
    }
    ctx->pc = 0x15E988u;
    {
        const bool branch_taken_0x15e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e988) {
            ctx->pc = 0x15E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E988u;
            // 0x15e98c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E9D4u;
            return;
        }
    }
    ctx->pc = 0x15E990u;
label_15e990:
    // 0x15e990: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e994:
    // 0x15e994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e998:
    // 0x15e998: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e99c:
    // 0x15e99c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9a0:
    // 0x15e9a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e9a4:
    // 0x15e9a4: 0x60f809  jalr        $v1
label_15e9a8:
    if (ctx->pc == 0x15E9A8u) {
        ctx->pc = 0x15E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9A4u;
        // 0x15e9a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9ACu;
        goto label_15e9ac;
    }
    ctx->pc = 0x15E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E9ACu);
        ctx->pc = 0x15E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9A4u;
        // 0x15e9a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9A4u, 0x15E9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E9ACu;
label_15e9ac:
    // 0x15e9ac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e9b0:
    // 0x15e9b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e9b4:
    if (ctx->pc == 0x15E9B4u) {
        ctx->pc = 0x15E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9B0u;
        // 0x15e9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9B8u;
        goto label_15e9b8;
    }
    ctx->pc = 0x15E9B0u;
    {
        const bool branch_taken_0x15e9b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9B0u;
        // 0x15e9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9b0) {
            ctx->pc = 0x15E9D0u;
            return;
        }
    }
    ctx->pc = 0x15E9B8u;
label_15e9b8:
    // 0x15e9b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e9bc:
    // 0x15e9bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e9c0:
    // 0x15e9c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9c4:
    // 0x15e9c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e9c8:
    // 0x15e9c8: 0x60f809  jalr        $v1
label_15e9cc:
    if (ctx->pc == 0x15E9CCu) {
        ctx->pc = 0x15E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9C8u;
        // 0x15e9cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9D0u;
        goto label_fallthrough_0x15e9c8;
    }
    ctx->pc = 0x15E9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E9D0u);
        ctx->pc = 0x15E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9C8u;
        // 0x15e9cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9C8u, 0x15E9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e9c8:
    ctx->pc = 0x15E9D0u;
}
