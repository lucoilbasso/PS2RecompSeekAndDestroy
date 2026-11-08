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

// Function: entry_00178454
// Address: 0x178454 - 0x178484
void entry_00178454_0x178454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178454_0x178454");
#endif

    switch (ctx->pc) {
        case 0x178464u: goto label_178464;
        case 0x17846cu: goto label_17846c;
        default: break;
    }

    ctx->pc = 0x178454u;

    // 0x178454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178458: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17845c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17845Cu;
    SET_GPR_U32(ctx, 31, 0x178464u);
    ctx->pc = 0x178460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17845Cu;
    // 0x178460: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17845Cu, 0x178464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178464u;
label_178464:
    // 0x178464: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x178464u;
    SET_GPR_U32(ctx, 31, 0x17846Cu);
    ctx->pc = 0x178468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178464u;
    // 0x178468: 0x24041b90  addiu       $a0, $zero, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x178464u, 0x17846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17846Cu;
label_17846c:
    // 0x17846c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17846cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178470: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x178474: 0x2442f9a8  addiu       $v0, $v0, -0x658
    ctx->pc = 0x178474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965672));
    // 0x178478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17847c: 0xc05e12a  jal         func_1784A8
    ctx->pc = 0x17847Cu;
    SET_GPR_U32(ctx, 31, 0x178484u);
    ctx->pc = 0x178480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17847Cu;
    // 0x178480: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A8u, 0x17847Cu, 0x178484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178484u;
}
