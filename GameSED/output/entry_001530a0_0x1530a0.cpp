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

// Function: entry_001530a0
// Address: 0x1530a0 - 0x1530d0
void entry_001530a0_0x1530a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001530a0_0x1530a0");
#endif

    switch (ctx->pc) {
        case 0x1530bcu: goto label_1530bc;
        default: break;
    }

    ctx->pc = 0x1530a0u;

    // 0x1530a0: 0x2450018  mult        $zero, $s2, $a1
    ctx->pc = 0x1530a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1530a4: 0x70850000  madd        $zero, $a0, $a1
    ctx->pc = 0x1530a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1530a8: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1530a8u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1530ac: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1530acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x1530b0: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1530b4: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x1530B4u;
    SET_GPR_U32(ctx, 31, 0x1530BCu);
    ctx->pc = 0x1530B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530B4u;
    // 0x1530b8: 0x2624037c  addiu       $a0, $s1, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x1530B4u, 0x1530BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530BCu;
label_1530bc:
    // 0x1530bc: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1530bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1530c0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1530c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1530c4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1530C4u;
    {
        const bool branch_taken_0x1530c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1530c4) {
            ctx->pc = 0x1530C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1530C4u;
            // 0x1530c8: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1530D0u;
            return;
        }
    }
    ctx->pc = 0x1530CCu;
    // 0x1530cc: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
    ctx->pc = 0x1530d0u;
}
