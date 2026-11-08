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

// Function: entry_0011afd8
// Address: 0x11afd8 - 0x11b014
void entry_0011afd8_0x11afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011afd8_0x11afd8");
#endif

    switch (ctx->pc) {
        case 0x11affcu: goto label_11affc;
        default: break;
    }

    ctx->pc = 0x11afd8u;

label_11afd8:
    // 0x11afd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11afd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11afdc:
    // 0x11afdc: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_11afe0:
    if (ctx->pc == 0x11AFE0u) {
        ctx->pc = 0x11AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFDCu;
        // 0x11afe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFE4u;
        goto label_11afe4;
    }
    ctx->pc = 0x11AFDCu;
    {
        const bool branch_taken_0x11afdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11afdc) {
            ctx->pc = 0x11AFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AFDCu;
            // 0x11afe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B018u;
            return;
        }
    }
    ctx->pc = 0x11AFE4u;
label_11afe4:
    // 0x11afe4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11afe8:
    // 0x11afe8: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_11afec:
    // 0x11afec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11aff0:
    // 0x11aff0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11aff4:
    // 0x11aff4: 0x60f809  jalr        $v1
label_11aff8:
    if (ctx->pc == 0x11AFF8u) {
        ctx->pc = 0x11AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFF4u;
        // 0x11aff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11AFFCu;
        goto label_11affc;
    }
    ctx->pc = 0x11AFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11AFFCu);
        ctx->pc = 0x11AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AFF4u;
        // 0x11aff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AFF4u, 0x11AFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11AFFCu;
label_11affc:
    // 0x11affc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11b000:
    // 0x11b000: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x11b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_11b004:
    // 0x11b004: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b008:
    // 0x11b008: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b00c:
    // 0x11b00c: 0x60f809  jalr        $v1
label_11b010:
    if (ctx->pc == 0x11B010u) {
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B014u;
        goto label_fallthrough_0x11b00c;
    }
    ctx->pc = 0x11B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B014u);
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B00Cu, 0x11B014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11b00c:
    ctx->pc = 0x11B014u;
}
