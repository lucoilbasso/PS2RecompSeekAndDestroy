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

// Function: entry_001814cc
// Address: 0x1814cc - 0x1814fc
void entry_001814cc_0x1814cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001814cc_0x1814cc");
#endif

    switch (ctx->pc) {
        case 0x1814d8u: goto label_1814d8;
        default: break;
    }

    ctx->pc = 0x1814ccu;

    // 0x1814cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1814ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814d0: 0xc060216  jal         func_180858
    ctx->pc = 0x1814D0u;
    SET_GPR_U32(ctx, 31, 0x1814D8u);
    ctx->pc = 0x1814D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814D0u;
    // 0x1814d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180858u, 0x1814D0u, 0x1814D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814D8u;
label_1814d8:
    // 0x1814d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1814d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814dc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1814DCu;
    {
        const bool branch_taken_0x1814dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814DCu;
        // 0x1814e0: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814dc) {
            ctx->pc = 0x1814FCu;
            return;
        }
    }
    ctx->pc = 0x1814E4u;
    // 0x1814e4: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x1814e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1814ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1814f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1814f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1814f4: 0x8ca3dc08  lw          $v1, -0x23F8($a1)
    ctx->pc = 0x1814f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x26DC08u));
    // 0x1814f8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1814f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->pc = 0x1814fcu;
}
