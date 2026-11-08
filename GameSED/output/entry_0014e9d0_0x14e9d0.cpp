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

// Function: entry_0014e9d0
// Address: 0x14e9d0 - 0x14e9ec
void entry_0014e9d0_0x14e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e9d0_0x14e9d0");
#endif

    ctx->pc = 0x14e9d0u;

    // 0x14e9d0: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x14e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x14e9d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E9D4u;
    {
        const bool branch_taken_0x14e9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9D4u;
        // 0x14e9d8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9d4) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E9DCu;
    // 0x14e9dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x14e9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e9e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x14e9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14e9e4: 0xc057b1c  jal         func_15EC70
    ctx->pc = 0x14E9E4u;
    SET_GPR_U32(ctx, 31, 0x14E9ECu);
    ctx->pc = 0x14E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E9E4u;
    // 0x14e9e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC70u, 0x14E9E4u, 0x14E9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9ECu;
}
