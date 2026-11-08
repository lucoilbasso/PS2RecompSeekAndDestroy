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

// Function: entry_0017f4b4
// Address: 0x17f4b4 - 0x17f4ec
void entry_0017f4b4_0x17f4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f4b4_0x17f4b4");
#endif

    switch (ctx->pc) {
        case 0x17f4bcu: goto label_17f4bc;
        case 0x17f4d8u: goto label_17f4d8;
        default: break;
    }

    ctx->pc = 0x17f4b4u;

    // 0x17f4b4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17F4B4u;
    SET_GPR_U32(ctx, 31, 0x17F4BCu);
    ctx->pc = 0x17F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4B4u;
    // 0x17f4b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17F4B4u, 0x17F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4BCu;
label_17f4bc:
    // 0x17f4bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17F4BCu;
    {
        const bool branch_taken_0x17f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4BCu;
        // 0x17f4c0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4bc) {
            ctx->pc = 0x17F4ECu;
            return;
        }
    }
    ctx->pc = 0x17F4C4u;
    // 0x17f4c4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17f4c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17f4cc: 0x24847d18  addiu       $a0, $a0, 0x7D18
    ctx->pc = 0x17f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32024));
    // 0x17f4d0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17F4D0u;
    SET_GPR_U32(ctx, 31, 0x17F4D8u);
    ctx->pc = 0x17F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4D0u;
    // 0x17f4d4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17F4D0u, 0x17F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4D8u;
label_17f4d8:
    // 0x17f4d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17f4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17f4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4e0: 0x24a57d38  addiu       $a1, $a1, 0x7D38
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32056));
    // 0x17f4e4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17F4E4u;
    SET_GPR_U32(ctx, 31, 0x17F4ECu);
    ctx->pc = 0x17F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4E4u;
    // 0x17f4e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17F4E4u, 0x17F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4ECu;
}
