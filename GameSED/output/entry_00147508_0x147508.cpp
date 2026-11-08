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

// Function: entry_00147508
// Address: 0x147508 - 0x14755c
void entry_00147508_0x147508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147508_0x147508");
#endif

    ctx->pc = 0x147508u;

    // 0x147508: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x14750c: 0x29240003  slti        $a0, $t1, 0x3
    ctx->pc = 0x14750cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147510: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x147510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147514: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x147518: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x147518u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x14751c: 0xc500fffc  lwc1        $f0, -0x4($t0)
    ctx->pc = 0x14751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147520: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x147520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x147524: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x147524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147528: 0x246503e0  addiu       $a1, $v1, 0x3E0
    ctx->pc = 0x147528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 992));
    // 0x14752c: 0x246203b0  addiu       $v0, $v1, 0x3B0
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x147530: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x147534: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x147538: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14753c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x147540: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x147544: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x147544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x147548: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x14754c: 0x29260006  slti        $a2, $t1, 0x6
    ctx->pc = 0x14754cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x147550: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x147550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x147554: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x147558: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x147558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x14755cu;
}
