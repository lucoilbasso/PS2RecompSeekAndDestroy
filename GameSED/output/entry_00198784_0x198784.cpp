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

// Function: entry_00198784
// Address: 0x198784 - 0x1987ac
void entry_00198784_0x198784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198784_0x198784");
#endif

    ctx->pc = 0x198784u;

    // 0x198784: 0xae0303d4  sw          $v1, 0x3D4($s0)
    ctx->pc = 0x198784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 3));
    // 0x198788: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19878c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19878Cu;
    {
        const bool branch_taken_0x19878c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19878Cu;
        // 0x198790: 0xfe020220  sd          $v0, 0x220($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19878c) {
            ctx->pc = 0x1987ACu;
            return;
        }
    }
    ctx->pc = 0x198794u;
    // 0x198794: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x198794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198798: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x198798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x19879c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1987a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1987a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1987a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1987a8: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x1987a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    ctx->pc = 0x1987acu;
}
