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

// Function: entry_00140c48
// Address: 0x140c48 - 0x140c74
void entry_00140c48_0x140c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c48_0x140c48");
#endif

    switch (ctx->pc) {
        case 0x140c5cu: goto label_140c5c;
        default: break;
    }

    ctx->pc = 0x140c48u;

    // 0x140c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140c4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x140c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x140c50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x140c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x140c54: 0xc050292  jal         func_140A48
    ctx->pc = 0x140C54u;
    SET_GPR_U32(ctx, 31, 0x140C5Cu);
    ctx->pc = 0x140C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C54u;
    // 0x140c58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140A48u, 0x140C54u, 0x140C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C5Cu;
label_140c5c:
    // 0x140c5c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140C5Cu;
    {
        const bool branch_taken_0x140c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140C5Cu;
        // 0x140c60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140c5c) {
            ctx->pc = 0x140C74u;
            return;
        }
    }
    ctx->pc = 0x140C64u;
    // 0x140c64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x140c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140c68: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x140c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x140c6c: 0xc050a56  jal         func_142958
    ctx->pc = 0x140C6Cu;
    SET_GPR_U32(ctx, 31, 0x140C74u);
    ctx->pc = 0x140C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140C6Cu;
    // 0x140c70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x140C6Cu, 0x140C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140C74u;
}
