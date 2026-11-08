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

// Function: caseD_c
// Address: 0x135150 - 0x135180
void caseD_c_0x135150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x135150");
#endif

    switch (ctx->pc) {
        case 0x135158u: goto label_135158;
        case 0x135178u: goto label_135178;
        default: break;
    }

    ctx->pc = 0x135150u;

    // 0x135150: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135150u;
    SET_GPR_U32(ctx, 31, 0x135158u);
    ctx->pc = 0x135154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135150u;
    // 0x135154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135150u, 0x135158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135158u;
label_135158:
    // 0x135158: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13515c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x13515cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x135160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135164: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13516c: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x13516cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x135170: 0xc0556c8  jal         func_155B20
    ctx->pc = 0x135170u;
    SET_GPR_U32(ctx, 31, 0x135178u);
    ctx->pc = 0x135174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135170u;
    // 0x135174: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B20u, 0x135170u, 0x135178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135178u;
label_135178:
    // 0x135178: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x135178u;
    {
        const bool branch_taken_0x135178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135178) {
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x135180u;
}
