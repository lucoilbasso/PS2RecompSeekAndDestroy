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

// Function: entry_001264d8
// Address: 0x1264d8 - 0x126540
void entry_001264d8_0x1264d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001264d8_0x1264d8");
#endif

    switch (ctx->pc) {
        case 0x1264e4u: goto label_1264e4;
        case 0x12652cu: goto label_12652c;
        default: break;
    }

    ctx->pc = 0x1264d8u;

    // 0x1264d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1264d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1264dc: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x1264DCu;
    SET_GPR_U32(ctx, 31, 0x1264E4u);
    ctx->pc = 0x1264E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264DCu;
    // 0x1264e0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x1264DCu, 0x1264E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264E4u;
label_1264e4:
    // 0x1264e4: 0x2a421324  slti        $v0, $s2, 0x1324
    ctx->pc = 0x1264e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x1264e8: 0x5440ffb3  bnel        $v0, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1264E8u;
    {
        const bool branch_taken_0x1264e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1264e8) {
            ctx->pc = 0x1264ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1264E8u;
            // 0x1264ec: 0x254001a  div         $zero, $s2, $s4 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1263B8u;
            return;
        }
    }
    ctx->pc = 0x1264F0u;
    // 0x1264f0: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1264f4: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1264f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1264f8: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x1264fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1264fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126500: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x126500u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x126504: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x126504u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x126508: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x126508u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x12650c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x12650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x126510: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x126510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x126514: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x126514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x126518: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x126518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12651c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126520: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x126520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126524: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x126524u;
    SET_GPR_U32(ctx, 31, 0x12652Cu);
    ctx->pc = 0x126528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126524u;
    // 0x126528: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x126524u, 0x12652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12652Cu;
label_12652c:
    // 0x12652c: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x12652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x126530: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x126530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126534: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x126534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x126538: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x126538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12653c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12653cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->pc = 0x126540u;
}
