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

// Function: entry_0016a420
// Address: 0x16a420 - 0x16a470
void entry_0016a420_0x16a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a420_0x16a420");
#endif

    switch (ctx->pc) {
        case 0x16a438u: goto label_16a438;
        case 0x16a468u: goto label_16a468;
        default: break;
    }

    ctx->pc = 0x16a420u;

label_16a420:
    // 0x16a420: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_16a424:
    if (ctx->pc == 0x16A424u) {
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A420u;
        // 0x16a424: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A428u;
        goto label_16a428;
    }
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A420u;
        // 0x16a424: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A538u;
            return;
        }
    }
    ctx->pc = 0x16A428u;
label_16a428:
    // 0x16a428: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a42c:
    // 0x16a42c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a430:
    // 0x16a430: 0xc0592d6  jal         func_164B58
label_16a434:
    if (ctx->pc == 0x16A434u) {
        ctx->pc = 0x16A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A430u;
        // 0x16a434: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A438u;
        goto label_16a438;
    }
    ctx->pc = 0x16A430u;
    SET_GPR_U32(ctx, 31, 0x16A438u);
    ctx->pc = 0x16A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A430u;
    // 0x16a434: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x16A430u, 0x16A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A438u;
label_16a438:
    // 0x16a438: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_16a43c:
    if (ctx->pc == 0x16A43Cu) {
        ctx->pc = 0x16A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A438u;
        // 0x16a43c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A440u;
        goto label_16a440;
    }
    ctx->pc = 0x16A438u;
    {
        const bool branch_taken_0x16a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a438) {
            ctx->pc = 0x16A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A438u;
            // 0x16a43c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A470u;
            return;
        }
    }
    ctx->pc = 0x16A440u;
label_16a440:
    // 0x16a440: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a444:
    // 0x16a444: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16a448:
    // 0x16a448: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_16a44c:
    // 0x16a44c: 0x24630068  addiu       $v1, $v1, 0x68
    ctx->pc = 0x16a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
label_16a450:
    // 0x16a450: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_16a454:
    // 0x16a454: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16a458:
    // 0x16a458: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x16a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_16a45c:
    // 0x16a45c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x16a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_16a460:
    // 0x16a460: 0xc0f809  jalr        $a2
label_16a464:
    if (ctx->pc == 0x16A464u) {
        ctx->pc = 0x16A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A460u;
        // 0x16a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A468u;
        goto label_16a468;
    }
    ctx->pc = 0x16A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x16A468u);
        ctx->pc = 0x16A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A460u;
        // 0x16a464: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A460u, 0x16A468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A468u;
label_16a468:
    // 0x16a468: 0x10000034  b           . + 4 + (0x34 << 2)
label_16a46c:
    if (ctx->pc == 0x16A46Cu) {
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A470u;
        goto label_fallthrough_0x16a468;
    }
    ctx->pc = 0x16A468u;
    {
        const bool branch_taken_0x16a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a468) {
            ctx->pc = 0x16A53Cu;
            return;
        }
    }
label_fallthrough_0x16a468:
    ctx->pc = 0x16A470u;
}
