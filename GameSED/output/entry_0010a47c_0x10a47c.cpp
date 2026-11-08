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

// Function: entry_0010a47c
// Address: 0x10a47c - 0x10a4a8
void entry_0010a47c_0x10a47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a47c_0x10a47c");
#endif

    switch (ctx->pc) {
        case 0x10a48cu: goto label_10a48c;
        case 0x10a49cu: goto label_10a49c;
        default: break;
    }

    ctx->pc = 0x10a47cu;

    // 0x10a47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a480: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a484: 0xc06448c  jal         func_191230
    ctx->pc = 0x10A484u;
    SET_GPR_U32(ctx, 31, 0x10A48Cu);
    ctx->pc = 0x10A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A484u;
    // 0x10a488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x10A484u, 0x10A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A48Cu;
label_10a48c:
    // 0x10a48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a490: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a494: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10A494u;
    SET_GPR_U32(ctx, 31, 0x10A49Cu);
    ctx->pc = 0x10A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A494u;
    // 0x10a498: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10A494u, 0x10A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A49Cu;
label_10a49c:
    // 0x10a49c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10a49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a4a0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x10a4a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10a4a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10a4a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x10a4a8u;
}
