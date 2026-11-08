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

// Function: entry_00192eb4
// Address: 0x192eb4 - 0x192ee8
void entry_00192eb4_0x192eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192eb4_0x192eb4");
#endif

    ctx->pc = 0x192eb4u;

    // 0x192eb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x192eb8: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192ebc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192ec0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x192ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x192ec4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192ec8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192ecc: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x192ed0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192ED0u;
    {
        const bool branch_taken_0x192ed0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ED0u;
        // 0x192ed4: 0xc7a000d4  lwc1        $f0, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ed0) {
            ctx->pc = 0x192EE8u;
            return;
        }
    }
    ctx->pc = 0x192ED8u;
    // 0x192ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192edc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192ee0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192EE0u;
    {
        const bool branch_taken_0x192ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192EE0u;
        // 0x192ee4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ee0) {
            ctx->pc = 0x192F04u;
            return;
        }
    }
    ctx->pc = 0x192EE8u;
}
