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

// Function: entry_0010e98c
// Address: 0x10e98c - 0x10e9b8
void entry_0010e98c_0x10e98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e98c_0x10e98c");
#endif

    switch (ctx->pc) {
        case 0x10e994u: goto label_10e994;
        case 0x10e9b4u: goto label_10e9b4;
        default: break;
    }

    ctx->pc = 0x10e98cu;

    // 0x10e98c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10E98Cu;
    SET_GPR_U32(ctx, 31, 0x10E994u);
    ctx->pc = 0x10E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E98Cu;
    // 0x10e990: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10E98Cu, 0x10E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E994u;
label_10e994:
    // 0x10e994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e998: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E998u;
    {
        const bool branch_taken_0x10e998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e998) {
            ctx->pc = 0x10E99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E998u;
            // 0x10e99c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9B8u;
            return;
        }
    }
    ctx->pc = 0x10E9A0u;
    // 0x10e9a0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9a8: 0x24a53da0  addiu       $a1, $a1, 0x3DA0
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15776));
    // 0x10e9ac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10E9ACu;
    SET_GPR_U32(ctx, 31, 0x10E9B4u);
    ctx->pc = 0x10E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9ACu;
    // 0x10e9b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10E9ACu, 0x10E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E9B4u;
label_10e9b4:
    // 0x10e9b4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10e9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x10e9b8u;
}
