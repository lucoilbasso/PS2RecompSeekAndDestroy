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

// Function: entry_00192f04
// Address: 0x192f04 - 0x192f38
void entry_00192f04_0x192f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192f04_0x192f04");
#endif

    ctx->pc = 0x192f04u;

    // 0x192f04: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x192f08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192f0c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x192f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x192f10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192f14: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192f14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192f18: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x192f1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F1Cu;
    {
        const bool branch_taken_0x192f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F1Cu;
        // 0x192f20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f1c) {
            ctx->pc = 0x192F38u;
            return;
        }
    }
    ctx->pc = 0x192F24u;
    // 0x192f24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192f2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192F2Cu;
    {
        const bool branch_taken_0x192f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F2Cu;
        // 0x192f30: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f2c) {
            ctx->pc = 0x192F50u;
            return;
        }
    }
    ctx->pc = 0x192F34u;
    // 0x192f34: 0x0  nop
    ctx->pc = 0x192f34u;
    // NOP
    ctx->pc = 0x192f38u;
}
