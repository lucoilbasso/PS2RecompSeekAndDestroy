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

// Function: entry_00175150
// Address: 0x175150 - 0x175180
void entry_00175150_0x175150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175150_0x175150");
#endif

    switch (ctx->pc) {
        case 0x17517cu: goto label_17517c;
        default: break;
    }

    ctx->pc = 0x175150u;

    // 0x175150: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x175150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175158: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x175158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x17515c: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x17515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x175160: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x175160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x175164: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x175164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x175168: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x175168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x17516c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x17516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x175170: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x175170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x175174: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x175174u;
    SET_GPR_U32(ctx, 31, 0x17517Cu);
    ctx->pc = 0x175178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175174u;
    // 0x175178: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x175174u, 0x17517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17517Cu;
label_17517c:
    // 0x17517c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x17517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x175180u;
}
