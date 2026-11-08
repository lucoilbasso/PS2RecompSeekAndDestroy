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

// Function: entry_001d41d4
// Address: 0x1d41d4 - 0x1d41f8
void entry_001d41d4_0x1d41d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41d4_0x1d41d4");
#endif

    switch (ctx->pc) {
        case 0x1d41dcu: goto label_1d41dc;
        default: break;
    }

    ctx->pc = 0x1d41d4u;

    // 0x1d41d4: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D41D4u;
    SET_GPR_U32(ctx, 31, 0x1D41DCu);
    ctx->pc = 0x1D41D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D41D4u;
    // 0x1d41d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D41D4u, 0x1D41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41DCu;
label_1d41dc:
    // 0x1d41dc: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1d41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d41e0: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d41e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1d41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d41e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d41ec: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d41f0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D41F0u;
    {
        const bool branch_taken_0x1d41f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d41f0) {
            ctx->pc = 0x1D41F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41F0u;
            // 0x1d41f4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D41F8u;
            return;
        }
    }
    ctx->pc = 0x1D41F8u;
}
