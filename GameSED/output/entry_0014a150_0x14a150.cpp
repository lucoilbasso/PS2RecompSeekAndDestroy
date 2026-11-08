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

// Function: entry_0014a150
// Address: 0x14a150 - 0x14a19c
void entry_0014a150_0x14a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a150_0x14a150");
#endif

    ctx->pc = 0x14a150u;

    // 0x14a150: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14a154: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a158: 0xe20018  mult        $zero, $a3, $v0
    ctx->pc = 0x14a158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14a15c: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x14a15cu;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14a160: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14a160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x14a164: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x14a164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a168: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a16c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14a170: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x14a170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x14a174: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a17c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14a17cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a184: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14a184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a188: 0x23940  sll         $a3, $v0, 5
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14a18c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14a190: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A190u;
    {
        const bool branch_taken_0x14a190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A190u;
        // 0x14a194: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a190) {
            ctx->pc = 0x14A19Cu;
            return;
        }
    }
    ctx->pc = 0x14A198u;
    // 0x14a198: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x14a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x14a19cu;
}
