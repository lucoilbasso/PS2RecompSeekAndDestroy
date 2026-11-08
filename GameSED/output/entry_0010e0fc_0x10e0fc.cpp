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

// Function: entry_0010e0fc
// Address: 0x10e0fc - 0x10e168
void entry_0010e0fc_0x10e0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0fc_0x10e0fc");
#endif

    switch (ctx->pc) {
        case 0x10e124u: goto label_10e124;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e134u: goto label_10e134;
        case 0x10e150u: goto label_10e150;
        case 0x10e15cu: goto label_10e15c;
        default: break;
    }

    ctx->pc = 0x10e0fcu;

    // 0x10e0fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e10c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x10e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x10e110: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10e110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10e114: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10E114u;
    {
        const bool branch_taken_0x10e114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E114u;
        // 0x10e118: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e114) {
            ctx->pc = 0x10E168u;
            return;
        }
    }
    ctx->pc = 0x10E11Cu;
    // 0x10e11c: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x10E11Cu;
    SET_GPR_U32(ctx, 31, 0x10E124u);
    ctx->pc = 0x10E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E11Cu;
    // 0x10e120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x10E11Cu, 0x10E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E124u;
label_10e124:
    // 0x10e124: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10E124u;
    SET_GPR_U32(ctx, 31, 0x10E12Cu);
    ctx->pc = 0x10E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E124u;
    // 0x10e128: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10E124u, 0x10E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E12Cu;
label_10e12c:
    // 0x10e12c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10E12Cu;
    SET_GPR_U32(ctx, 31, 0x10E134u);
    ctx->pc = 0x10E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E12Cu;
    // 0x10e130: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10E12Cu, 0x10E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E134u;
label_10e134:
    // 0x10e134: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e13c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10e140: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x10e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x10e144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e148: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x10E148u;
    SET_GPR_U32(ctx, 31, 0x10E150u);
    ctx->pc = 0x10E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E148u;
    // 0x10e14c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x10E148u, 0x10E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E150u;
label_10e150:
    // 0x10e150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e154: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10E154u;
    SET_GPR_U32(ctx, 31, 0x10E15Cu);
    ctx->pc = 0x10E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E154u;
    // 0x10e158: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10E154u, 0x10E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E15Cu;
label_10e15c:
    // 0x10e15c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x10e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x10e160: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x10E160u;
    SET_GPR_U32(ctx, 31, 0x10E168u);
    ctx->pc = 0x10E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E160u;
    // 0x10e164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x10E160u, 0x10E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E168u;
}
