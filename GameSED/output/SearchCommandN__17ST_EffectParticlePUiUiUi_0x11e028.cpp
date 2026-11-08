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

// Function: SearchCommandN__17ST_EffectParticlePUiUiUi
// Address: 0x11e028 - 0x11e0ac
void SearchCommandN__17ST_EffectParticlePUiUiUi_0x11e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCommandN__17ST_EffectParticlePUiUiUi_0x11e028");
#endif

    switch (ctx->pc) {
        case 0x11e040u: goto label_11e040;
        case 0x11e058u: goto label_11e058;
        default: break;
    }

    ctx->pc = 0x11e028u;

    // 0x11e028: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11e02c: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x11e030: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x11e030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x11e034: 0x25295a50  addiu       $t1, $t1, 0x5A50
    ctx->pc = 0x11e034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23120));
    // 0x11e038: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x11e03c: 0x0  nop
    ctx->pc = 0x11e03cu;
    // NOP
label_11e040:
    // 0x11e040: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11e040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e044: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E044u;
    {
        const bool branch_taken_0x11e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E044u;
        // 0x11e048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e044) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E04Cu;
    // 0x11e04c: 0x25485a50  addiu       $t0, $t2, 0x5A50
    ctx->pc = 0x11e04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 23120));
    // 0x11e050: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x11e050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e054: 0x0  nop
    ctx->pc = 0x11e054u;
    // NOP
label_11e058:
    // 0x11e058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e05c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11e060: 0x2ca30045  sltiu       $v1, $a1, 0x45
    ctx->pc = 0x11e060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e064: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E064u;
    {
        const bool branch_taken_0x11e064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E064u;
        // 0x11e068: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e064) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E06Cu;
    // 0x11e06c: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E06Cu;
    {
        const bool branch_taken_0x11e06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x11E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E06Cu;
        // 0x11e070: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e06c) {
            ctx->pc = 0x11E090u;
            goto label_11e090;
        }
    }
    ctx->pc = 0x11E074u;
    // 0x11e074: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e07c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e080: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x11e080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e084: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E084u;
    {
        const bool branch_taken_0x11e084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e084) {
            ctx->pc = 0x11E088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E084u;
            // 0x11e088: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e058;
        }
    }
    ctx->pc = 0x11E08Cu;
    // 0x11e08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e090:
    // 0x11e090: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E090u;
    {
        const bool branch_taken_0x11e090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e090) {
            ctx->pc = 0x11E094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E090u;
            // 0x11e094: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0A0u;
            goto label_11e0a0;
        }
    }
    ctx->pc = 0x11E098u;
    // 0x11e098: 0x3e00008  jr          $ra
    ctx->pc = 0x11E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E098u;
        // 0x11e09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0A0u;
label_11e0a0:
    // 0x11e0a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e0a4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11E0A4u;
    {
        const bool branch_taken_0x11e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0A4u;
        // 0x11e0a8: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0a4) {
            ctx->pc = 0x11E040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e040;
        }
    }
    ctx->pc = 0x11E0ACu;
}
