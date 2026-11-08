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

// Function: entry_001714e8
// Address: 0x1714e8 - 0x171530
void entry_001714e8_0x1714e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001714e8_0x1714e8");
#endif

    switch (ctx->pc) {
        case 0x171500u: goto label_171500;
        case 0x171510u: goto label_171510;
        case 0x171524u: goto label_171524;
        default: break;
    }

    ctx->pc = 0x1714e8u;

    // 0x1714e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1714e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1714ec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1714ECu;
    {
        const bool branch_taken_0x1714ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714ECu;
        // 0x1714f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714ec) {
            ctx->pc = 0x171530u;
            return;
        }
    }
    ctx->pc = 0x1714F4u;
    // 0x1714f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1714f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714f8: 0xc05c560  jal         func_171580
    ctx->pc = 0x1714F8u;
    SET_GPR_U32(ctx, 31, 0x171500u);
    ctx->pc = 0x1714FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714F8u;
    // 0x1714fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x1714F8u, 0x171500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171500u;
label_171500:
    // 0x171500: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x171500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171504: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x171504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x171508: 0xc05c560  jal         func_171580
    ctx->pc = 0x171508u;
    SET_GPR_U32(ctx, 31, 0x171510u);
    ctx->pc = 0x17150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171508u;
    // 0x17150c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x171508u, 0x171510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171510u;
label_171510:
    // 0x171510: 0x2d22821  addu        $a1, $s6, $s2
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x171514: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171518: 0x2333023  subu        $a2, $s1, $s3
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x17151c: 0xc05c560  jal         func_171580
    ctx->pc = 0x17151Cu;
    SET_GPR_U32(ctx, 31, 0x171524u);
    ctx->pc = 0x171520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17151Cu;
    // 0x171520: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171580u, 0x17151Cu, 0x171524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171524u;
label_171524:
    // 0x171524: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171524u;
    {
        const bool branch_taken_0x171524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171524u;
        // 0x171528: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171524) {
            ctx->pc = 0x171550u;
            return;
        }
    }
    ctx->pc = 0x17152Cu;
    // 0x17152c: 0x0  nop
    ctx->pc = 0x17152cu;
    // NOP
    ctx->pc = 0x171530u;
}
