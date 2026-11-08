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

// Function: entry_001038b4
// Address: 0x1038b4 - 0x1038f0
void entry_001038b4_0x1038b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001038b4_0x1038b4");
#endif

    switch (ctx->pc) {
        case 0x1038c8u: goto label_1038c8;
        default: break;
    }

    ctx->pc = 0x1038b4u;

    // 0x1038b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1038b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1038b8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1038B8u;
    {
        const bool branch_taken_0x1038b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038b8) {
            ctx->pc = 0x1038BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1038B8u;
            // 0x1038bc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1039C8u;
            return;
        }
    }
    ctx->pc = 0x1038C0u;
    // 0x1038c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1038C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038C0u;
    // 0x1038c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1038C0u, 0x1038C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038C8u;
label_1038c8:
    // 0x1038c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1038c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1038cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1038ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1038d4: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x1038d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
    // 0x1038d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1038D8u;
    {
        const bool branch_taken_0x1038d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1038d8) {
            ctx->pc = 0x1038F0u;
            return;
        }
    }
    ctx->pc = 0x1038E0u;
    // 0x1038e0: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1038e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1038E4u;
    {
        const bool branch_taken_0x1038e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038E4u;
        // 0x1038e8: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038e4) {
            ctx->pc = 0x1039E4u;
            return;
        }
    }
    ctx->pc = 0x1038ECu;
    // 0x1038ec: 0x0  nop
    ctx->pc = 0x1038ecu;
    // NOP
    ctx->pc = 0x1038f0u;
}
