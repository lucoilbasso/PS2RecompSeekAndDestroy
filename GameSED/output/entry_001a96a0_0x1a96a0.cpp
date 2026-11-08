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

// Function: entry_001a96a0
// Address: 0x1a96a0 - 0x1a96d8
void entry_001a96a0_0x1a96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a96a0_0x1a96a0");
#endif

    switch (ctx->pc) {
        case 0x1a96bcu: goto label_1a96bc;
        default: break;
    }

    ctx->pc = 0x1a96a0u;

    // 0x1a96a0: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a96a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a96ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a96acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a96b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a96b4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A96B4u;
    SET_GPR_U32(ctx, 31, 0x1A96BCu);
    ctx->pc = 0x1A96B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A96B4u;
    // 0x1a96b8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A96B4u, 0x1A96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A96BCu;
label_1a96bc:
    // 0x1a96bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a96c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a96c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a96c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a96c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a96cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A96CCu;
    {
        const bool branch_taken_0x1a96cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96CCu;
        // 0x1a96d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96cc) {
            ctx->pc = 0x1A96F4u;
            return;
        }
    }
    ctx->pc = 0x1A96D4u;
    // 0x1a96d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x1a96d8u;
}
