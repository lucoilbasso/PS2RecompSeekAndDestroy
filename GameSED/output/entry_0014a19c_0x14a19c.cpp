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

// Function: entry_0014a19c
// Address: 0x14a19c - 0x14a1e4
void entry_0014a19c_0x14a19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a19c_0x14a19c");
#endif

    ctx->pc = 0x14a19cu;

    // 0x14a19c: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x14a19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a1a0: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a1a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a1a4: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a1a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14a1a8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x14a1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a1ac: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14a1b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a1b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a1b8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x14a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x14a1bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14a1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14a1d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a1d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14a1d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14a1d8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A1D8u;
    {
        const bool branch_taken_0x14a1d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1D8u;
        // 0x14a1dc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1d8) {
            ctx->pc = 0x14A1E4u;
            return;
        }
    }
    ctx->pc = 0x14A1E0u;
    // 0x14a1e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->pc = 0x14a1e4u;
}
