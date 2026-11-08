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

// Function: entry_0013473c
// Address: 0x13473c - 0x1347ac
void entry_0013473c_0x13473c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013473c_0x13473c");
#endif

    switch (ctx->pc) {
        case 0x134748u: goto label_134748;
        case 0x134768u: goto label_134768;
        default: break;
    }

    ctx->pc = 0x13473cu;

label_13473c:
    // 0x13473c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134740:
    // 0x134740: 0xc0533e4  jal         func_14CF90
label_134744:
    if (ctx->pc == 0x134744u) {
        ctx->pc = 0x134744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134740u;
        // 0x134744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134748u;
        goto label_134748;
    }
    ctx->pc = 0x134740u;
    SET_GPR_U32(ctx, 31, 0x134748u);
    ctx->pc = 0x134744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134740u;
    // 0x134744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x134740u, 0x134748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134748u;
label_134748:
    // 0x134748: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x134748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13474c:
    // 0x13474c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134750:
    // 0x134750: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_134754:
    // 0x134754: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x134754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_134758:
    // 0x134758: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13475c:
    // 0x13475c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_134760:
    // 0x134760: 0x60f809  jalr        $v1
label_134764:
    if (ctx->pc == 0x134764u) {
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134760u;
        // 0x134764: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134768u;
        goto label_134768;
    }
    ctx->pc = 0x134760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134768u);
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134760u;
        // 0x134764: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134760u, 0x134768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134768u;
label_134768:
    // 0x134768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13476c:
    // 0x13476c: 0x1262004c  beq         $s3, $v0, . + 4 + (0x4C << 2)
label_134770:
    if (ctx->pc == 0x134770u) {
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134774u;
        goto label_134774;
    }
    ctx->pc = 0x13476Cu;
    {
        const bool branch_taken_0x13476c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13476c) {
            ctx->pc = 0x1348A0u;
            return;
        }
    }
    ctx->pc = 0x134774u;
label_134774:
    // 0x134774: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x134774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_134778:
    // 0x134778: 0x5462004a  bnel        $v1, $v0, . + 4 + (0x4A << 2)
label_13477c:
    if (ctx->pc == 0x13477Cu) {
        ctx->pc = 0x13477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134778u;
        // 0x13477c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134780u;
        goto label_134780;
    }
    ctx->pc = 0x134778u;
    {
        const bool branch_taken_0x134778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134778) {
            ctx->pc = 0x13477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134778u;
            // 0x13477c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1348A4u;
            return;
        }
    }
    ctx->pc = 0x134780u;
label_134780:
    // 0x134780: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_134784:
    if (ctx->pc == 0x134784u) {
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134788u;
        goto label_134788;
    }
    ctx->pc = 0x134780u;
    {
        const bool branch_taken_0x134780 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134780) {
            ctx->pc = 0x1347C0u;
            return;
        }
    }
    ctx->pc = 0x134788u;
label_134788:
    // 0x134788: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13478c:
    // 0x13478c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134790:
    // 0x134790: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_134794:
    // 0x134794: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x134794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_134798:
    // 0x134798: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x134798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_13479c:
    // 0x13479c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1347a0:
    if (ctx->pc == 0x1347A0u) {
        ctx->pc = 0x1347A4u;
        goto label_1347a4;
    }
    ctx->pc = 0x13479Cu;
    {
        const bool branch_taken_0x13479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13479c) {
            ctx->pc = 0x1347ACu;
            return;
        }
    }
    ctx->pc = 0x1347A4u;
label_1347a4:
    // 0x1347a4: 0xc061920  jal         func_186480
label_1347a8:
    if (ctx->pc == 0x1347A8u) {
        ctx->pc = 0x1347ACu;
        goto label_fallthrough_0x1347a4;
    }
    ctx->pc = 0x1347A4u;
    SET_GPR_U32(ctx, 31, 0x1347ACu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1347A4u, 0x1347ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1347a4:
    ctx->pc = 0x1347ACu;
}
