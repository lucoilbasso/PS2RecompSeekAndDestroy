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

// Function: ModelBankDestroy__9ApcObjRsci
// Address: 0x104260 - 0x1042b4
void ModelBankDestroy__9ApcObjRsci_0x104260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelBankDestroy__9ApcObjRsci_0x104260");
#endif

    switch (ctx->pc) {
        case 0x104260u: goto label_104260;
        case 0x104264u: goto label_104264;
        case 0x104268u: goto label_104268;
        case 0x10426cu: goto label_10426c;
        case 0x104270u: goto label_104270;
        case 0x104274u: goto label_104274;
        case 0x104278u: goto label_104278;
        case 0x10427cu: goto label_10427c;
        case 0x104280u: goto label_104280;
        case 0x104284u: goto label_104284;
        case 0x104288u: goto label_104288;
        case 0x10428cu: goto label_10428c;
        case 0x104290u: goto label_104290;
        case 0x104294u: goto label_104294;
        case 0x104298u: goto label_104298;
        case 0x10429cu: goto label_10429c;
        case 0x1042a0u: goto label_1042a0;
        case 0x1042a4u: goto label_1042a4;
        case 0x1042a8u: goto label_1042a8;
        case 0x1042acu: goto label_1042ac;
        case 0x1042b0u: goto label_1042b0;
        default: break;
    }

    ctx->pc = 0x104260u;

label_104260:
    // 0x104260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_104264:
    // 0x104264: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x104264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_104268:
    // 0x104268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10426c:
    // 0x10426c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_104270:
    // 0x104270: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x104270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_104274:
    // 0x104274: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x104274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_104278:
    // 0x104278: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10427c:
    // 0x10427c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_104280:
    if (ctx->pc == 0x104280u) {
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10427Cu;
        // 0x104280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104284u;
        goto label_104284;
    }
    ctx->pc = 0x10427Cu;
    {
        const bool branch_taken_0x10427c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10427Cu;
        // 0x104280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10427c) {
            ctx->pc = 0x10429Cu;
            goto label_10429c;
        }
    }
    ctx->pc = 0x104284u;
label_104284:
    // 0x104284: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x104284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_104288:
    // 0x104288: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10428c:
    // 0x10428c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x10428cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_104290:
    // 0x104290: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104294:
    // 0x104294: 0x60f809  jalr        $v1
label_104298:
    if (ctx->pc == 0x104298u) {
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10429Cu;
        goto label_10429c;
    }
    ctx->pc = 0x104294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10429Cu);
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104294u, 0x10429Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1042a0:
    // 0x1042a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1042a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1042a4:
    // 0x1042a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1042a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1042a8:
    // 0x1042a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1042a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1042ac:
    // 0x1042ac: 0x3e00008  jr          $ra
label_1042b0:
    if (ctx->pc == 0x1042B0u) {
        ctx->pc = 0x1042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042ACu;
        // 0x1042b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042B4u;
        goto label_fallthrough_0x1042ac;
    }
    ctx->pc = 0x1042ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042ACu;
        // 0x1042b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1042ac:
    ctx->pc = 0x1042B4u;
}
