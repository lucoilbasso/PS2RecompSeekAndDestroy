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

// Function: entry_001d4eec
// Address: 0x1d4eec - 0x1d4f20
void entry_001d4eec_0x1d4eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4eec_0x1d4eec");
#endif

    switch (ctx->pc) {
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f18u: goto label_1d4f18;
        default: break;
    }

    ctx->pc = 0x1d4eecu;

    // 0x1d4eec: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4EECu;
    {
        const bool branch_taken_0x1d4eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EECu;
        // 0x1d4ef0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4eec) {
            ctx->pc = 0x1D4F30u;
            return;
        }
    }
    ctx->pc = 0x1D4EF4u;
    // 0x1d4ef4: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1d4ef8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1D4EF8u;
    SET_GPR_U32(ctx, 31, 0x1D4F00u);
    ctx->pc = 0x1D4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EF8u;
    // 0x1d4efc: 0x2665c668  addiu       $a1, $s3, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1D4EF8u, 0x1D4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d4f04: 0x24a5c658  addiu       $a1, $a1, -0x39A8
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
    // 0x1d4f08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4F08u;
    {
        const bool branch_taken_0x1d4f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F08u;
        // 0x1d4f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f08) {
            ctx->pc = 0x1D4F20u;
            return;
        }
    }
    ctx->pc = 0x1D4F10u;
    // 0x1d4f10: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1D4F10u, 0x1D4F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4F18u;
    {
        const bool branch_taken_0x1d4f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F18u;
        // 0x1d4f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f18) {
            ctx->pc = 0x1D4F38u;
            return;
        }
    }
    ctx->pc = 0x1D4F20u;
}
