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

// Function: SetDataSpriteList__9ApcPtcSprPUiPP10WImageInfoiP15ST_EffectSpriteUi
// Address: 0x1231b8 - 0x123258
void SetDataSpriteList__9ApcPtcSprPUiPP10WImageInfoiP15ST_EffectSpriteUi_0x1231b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDataSpriteList__9ApcPtcSprPUiPP10WImageInfoiP15ST_EffectSpriteUi_0x1231b8");
#endif

    switch (ctx->pc) {
        case 0x123208u: goto label_123208;
        case 0x123214u: goto label_123214;
        case 0x12322cu: goto label_12322c;
        default: break;
    }

    ctx->pc = 0x1231b8u;

    // 0x1231b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1231b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1231bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1231bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1231c0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1231c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1231c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1231c8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1231c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1231ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1231d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1231d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1231d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1231d8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1231d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1231dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1231e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1231e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231e4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1231E4u;
    {
        const bool branch_taken_0x1231e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231E4u;
        // 0x1231e8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231e4) {
            ctx->pc = 0x1231F4u;
            goto label_1231f4;
        }
    }
    ctx->pc = 0x1231ECu;
    // 0x1231ec: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1231ECu;
    {
        const bool branch_taken_0x1231ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1231ec) {
            ctx->pc = 0x123200u;
            goto label_123200;
        }
    }
    ctx->pc = 0x1231F4u;
label_1231f4:
    // 0x1231f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1231F4u;
    {
        const bool branch_taken_0x1231f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F4u;
        // 0x1231f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231f4) {
            ctx->pc = 0x123238u;
            goto label_123238;
        }
    }
    ctx->pc = 0x1231FCu;
    // 0x1231fc: 0x0  nop
    ctx->pc = 0x1231fcu;
    // NOP
label_123200:
    // 0x123200: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x123200u;
    {
        const bool branch_taken_0x123200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123200u;
        // 0x123204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123200) {
            ctx->pc = 0x123238u;
            goto label_123238;
        }
    }
    ctx->pc = 0x123208u;
label_123208:
    // 0x123208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12320c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12320Cu;
    SET_GPR_U32(ctx, 31, 0x123214u);
    ctx->pc = 0x123210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12320Cu;
    // 0x123210: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12320Cu, 0x123214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123214u;
label_123214:
    // 0x123214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12321c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123220: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x123220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x123224: 0xc0485e0  jal         func_121780
    ctx->pc = 0x123224u;
    SET_GPR_U32(ctx, 31, 0x12322Cu);
    ctx->pc = 0x123228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123224u;
    // 0x123228: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121780u, 0x123224u, 0x12322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12322Cu;
label_12322c:
    // 0x12322c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12322Cu;
    {
        const bool branch_taken_0x12322c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12322Cu;
        // 0x123230: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12322c) {
            ctx->pc = 0x123208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123208;
        }
    }
    ctx->pc = 0x123234u;
    // 0x123234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123238:
    // 0x123238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12323c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12323cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123244: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123248: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12324c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123250: 0x3e00008  jr          $ra
    ctx->pc = 0x123250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123250u;
        // 0x123254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123258u;
}
