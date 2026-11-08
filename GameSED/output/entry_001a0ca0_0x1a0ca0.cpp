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

// Function: entry_001a0ca0
// Address: 0x1a0ca0 - 0x1a0ce4
void entry_001a0ca0_0x1a0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ca0_0x1a0ca0");
#endif

    switch (ctx->pc) {
        case 0x1a0cb8u: goto label_1a0cb8;
        case 0x1a0cc4u: goto label_1a0cc4;
        case 0x1a0cd4u: goto label_1a0cd4;
        default: break;
    }

    ctx->pc = 0x1a0ca0u;

    // 0x1a0ca0: 0x14530010  bne         $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0CA0u;
    {
        const bool branch_taken_0x1a0ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA0u;
        // 0x1a0ca4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca0) {
            ctx->pc = 0x1A0CE4u;
            return;
        }
    }
    ctx->pc = 0x1A0CA8u;
    // 0x1a0ca8: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0CA8u;
    {
        const bool branch_taken_0x1a0ca8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA8u;
        // 0x1a0cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ca8) {
            ctx->pc = 0x1A0D28u;
            return;
        }
    }
    ctx->pc = 0x1A0CB0u;
    // 0x1a0cb0: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x1A0CB0u;
    SET_GPR_U32(ctx, 31, 0x1A0CB8u);
    ctx->pc = 0x1A0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CB0u;
    // 0x1a0cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x1A0CB0u, 0x1A0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CB8u;
label_1a0cb8:
    // 0x1a0cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cbc: 0xc06852e  jal         func_1A14B8
    ctx->pc = 0x1A0CBCu;
    SET_GPR_U32(ctx, 31, 0x1A0CC4u);
    ctx->pc = 0x1A0CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CBCu;
    // 0x1a0cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14B8u, 0x1A0CBCu, 0x1A0CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CC4u;
label_1a0cc4:
    // 0x1a0cc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cc8: 0x26c48850  addiu       $a0, $s6, -0x77B0
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936656));
    // 0x1a0ccc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A0CCCu;
    SET_GPR_U32(ctx, 31, 0x1A0CD4u);
    ctx->pc = 0x1A0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CCCu;
    // 0x1a0cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A0CCCu, 0x1A0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CD4u;
label_1a0cd4:
    // 0x1a0cd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cd8: 0x26a58868  addiu       $a1, $s5, -0x7798
    ctx->pc = 0x1a0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936680));
    // 0x1a0cdc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0CDCu;
    SET_GPR_U32(ctx, 31, 0x1A0CE4u);
    ctx->pc = 0x1A0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CDCu;
    // 0x1a0ce0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0CDCu, 0x1A0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CE4u;
}
