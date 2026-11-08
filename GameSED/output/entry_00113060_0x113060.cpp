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

// Function: entry_00113060
// Address: 0x113060 - 0x113238
void entry_00113060_0x113060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113060_0x113060");
#endif

    switch (ctx->pc) {
        case 0x113088u: goto label_113088;
        case 0x1130a8u: goto label_1130a8;
        case 0x1130c8u: goto label_1130c8;
        case 0x1130e8u: goto label_1130e8;
        case 0x113108u: goto label_113108;
        case 0x113110u: goto label_113110;
        case 0x113118u: goto label_113118;
        case 0x113138u: goto label_113138;
        case 0x113158u: goto label_113158;
        case 0x113178u: goto label_113178;
        case 0x113198u: goto label_113198;
        case 0x1131b8u: goto label_1131b8;
        case 0x1131d8u: goto label_1131d8;
        case 0x1131f8u: goto label_1131f8;
        case 0x113218u: goto label_113218;
        default: break;
    }

    ctx->pc = 0x113060u;

label_113060:
    // 0x113060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_113064:
    // 0x113064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113068:
    // 0x113068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x113068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_11306c:
    // 0x11306c: 0x8e060390  lw          $a2, 0x390($s0)
    ctx->pc = 0x11306cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_113070:
    // 0x113070: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113074:
    // 0x113074: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113078:
    // 0x113078: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11307c:
    // 0x11307c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113080:
    // 0x113080: 0x60f809  jalr        $v1
label_113084:
    if (ctx->pc == 0x113084u) {
        ctx->pc = 0x113084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113080u;
        // 0x113084: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113088u;
        goto label_113088;
    }
    ctx->pc = 0x113080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113088u);
        ctx->pc = 0x113084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113080u;
        // 0x113084: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113080u, 0x113088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113088u;
label_113088:
    // 0x113088: 0x8e06038c  lw          $a2, 0x38C($s0)
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_11308c:
    // 0x11308c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113090:
    // 0x113090: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113094:
    // 0x113094: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113098:
    // 0x113098: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11309c:
    // 0x11309c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1130a0:
    // 0x1130a0: 0x60f809  jalr        $v1
label_1130a4:
    if (ctx->pc == 0x1130A4u) {
        ctx->pc = 0x1130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130A0u;
        // 0x1130a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130A8u;
        goto label_1130a8;
    }
    ctx->pc = 0x1130A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1130A8u);
        ctx->pc = 0x1130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130A0u;
        // 0x1130a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130A0u, 0x1130A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1130A8u;
label_1130a8:
    // 0x1130a8: 0x8e060398  lw          $a2, 0x398($s0)
    ctx->pc = 0x1130a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
label_1130ac:
    // 0x1130ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1130acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1130b0:
    // 0x1130b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1130b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1130b4:
    // 0x1130b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1130b8:
    // 0x1130b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1130b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1130bc:
    // 0x1130bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1130bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1130c0:
    // 0x1130c0: 0x60f809  jalr        $v1
label_1130c4:
    if (ctx->pc == 0x1130C4u) {
        ctx->pc = 0x1130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C0u;
        // 0x1130c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130C8u;
        goto label_1130c8;
    }
    ctx->pc = 0x1130C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1130C8u);
        ctx->pc = 0x1130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C0u;
        // 0x1130c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130C0u, 0x1130C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1130C8u;
label_1130c8:
    // 0x1130c8: 0x8e060394  lw          $a2, 0x394($s0)
    ctx->pc = 0x1130c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1130cc:
    // 0x1130cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1130ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1130d0:
    // 0x1130d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1130d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1130d4:
    // 0x1130d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1130d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1130d8:
    // 0x1130d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1130d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1130dc:
    // 0x1130dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1130dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1130e0:
    // 0x1130e0: 0x60f809  jalr        $v1
label_1130e4:
    if (ctx->pc == 0x1130E4u) {
        ctx->pc = 0x1130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E0u;
        // 0x1130e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130E8u;
        goto label_1130e8;
    }
    ctx->pc = 0x1130E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1130E8u);
        ctx->pc = 0x1130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E0u;
        // 0x1130e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130E0u, 0x1130E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1130E8u;
label_1130e8:
    // 0x1130e8: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1130e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1130ec:
    // 0x1130ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1130ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1130f0:
    // 0x1130f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1130f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1130f4:
    // 0x1130f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1130f8:
    // 0x1130f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1130f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1130fc:
    // 0x1130fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1130fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113100:
    // 0x113100: 0x60f809  jalr        $v1
label_113104:
    if (ctx->pc == 0x113104u) {
        ctx->pc = 0x113104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113100u;
        // 0x113104: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113108u;
        goto label_113108;
    }
    ctx->pc = 0x113100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113108u);
        ctx->pc = 0x113104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113100u;
        // 0x113104: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113100u, 0x113108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113108u;
label_113108:
    // 0x113108: 0xc05be58  jal         func_16F960
label_11310c:
    if (ctx->pc == 0x11310Cu) {
        ctx->pc = 0x113110u;
        goto label_113110;
    }
    ctx->pc = 0x113108u;
    SET_GPR_U32(ctx, 31, 0x113110u);
    ctx->pc = 0x16F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F960u, 0x113108u, 0x113110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113110u;
label_113110:
    // 0x113110: 0xc05be66  jal         func_16F998
label_113114:
    if (ctx->pc == 0x113114u) {
        ctx->pc = 0x113118u;
        goto label_113118;
    }
    ctx->pc = 0x113110u;
    SET_GPR_U32(ctx, 31, 0x113118u);
    ctx->pc = 0x16F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F998u, 0x113110u, 0x113118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113118u;
label_113118:
    // 0x113118: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x113118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_11311c:
    // 0x11311c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113120:
    // 0x113120: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113124:
    // 0x113124: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113128:
    // 0x113128: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11312c:
    // 0x11312c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113130:
    // 0x113130: 0x60f809  jalr        $v1
label_113134:
    if (ctx->pc == 0x113134u) {
        ctx->pc = 0x113134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113130u;
        // 0x113134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113138u;
        goto label_113138;
    }
    ctx->pc = 0x113130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113138u);
        ctx->pc = 0x113134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113130u;
        // 0x113134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113130u, 0x113138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113138u;
label_113138:
    // 0x113138: 0x8e060374  lw          $a2, 0x374($s0)
    ctx->pc = 0x113138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
label_11313c:
    // 0x11313c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11313cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113140:
    // 0x113140: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113144:
    // 0x113144: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113148:
    // 0x113148: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11314c:
    // 0x11314c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113150:
    // 0x113150: 0x60f809  jalr        $v1
label_113154:
    if (ctx->pc == 0x113154u) {
        ctx->pc = 0x113154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113150u;
        // 0x113154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113158u;
        goto label_113158;
    }
    ctx->pc = 0x113150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113158u);
        ctx->pc = 0x113154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113150u;
        // 0x113154: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113150u, 0x113158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113158u;
label_113158:
    // 0x113158: 0x8e06016c  lw          $a2, 0x16C($s0)
    ctx->pc = 0x113158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
label_11315c:
    // 0x11315c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113160:
    // 0x113160: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113164:
    // 0x113164: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113168:
    // 0x113168: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11316c:
    // 0x11316c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113170:
    // 0x113170: 0x60f809  jalr        $v1
label_113174:
    if (ctx->pc == 0x113174u) {
        ctx->pc = 0x113174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113170u;
        // 0x113174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113178u;
        goto label_113178;
    }
    ctx->pc = 0x113170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113178u);
        ctx->pc = 0x113174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113170u;
        // 0x113174: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113170u, 0x113178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113178u;
label_113178:
    // 0x113178: 0x8e060170  lw          $a2, 0x170($s0)
    ctx->pc = 0x113178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_11317c:
    // 0x11317c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11317cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113180:
    // 0x113180: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113184:
    // 0x113184: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113188:
    // 0x113188: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113188u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11318c:
    // 0x11318c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113190:
    // 0x113190: 0x60f809  jalr        $v1
label_113194:
    if (ctx->pc == 0x113194u) {
        ctx->pc = 0x113194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113190u;
        // 0x113194: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113198u;
        goto label_113198;
    }
    ctx->pc = 0x113190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113198u);
        ctx->pc = 0x113194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113190u;
        // 0x113194: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113190u, 0x113198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113198u;
label_113198:
    // 0x113198: 0x8e060378  lw          $a2, 0x378($s0)
    ctx->pc = 0x113198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
label_11319c:
    // 0x11319c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11319cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1131a0:
    // 0x1131a0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1131a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1131a4:
    // 0x1131a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1131a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1131a8:
    // 0x1131a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1131a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1131ac:
    // 0x1131ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1131acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1131b0:
    // 0x1131b0: 0x60f809  jalr        $v1
label_1131b4:
    if (ctx->pc == 0x1131B4u) {
        ctx->pc = 0x1131B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B0u;
        // 0x1131b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131B8u;
        goto label_1131b8;
    }
    ctx->pc = 0x1131B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1131B8u);
        ctx->pc = 0x1131B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B0u;
        // 0x1131b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131B0u, 0x1131B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1131B8u;
label_1131b8:
    // 0x1131b8: 0x8e06037c  lw          $a2, 0x37C($s0)
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
label_1131bc:
    // 0x1131bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1131bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1131c0:
    // 0x1131c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1131c4:
    // 0x1131c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1131c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1131c8:
    // 0x1131c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1131cc:
    // 0x1131cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1131ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1131d0:
    // 0x1131d0: 0x60f809  jalr        $v1
label_1131d4:
    if (ctx->pc == 0x1131D4u) {
        ctx->pc = 0x1131D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131D0u;
        // 0x1131d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131D8u;
        goto label_1131d8;
    }
    ctx->pc = 0x1131D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1131D8u);
        ctx->pc = 0x1131D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131D0u;
        // 0x1131d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131D0u, 0x1131D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1131D8u;
label_1131d8:
    // 0x1131d8: 0x8e060380  lw          $a2, 0x380($s0)
    ctx->pc = 0x1131d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1131dc:
    // 0x1131dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1131dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1131e0:
    // 0x1131e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1131e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1131e4:
    // 0x1131e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1131e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1131e8:
    // 0x1131e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1131e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1131ec:
    // 0x1131ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1131ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1131f0:
    // 0x1131f0: 0x60f809  jalr        $v1
label_1131f4:
    if (ctx->pc == 0x1131F4u) {
        ctx->pc = 0x1131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F0u;
        // 0x1131f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131F8u;
        goto label_1131f8;
    }
    ctx->pc = 0x1131F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1131F8u);
        ctx->pc = 0x1131F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F0u;
        // 0x1131f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131F0u, 0x1131F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1131F8u;
label_1131f8:
    // 0x1131f8: 0x8e060384  lw          $a2, 0x384($s0)
    ctx->pc = 0x1131f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
label_1131fc:
    // 0x1131fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1131fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113200:
    // 0x113200: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113204:
    // 0x113204: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113208:
    // 0x113208: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11320c:
    // 0x11320c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113210:
    // 0x113210: 0x60f809  jalr        $v1
label_113214:
    if (ctx->pc == 0x113214u) {
        ctx->pc = 0x113214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113210u;
        // 0x113214: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113218u;
        goto label_113218;
    }
    ctx->pc = 0x113210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113218u);
        ctx->pc = 0x113214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113210u;
        // 0x113214: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113210u, 0x113218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113218u;
label_113218:
    // 0x113218: 0x8e060388  lw          $a2, 0x388($s0)
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_11321c:
    // 0x11321c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113220:
    // 0x113220: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_113224:
    // 0x113224: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113228:
    // 0x113228: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11322c:
    // 0x11322c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113230:
    // 0x113230: 0x60f809  jalr        $v1
label_113234:
    if (ctx->pc == 0x113234u) {
        ctx->pc = 0x113234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113230u;
        // 0x113234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113238u;
        goto label_fallthrough_0x113230;
    }
    ctx->pc = 0x113230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113238u);
        ctx->pc = 0x113234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113230u;
        // 0x113234: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113230u, 0x113238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x113230:
    ctx->pc = 0x113238u;
}
