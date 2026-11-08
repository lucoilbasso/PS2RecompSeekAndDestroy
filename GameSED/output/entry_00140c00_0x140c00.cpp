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

// Function: entry_00140c00
// Address: 0x140c00 - 0x140c1c
void entry_00140c00_0x140c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c00_0x140c00");
#endif

    switch (ctx->pc) {
        case 0x140c0cu: goto label_140c0c;
        default: break;
    }

    ctx->pc = 0x140c00u;

    // 0x140c00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c04: 0xc0618c2  jal         func_186308
    ctx->pc = 0x140C04u;
    SET_GPR_U32(ctx, 31, 0x140C0Cu);
    ctx->pc = 0x140C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C04u;
    // 0x140c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x140C04u, 0x140C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C0Cu;
label_140c0c:
    // 0x140c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c10: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x140c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x140c14: 0xc0618da  jal         func_186368
    ctx->pc = 0x140C14u;
    SET_GPR_U32(ctx, 31, 0x140C1Cu);
    ctx->pc = 0x140C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C14u;
    // 0x140c18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x140C14u, 0x140C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C1Cu;
}
