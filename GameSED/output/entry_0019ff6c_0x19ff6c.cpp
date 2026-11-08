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

// Function: entry_0019ff6c
// Address: 0x19ff6c - 0x19ff8c
void entry_0019ff6c_0x19ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ff6c_0x19ff6c");
#endif

    switch (ctx->pc) {
        case 0x19ff84u: goto label_19ff84;
        default: break;
    }

    ctx->pc = 0x19ff6cu;

    // 0x19ff6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ff74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff78: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x19ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x19ff7c: 0xc067ff4  jal         func_19FFD0
    ctx->pc = 0x19FF7Cu;
    SET_GPR_U32(ctx, 31, 0x19FF84u);
    ctx->pc = 0x19FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF7Cu;
    // 0x19ff80: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFD0u, 0x19FF7Cu, 0x19FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF84u;
label_19ff84:
    // 0x19ff84: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x19ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x19ff88: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x19ff8cu;
}
