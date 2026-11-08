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

// Function: entry_0017c9fc
// Address: 0x17c9fc - 0x17ca24
void entry_0017c9fc_0x17c9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c9fc_0x17c9fc");
#endif

    switch (ctx->pc) {
        case 0x17ca20u: goto label_17ca20;
        default: break;
    }

    ctx->pc = 0x17c9fcu;

    // 0x17c9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ca00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ca04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ca04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ca0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA10u;
    {
        const bool branch_taken_0x17ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA10u;
        // 0x17ca14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca10) {
            ctx->pc = 0x17CA24u;
            return;
        }
    }
    ctx->pc = 0x17CA18u;
    // 0x17ca18: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17CA18u;
    SET_GPR_U32(ctx, 31, 0x17CA20u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17CA18u, 0x17CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA20u;
label_17ca20:
    // 0x17ca20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ca20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ca24u;
}
