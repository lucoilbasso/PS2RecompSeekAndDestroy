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

// Function: entry_00186210
// Address: 0x186210 - 0x186238
void entry_00186210_0x186210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186210_0x186210");
#endif

    switch (ctx->pc) {
        case 0x186220u: goto label_186220;
        default: break;
    }

    ctx->pc = 0x186210u;

    // 0x186210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186214: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x186214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x186218: 0xc0618c2  jal         func_186308
    ctx->pc = 0x186218u;
    SET_GPR_U32(ctx, 31, 0x186220u);
    ctx->pc = 0x18621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186218u;
    // 0x18621c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x186218u, 0x186220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186220u;
label_186220:
    // 0x186220: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x186220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x186224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186228: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x186228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x18622c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x18622cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x186230: 0xc061920  jal         func_186480
    ctx->pc = 0x186230u;
    SET_GPR_U32(ctx, 31, 0x186238u);
    ctx->pc = 0x186234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186230u;
    // 0x186234: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x186230u, 0x186238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186238u;
}
