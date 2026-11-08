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

// Function: entry_0017c604
// Address: 0x17c604 - 0x17c634
void entry_0017c604_0x17c604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c604_0x17c604");
#endif

    switch (ctx->pc) {
        case 0x17c614u: goto label_17c614;
        case 0x17c61cu: goto label_17c61c;
        default: break;
    }

    ctx->pc = 0x17c604u;

    // 0x17c604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c60c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17C60Cu;
    SET_GPR_U32(ctx, 31, 0x17C614u);
    ctx->pc = 0x17C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C60Cu;
    // 0x17c610: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17C60Cu, 0x17C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C614u;
label_17c614:
    // 0x17c614: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17C614u;
    SET_GPR_U32(ctx, 31, 0x17C61Cu);
    ctx->pc = 0x17C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C614u;
    // 0x17c618: 0x24040840  addiu       $a0, $zero, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17C614u, 0x17C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C61Cu;
label_17c61c:
    // 0x17c61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c620: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17c624: 0x2442fb40  addiu       $v0, $v0, -0x4C0
    ctx->pc = 0x17c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966080));
    // 0x17c628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c62c: 0xc05f196  jal         func_17C658
    ctx->pc = 0x17C62Cu;
    SET_GPR_U32(ctx, 31, 0x17C634u);
    ctx->pc = 0x17C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C62Cu;
    // 0x17c630: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C658u, 0x17C62Cu, 0x17C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C634u;
}
