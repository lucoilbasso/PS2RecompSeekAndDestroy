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

// Function: entry_001930ec
// Address: 0x1930ec - 0x193120
void entry_001930ec_0x1930ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930ec_0x1930ec");
#endif

    ctx->pc = 0x1930ecu;

    // 0x1930ec: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1930ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1930f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1930f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1930f4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1930f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1930f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1930f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1930fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1930fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x193100: 0x8e62023c  lw          $v0, 0x23C($s3)
    ctx->pc = 0x193100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 572)));
    // 0x193104: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193104u;
    {
        const bool branch_taken_0x193104 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x193108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193104u;
        // 0x193108: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193104) {
            ctx->pc = 0x193120u;
            return;
        }
    }
    ctx->pc = 0x19310Cu;
    // 0x19310c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19310cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193110: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193114u;
    {
        const bool branch_taken_0x193114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193114u;
        // 0x193118: 0xc6600194  lwc1        $f0, 0x194($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193114) {
            ctx->pc = 0x193138u;
            return;
        }
    }
    ctx->pc = 0x19311Cu;
    // 0x19311c: 0x0  nop
    ctx->pc = 0x19311cu;
    // NOP
    ctx->pc = 0x193120u;
}
