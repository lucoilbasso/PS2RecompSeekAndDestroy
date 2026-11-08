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

// Function: entry_0012e25c
// Address: 0x12e25c - 0x12e27c
void entry_0012e25c_0x12e25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e25c_0x12e25c");
#endif

    switch (ctx->pc) {
        case 0x12e268u: goto label_12e268;
        default: break;
    }

    ctx->pc = 0x12e25cu;

    // 0x12e25c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e260: 0xc04844a  jal         func_121128
    ctx->pc = 0x12E260u;
    SET_GPR_U32(ctx, 31, 0x12E268u);
    ctx->pc = 0x12E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E260u;
    // 0x12e264: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12E260u, 0x12E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E268u;
label_12e268:
    // 0x12e268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e26c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E26Cu;
    {
        const bool branch_taken_0x12e26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E26Cu;
        // 0x12e270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e26c) {
            ctx->pc = 0x12E27Cu;
            return;
        }
    }
    ctx->pc = 0x12E274u;
    // 0x12e274: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e278: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x12e278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x12e27cu;
}
