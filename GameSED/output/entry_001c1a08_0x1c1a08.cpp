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

// Function: entry_001c1a08
// Address: 0x1c1a08 - 0x1c1a34
void entry_001c1a08_0x1c1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a08_0x1c1a08");
#endif

    switch (ctx->pc) {
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a2cu: goto label_1c1a2c;
        default: break;
    }

    ctx->pc = 0x1c1a08u;

    // 0x1c1a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a14: 0xc0705da  jal         func_1C1768
    ctx->pc = 0x1C1A14u;
    SET_GPR_U32(ctx, 31, 0x1C1A1Cu);
    ctx->pc = 0x1C1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A14u;
    // 0x1c1a18: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1768u, 0x1C1A14u, 0x1C1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A1Cu;
label_1c1a1c:
    // 0x1c1a1c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A1Cu;
        // 0x1c1a20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1A34u;
            return;
        }
    }
    ctx->pc = 0x1C1A24u;
    // 0x1c1a24: 0xc0702c8  jal         func_1C0B20
    ctx->pc = 0x1C1A24u;
    SET_GPR_U32(ctx, 31, 0x1C1A2Cu);
    ctx->pc = 0x1C1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A24u;
    // 0x1c1a28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B20u, 0x1C1A24u, 0x1C1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A2Cu;
label_1c1a2c:
    // 0x1c1a2c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1c1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1c1a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c1a34u;
}
