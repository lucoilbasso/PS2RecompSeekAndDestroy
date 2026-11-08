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

// Function: SearchLoop__17ST_EffectParticlePUiUi
// Address: 0x121228 - 0x1212b4
void SearchLoop__17ST_EffectParticlePUiUi_0x121228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchLoop__17ST_EffectParticlePUiUi_0x121228");
#endif

    switch (ctx->pc) {
        case 0x121258u: goto label_121258;
        case 0x121278u: goto label_121278;
        default: break;
    }

    ctx->pc = 0x121228u;

    // 0x121228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12122c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12122cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121234: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121238: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12123c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12123Cu;
    {
        const bool branch_taken_0x12123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12123Cu;
        // 0x121240: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12123c) {
            ctx->pc = 0x1212A4u;
            goto label_1212a4;
        }
    }
    ctx->pc = 0x121244u;
    // 0x121244: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x121248: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x121248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12124c: 0x24455a50  addiu       $a1, $v0, 0x5A50
    ctx->pc = 0x12124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23120));
    // 0x121250: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121254: 0x0  nop
    ctx->pc = 0x121254u;
    // NOP
label_121258:
    // 0x121258: 0x54470009  bnel        $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x121258u;
    {
        const bool branch_taken_0x121258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x121258) {
            ctx->pc = 0x12125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121258u;
            // 0x12125c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x121260u;
    // 0x121260: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x121260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121264: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x121264u;
    {
        const bool branch_taken_0x121264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x121264) {
            ctx->pc = 0x121268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121264u;
            // 0x121268: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121280u;
            goto label_121280;
        }
    }
    ctx->pc = 0x12126Cu;
    // 0x12126c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121270: 0xc04780a  jal         func_11E028
    ctx->pc = 0x121270u;
    SET_GPR_U32(ctx, 31, 0x121278u);
    ctx->pc = 0x121274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121270u;
    // 0x121274: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E028u, 0x121270u, 0x121278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121278u;
label_121278:
    // 0x121278: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x121278u;
    {
        const bool branch_taken_0x121278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121278u;
        // 0x12127c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121278) {
            ctx->pc = 0x1212ACu;
            goto label_1212ac;
        }
    }
    ctx->pc = 0x121280u;
label_121280:
    // 0x121280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x121284: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x121284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x121288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12128c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x121290: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x121290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x121294: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121298: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x121298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12129c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12129Cu;
    {
        const bool branch_taken_0x12129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12129c) {
            ctx->pc = 0x121258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121258;
        }
    }
    ctx->pc = 0x1212A4u;
label_1212a4:
    // 0x1212a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1212a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1212ac:
    // 0x1212ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1212ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1212B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212ACu;
        // 0x1212b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1212ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1212B4u;
}
