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

// Function: entry_0010e9d4
// Address: 0x10e9d4 - 0x10e9fc
void entry_0010e9d4_0x10e9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e9d4_0x10e9d4");
#endif

    switch (ctx->pc) {
        case 0x10e9f4u: goto label_10e9f4;
        default: break;
    }

    ctx->pc = 0x10e9d4u;

    // 0x10e9d4: 0x8e6401ac  lw          $a0, 0x1AC($s3)
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x10e9d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e9dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E9DCu;
    {
        const bool branch_taken_0x10e9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9DCu;
        // 0x10e9e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9dc) {
            ctx->pc = 0x10EA00u;
            return;
        }
    }
    ctx->pc = 0x10E9E4u;
    // 0x10e9e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10e9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9ec: 0xc064fa6  jal         func_193E98
    ctx->pc = 0x10E9ECu;
    SET_GPR_U32(ctx, 31, 0x10E9F4u);
    ctx->pc = 0x10E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9ECu;
    // 0x10e9f0: 0x8ca60194  lw          $a2, 0x194($a1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193E98u, 0x10E9ECu, 0x10E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9F4u;
label_10e9f4:
    // 0x10e9f4: 0xc065530  jal         func_1954C0
    ctx->pc = 0x10E9F4u;
    SET_GPR_U32(ctx, 31, 0x10E9FCu);
    ctx->pc = 0x10E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9F4u;
    // 0x10e9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1954C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954C0u, 0x10E9F4u, 0x10E9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9FCu;
}
