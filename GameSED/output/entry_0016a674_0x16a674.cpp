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

// Function: entry_0016a674
// Address: 0x16a674 - 0x16a6a0
void entry_0016a674_0x16a674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a674_0x16a674");
#endif

    switch (ctx->pc) {
        case 0x16a680u: goto label_16a680;
        default: break;
    }

    ctx->pc = 0x16a674u;

    // 0x16a674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a678: 0xc05a900  jal         func_16A400
    ctx->pc = 0x16A678u;
    SET_GPR_U32(ctx, 31, 0x16A680u);
    ctx->pc = 0x16A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A678u;
    // 0x16a67c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A678u, 0x16A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A680u;
label_16a680:
    // 0x16a680: 0x8e240c9c  lw          $a0, 0xC9C($s1)
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3228)));
    // 0x16a684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a688: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A688u;
    {
        const bool branch_taken_0x16a688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A688u;
        // 0x16a68c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a688) {
            ctx->pc = 0x16A6A0u;
            return;
        }
    }
    ctx->pc = 0x16A690u;
    // 0x16a690: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x16a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A694u;
    {
        const bool branch_taken_0x16a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A694u;
        // 0x16a698: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a694) {
            ctx->pc = 0x16A6A4u;
            return;
        }
    }
    ctx->pc = 0x16A69Cu;
    // 0x16a69c: 0x0  nop
    ctx->pc = 0x16a69cu;
    // NOP
    ctx->pc = 0x16a6a0u;
}
