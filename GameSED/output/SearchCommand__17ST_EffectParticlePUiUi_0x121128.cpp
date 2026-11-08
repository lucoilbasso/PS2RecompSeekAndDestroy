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

// Function: SearchCommand__17ST_EffectParticlePUiUi
// Address: 0x121128 - 0x12118c
void SearchCommand__17ST_EffectParticlePUiUi_0x121128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchCommand__17ST_EffectParticlePUiUi_0x121128");
#endif

    switch (ctx->pc) {
        case 0x121148u: goto label_121148;
        default: break;
    }

    ctx->pc = 0x121128u;

    // 0x121128: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x121128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12112c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x121130: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121134: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x121134u;
    {
        const bool branch_taken_0x121134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121134u;
        // 0x121138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121134) {
            ctx->pc = 0x121184u;
            goto label_121184;
        }
    }
    ctx->pc = 0x12113Cu;
    // 0x12113c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x121140: 0x24485a50  addiu       $t0, $v0, 0x5A50
    ctx->pc = 0x121140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x121144: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x121144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_121148:
    // 0x121148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12114c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x12114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x121150: 0x2cc40045  sltiu       $a0, $a2, 0x45
    ctx->pc = 0x121150u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x121154: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x121154u;
    {
        const bool branch_taken_0x121154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121154u;
        // 0x121158: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121154) {
            ctx->pc = 0x121184u;
            goto label_121184;
        }
    }
    ctx->pc = 0x12115Cu;
    // 0x12115c: 0x10c50009  beq         $a2, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12115Cu;
    {
        const bool branch_taken_0x12115c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x121160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12115Cu;
        // 0x121160: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12115c) {
            ctx->pc = 0x121184u;
            goto label_121184;
        }
    }
    ctx->pc = 0x121164u;
    // 0x121164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12116c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x121170: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x121170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x121174: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121178: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x121178u;
    {
        const bool branch_taken_0x121178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121178u;
        // 0x12117c: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121178) {
            ctx->pc = 0x121148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121148;
        }
    }
    ctx->pc = 0x121180u;
    // 0x121180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121184:
    // 0x121184: 0x3e00008  jr          $ra
    ctx->pc = 0x121184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12118Cu;
}
