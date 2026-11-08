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

// Function: entry_0014cacc
// Address: 0x14cacc - 0x14caf4
void entry_0014cacc_0x14cacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cacc_0x14cacc");
#endif

    switch (ctx->pc) {
        case 0x14cad4u: goto label_14cad4;
        default: break;
    }

    ctx->pc = 0x14caccu;

    // 0x14cacc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14CACCu;
    SET_GPR_U32(ctx, 31, 0x14CAD4u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14CACCu, 0x14CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAD4u;
label_14cad4:
    // 0x14cad4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14cad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cadc: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14cae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cae4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CAE4u;
    {
        const bool branch_taken_0x14cae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAE4u;
        // 0x14cae8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cae4) {
            ctx->pc = 0x14CAF4u;
            return;
        }
    }
    ctx->pc = 0x14CAECu;
    // 0x14caec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14CAECu;
    SET_GPR_U32(ctx, 31, 0x14CAF4u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14CAECu, 0x14CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAF4u;
}
