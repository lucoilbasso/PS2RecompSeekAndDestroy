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

// Function: caseD_1a
// Address: 0x135a58 - 0x135a8c
void caseD_1a_0x135a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x135a58");
#endif

    switch (ctx->pc) {
        case 0x135a88u: goto label_135a88;
        default: break;
    }

    ctx->pc = 0x135a58u;

    // 0x135a58: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135a5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135a60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a64: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135A64u;
    {
        const bool branch_taken_0x135a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A64u;
        // 0x135a68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a64) {
            ctx->pc = 0x135A8Cu;
            return;
        }
    }
    ctx->pc = 0x135A6Cu;
    // 0x135a6c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x135a70: 0x26101120  addiu       $s0, $s0, 0x1120
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4384));
    // 0x135a74: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x135a74u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x261120u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x261120u, _value); } while (0);
    // 0x135a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a80: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x135A80u;
    SET_GPR_U32(ctx, 31, 0x135A88u);
    ctx->pc = 0x135A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A80u;
    // 0x135a84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x135A80u, 0x135A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A88u;
label_135a88:
    // 0x135a88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135a8cu;
}
