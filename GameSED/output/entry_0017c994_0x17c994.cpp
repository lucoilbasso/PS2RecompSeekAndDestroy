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

// Function: entry_0017c994
// Address: 0x17c994 - 0x17c9bc
void entry_0017c994_0x17c994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c994_0x17c994");
#endif

    switch (ctx->pc) {
        case 0x17c9b8u: goto label_17c9b8;
        default: break;
    }

    ctx->pc = 0x17c994u;

    // 0x17c994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c99c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C9A8u;
    {
        const bool branch_taken_0x17c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9A8u;
        // 0x17c9ac: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9a8) {
            ctx->pc = 0x17C9BCu;
            return;
        }
    }
    ctx->pc = 0x17C9B0u;
    // 0x17c9b0: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17C9B0u;
    SET_GPR_U32(ctx, 31, 0x17C9B8u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17C9B0u, 0x17C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9B8u;
label_17c9b8:
    // 0x17c9b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17c9bcu;
}
