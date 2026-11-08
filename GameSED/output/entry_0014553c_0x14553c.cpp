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

// Function: entry_0014553c
// Address: 0x14553c - 0x145554
void entry_0014553c_0x14553c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014553c_0x14553c");
#endif

    ctx->pc = 0x14553cu;

    // 0x14553c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x14553cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x145540: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x145540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145544: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x145544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x145548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14554c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x14554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x145550: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x145550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->pc = 0x145554u;
}
