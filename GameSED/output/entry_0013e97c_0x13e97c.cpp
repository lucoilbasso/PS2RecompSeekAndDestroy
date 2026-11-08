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

// Function: entry_0013e97c
// Address: 0x13e97c - 0x13e9ac
void entry_0013e97c_0x13e97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e97c_0x13e97c");
#endif

    switch (ctx->pc) {
        case 0x13e998u: goto label_13e998;
        default: break;
    }

    ctx->pc = 0x13e97cu;

    // 0x13e97c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x13e980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e984: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13E984u;
    {
        const bool branch_taken_0x13e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e984) {
            ctx->pc = 0x13E988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E984u;
            // 0x13e988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E9B0u;
            return;
        }
    }
    ctx->pc = 0x13E98Cu;
    // 0x13e98c: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x13e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x13e990: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x13E990u;
    SET_GPR_U32(ctx, 31, 0x13E998u);
    ctx->pc = 0x13E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E990u;
    // 0x13e994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13E990u, 0x13E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E998u;
label_13e998:
    // 0x13e998: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x13e99c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e9a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e9a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e9a8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x13e9acu;
}
