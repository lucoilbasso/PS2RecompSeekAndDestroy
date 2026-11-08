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

// Function: entry_00161270
// Address: 0x161270 - 0x161298
void entry_00161270_0x161270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161270_0x161270");
#endif

    ctx->pc = 0x161270u;

    // 0x161270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161274: 0x26041a50  addiu       $a0, $s0, 0x1A50
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6736));
    // 0x161278: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x161278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x16127c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16127cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161280: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x161280u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x161284: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x161284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161288: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x161288u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x16128c: 0xe6001ac0  swc1        $f0, 0x1AC0($s0)
    ctx->pc = 0x16128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6848), bits); }
    // 0x161290: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x161290u;
    {
        const bool branch_taken_0x161290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161290u;
        // 0x161294: 0xe6011ac4  swc1        $f1, 0x1AC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161290) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x161298u;
}
