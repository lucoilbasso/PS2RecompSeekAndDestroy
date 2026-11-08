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

// Function: entry_001508ec
// Address: 0x1508ec - 0x150910
void entry_001508ec_0x1508ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001508ec_0x1508ec");
#endif

    ctx->pc = 0x1508ecu;

    // 0x1508ec: 0x6a1024  and         $v0, $v1, $t2
    ctx->pc = 0x1508ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1508f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1508F0u;
    {
        const bool branch_taken_0x1508f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1508F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508F0u;
        // 0x1508f4: 0x691024  and         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508f0) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x1508F8u;
    // 0x1508f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1508F8u;
    {
        const bool branch_taken_0x1508f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1508f8) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x150900u;
    // 0x150900: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x150900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150904: 0x46050040  add.s       $f1, $f0, $f5
    ctx->pc = 0x150904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x150908: 0x46060502  mul.s       $f20, $f0, $f6
    ctx->pc = 0x150908u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15090c: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x15090cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    ctx->pc = 0x150910u;
}
