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

// Function: entry_0018397c
// Address: 0x18397c - 0x1839c0
void entry_0018397c_0x18397c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018397c_0x18397c");
#endif

    switch (ctx->pc) {
        case 0x1839acu: goto label_1839ac;
        default: break;
    }

    ctx->pc = 0x18397cu;

    // 0x18397c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x18397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x183980: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183984: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x183984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x183988: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18398c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x183990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183994: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x183994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183998: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183998u;
    {
        const bool branch_taken_0x183998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183998u;
        // 0x18399c: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183998) {
            ctx->pc = 0x1839C0u;
            return;
        }
    }
    ctx->pc = 0x1839A0u;
    // 0x1839a0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1839a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1839a4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1839A4u;
    SET_GPR_U32(ctx, 31, 0x1839ACu);
    ctx->pc = 0x1839A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839A4u;
    // 0x1839a8: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1839A4u, 0x1839ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839ACu;
label_1839ac:
    // 0x1839ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1839acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1839b0: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x1839b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x1839b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1839b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839b8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1839B8u;
    SET_GPR_U32(ctx, 31, 0x1839C0u);
    ctx->pc = 0x1839BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839B8u;
    // 0x1839bc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1839B8u, 0x1839C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839C0u;
}
