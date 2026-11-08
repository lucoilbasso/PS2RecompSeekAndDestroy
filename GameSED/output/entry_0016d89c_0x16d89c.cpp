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

// Function: entry_0016d89c
// Address: 0x16d89c - 0x16d8c8
void entry_0016d89c_0x16d89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d89c_0x16d89c");
#endif

    switch (ctx->pc) {
        case 0x16d8b4u: goto label_16d8b4;
        default: break;
    }

    ctx->pc = 0x16d89cu;

    // 0x16d89c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x16d8a0: 0x240400b1  addiu       $a0, $zero, 0xB1
    ctx->pc = 0x16d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x16d8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8ac: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x16D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8ACu;
    // 0x16d8b0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x16D8ACu, 0x16D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16d8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D8B8u;
    {
        const bool branch_taken_0x16d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B8u;
        // 0x16d8bc: 0xae0302dc  sw          $v1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8b8) {
            ctx->pc = 0x16D8C8u;
            return;
        }
    }
    ctx->pc = 0x16D8C0u;
    // 0x16d8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d8c4: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x16d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x16d8c8u;
}
