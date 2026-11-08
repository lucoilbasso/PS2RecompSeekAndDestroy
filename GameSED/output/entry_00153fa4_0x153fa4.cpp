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

// Function: entry_00153fa4
// Address: 0x153fa4 - 0x153ff4
void entry_00153fa4_0x153fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153fa4_0x153fa4");
#endif

    ctx->pc = 0x153fa4u;

    // 0x153fa4: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x153fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x153fa8: 0xe622085c  swc1        $f2, 0x85C($s1)
    ctx->pc = 0x153fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2140), bits); }
    // 0x153fac: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x153facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x153fb0: 0xc78182e4  lwc1        $f1, -0x7D1C($gp)
    ctx->pc = 0x153fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153fb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153fb8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x153fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153fc0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x153fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x153fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x153fc8: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
    // 0x153fcc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x153fd0: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x153fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153fd8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x153fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x153fdc: 0xe620085c  swc1        $f0, 0x85C($s1)
    ctx->pc = 0x153fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2140), bits); }
    // 0x153fe0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x153fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153fe4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x153fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x153fe8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x153FE8u;
    {
        const bool branch_taken_0x153fe8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x153FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE8u;
        // 0x153fec: 0xe6200860  swc1        $f0, 0x860($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fe8) {
            ctx->pc = 0x153FF4u;
            return;
        }
    }
    ctx->pc = 0x153FF0u;
    // 0x153ff0: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x153ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x153ff4u;
}
