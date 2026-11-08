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

// Function: SearchNextCommand__17ST_EffectParticlePUiUi
// Address: 0x121190 - 0x121224
void SearchNextCommand__17ST_EffectParticlePUiUi_0x121190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextCommand__17ST_EffectParticlePUiUi_0x121190");
#endif

    switch (ctx->pc) {
        case 0x1211a8u: goto label_1211a8;
        case 0x1211e0u: goto label_1211e0;
        default: break;
    }

    ctx->pc = 0x121190u;

    // 0x121190: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x121190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121194: 0x54e00006  bnel        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x121194u;
    {
        const bool branch_taken_0x121194 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x121194) {
            ctx->pc = 0x121198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121194u;
            // 0x121198: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211B0u;
            goto label_1211b0;
        }
    }
    ctx->pc = 0x12119Cu;
    // 0x12119c: 0x3e00008  jr          $ra
    ctx->pc = 0x12119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1211A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12119Cu;
        // 0x1211a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1211A4u;
    // 0x1211a4: 0x0  nop
    ctx->pc = 0x1211a4u;
    // NOP
label_1211a8:
    // 0x1211a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1211A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1211ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211A8u;
        // 0x1211ac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1211A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1211B0u;
label_1211b0:
    // 0x1211b0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1211b4: 0x24445a50  addiu       $a0, $v0, 0x5A50
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x1211b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1211b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1211bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1211c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1211c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1211c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1211c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1211c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1211cc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1211ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1211d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1211D0u;
    {
        const bool branch_taken_0x1211d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211D0u;
        // 0x1211d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211d0) {
            ctx->pc = 0x12121Cu;
            goto label_12121c;
        }
    }
    ctx->pc = 0x1211D8u;
    // 0x1211d8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1211d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211dc: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1211e0:
    // 0x1211e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1211e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1211e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1211e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1211e8: 0x2cc40045  sltiu       $a0, $a2, 0x45
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x1211ec: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1211ECu;
    {
        const bool branch_taken_0x1211ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211ECu;
        // 0x1211f0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211ec) {
            ctx->pc = 0x12121Cu;
            goto label_12121c;
        }
    }
    ctx->pc = 0x1211F4u;
    // 0x1211f4: 0x10c5ffec  beq         $a2, $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1211F4u;
    {
        const bool branch_taken_0x1211f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1211f4) {
            ctx->pc = 0x1211A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1211a8;
        }
    }
    ctx->pc = 0x1211FCu;
    // 0x1211fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121204: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x121204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x121208: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12120c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x12120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121210: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x121210u;
    {
        const bool branch_taken_0x121210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121210u;
        // 0x121214: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121210) {
            ctx->pc = 0x1211E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1211e0;
        }
    }
    ctx->pc = 0x121218u;
    // 0x121218: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12121c:
    // 0x12121c: 0x3e00008  jr          $ra
    ctx->pc = 0x12121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121224u;
}
