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

// Function: entry_001b6b04
// Address: 0x1b6b04 - 0x1b6b28
void entry_001b6b04_0x1b6b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b04_0x1b6b04");
#endif

    switch (ctx->pc) {
        case 0x1b6b0cu: goto label_1b6b0c;
        case 0x1b6b14u: goto label_1b6b14;
        default: break;
    }

    ctx->pc = 0x1b6b04u;

    // 0x1b6b04: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1B6B04u;
    SET_GPR_U32(ctx, 31, 0x1B6B0Cu);
    ctx->pc = 0x1B6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B04u;
    // 0x1b6b08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1B6B04u, 0x1B6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B0Cu;
label_1b6b0c:
    // 0x1b6b0c: 0xc06c470  jal         func_1B11C0
    ctx->pc = 0x1B6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B14u);
    ctx->pc = 0x1B11C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B11C0u, 0x1B6B0Cu, 0x1B6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B14u;
label_1b6b14:
    // 0x1b6b14: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b6b14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6b18: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B4Cu;
            return;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1b6b24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1b6b28u;
}
