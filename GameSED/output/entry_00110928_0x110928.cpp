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

// Function: entry_00110928
// Address: 0x110928 - 0x110958
void entry_00110928_0x110928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110928_0x110928");
#endif

    switch (ctx->pc) {
        case 0x11093cu: goto label_11093c;
        default: break;
    }

    ctx->pc = 0x110928u;

    // 0x110928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11092c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11092cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110930: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x110930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110934: 0xc04110c  jal         func_104430
    ctx->pc = 0x110934u;
    SET_GPR_U32(ctx, 31, 0x11093Cu);
    ctx->pc = 0x110938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110934u;
    // 0x110938: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x110934u, 0x11093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11093Cu;
label_11093c:
    // 0x11093c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x110940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110944: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x110944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x110948: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x110948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x11094c: 0x94460012  lhu         $a2, 0x12($v0)
    ctx->pc = 0x11094cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x110950: 0xc043e2e  jal         func_10F8B8
    ctx->pc = 0x110950u;
    SET_GPR_U32(ctx, 31, 0x110958u);
    ctx->pc = 0x110954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110950u;
    // 0x110954: 0x94450010  lhu         $a1, 0x10($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8B8u, 0x110950u, 0x110958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110958u;
}
