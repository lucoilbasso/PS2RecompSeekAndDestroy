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

// Function: entry_0010b950
// Address: 0x10b950 - 0x10b970
void entry_0010b950_0x10b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b950_0x10b950");
#endif

    ctx->pc = 0x10b950u;

    // 0x10b950: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B950u;
    {
        const bool branch_taken_0x10b950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B950u;
        // 0x10b954: 0xe4e00060  swc1        $f0, 0x60($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b950) {
            ctx->pc = 0x10B970u;
            return;
        }
    }
    ctx->pc = 0x10B958u;
    // 0x10b958: 0x94e20052  lhu         $v0, 0x52($a3)
    ctx->pc = 0x10b958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10b95c: 0xc4e1006c  lwc1        $f1, 0x6C($a3)
    ctx->pc = 0x10b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B968u;
    {
        const bool branch_taken_0x10b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B968u;
        // 0x10b96c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b968) {
            ctx->pc = 0x10B978u;
            return;
        }
    }
    ctx->pc = 0x10B970u;
}
