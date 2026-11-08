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

// Function: entry_0013d790
// Address: 0x13d790 - 0x13d7c8
void entry_0013d790_0x13d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d790_0x13d790");
#endif

    switch (ctx->pc) {
        case 0x13d798u: goto label_13d798;
        default: break;
    }

    ctx->pc = 0x13d790u;

label_13d790:
    // 0x13d790: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13D790u;
    SET_GPR_U32(ctx, 31, 0x13D798u);
    ctx->pc = 0x13D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D790u;
    // 0x13d794: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13D790u, 0x13D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D798u;
label_13d798:
    // 0x13d798: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13d79c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D79Cu;
        // 0x13d7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d790;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d7a8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D7A8u;
    {
        const bool branch_taken_0x13d7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A8u;
        // 0x13d7ac: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7a8) {
            ctx->pc = 0x13D7C8u;
            return;
        }
    }
    ctx->pc = 0x13D7B0u;
    // 0x13d7b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d7b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d7b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d7bc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x13d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13d7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D7C0u;
    {
        const bool branch_taken_0x13d7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7C0u;
        // 0x13d7c4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7c0) {
            ctx->pc = 0x13D7D0u;
            return;
        }
    }
    ctx->pc = 0x13D7C8u;
}
