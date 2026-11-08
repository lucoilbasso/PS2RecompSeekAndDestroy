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

// Function: entry_0018d67c
// Address: 0x18d67c - 0x18d690
void entry_0018d67c_0x18d67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d67c_0x18d67c");
#endif

    ctx->pc = 0x18d67cu;

    // 0x18d67c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d684: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d688: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18d68c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x18d68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x18d690u;
}
