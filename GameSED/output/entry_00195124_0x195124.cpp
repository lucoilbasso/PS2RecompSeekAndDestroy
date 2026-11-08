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

// Function: entry_00195124
// Address: 0x195124 - 0x195154
void entry_00195124_0x195124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195124_0x195124");
#endif

    switch (ctx->pc) {
        case 0x195134u: goto label_195134;
        case 0x19513cu: goto label_19513c;
        default: break;
    }

    ctx->pc = 0x195124u;

    // 0x195124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195128: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x195128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19512c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x19512Cu;
    SET_GPR_U32(ctx, 31, 0x195134u);
    ctx->pc = 0x195130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19512Cu;
    // 0x195130: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x19512Cu, 0x195134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195134u;
label_195134:
    // 0x195134: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x195134u;
    SET_GPR_U32(ctx, 31, 0x19513Cu);
    ctx->pc = 0x195138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195134u;
    // 0x195138: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x195134u, 0x19513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19513Cu;
label_19513c:
    // 0x19513c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195140: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x195144: 0x24420690  addiu       $v0, $v0, 0x690
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
    // 0x195148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19514c: 0xc064e54  jal         func_193950
    ctx->pc = 0x19514Cu;
    SET_GPR_U32(ctx, 31, 0x195154u);
    ctx->pc = 0x195150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19514Cu;
    // 0x195150: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x19514Cu, 0x195154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195154u;
}
