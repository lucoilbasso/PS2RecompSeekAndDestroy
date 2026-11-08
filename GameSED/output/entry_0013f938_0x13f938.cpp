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

// Function: entry_0013f938
// Address: 0x13f938 - 0x13f954
void entry_0013f938_0x13f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f938_0x13f938");
#endif

    switch (ctx->pc) {
        case 0x13f944u: goto label_13f944;
        default: break;
    }

    ctx->pc = 0x13f938u;

    // 0x13f938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f93c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13F93Cu;
    SET_GPR_U32(ctx, 31, 0x13F944u);
    ctx->pc = 0x13F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F93Cu;
    // 0x13f940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13F93Cu, 0x13F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F944u;
label_13f944:
    // 0x13f944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f948: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x13f948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13f94c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13F94Cu;
    SET_GPR_U32(ctx, 31, 0x13F954u);
    ctx->pc = 0x13F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F94Cu;
    // 0x13f950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13F94Cu, 0x13F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F954u;
}
