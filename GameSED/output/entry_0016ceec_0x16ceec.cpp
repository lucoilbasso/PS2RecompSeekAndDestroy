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

// Function: entry_0016ceec
// Address: 0x16ceec - 0x16cefc
void entry_0016ceec_0x16ceec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ceec_0x16ceec");
#endif

    ctx->pc = 0x16ceecu;

    // 0x16ceec: 0xc6200284  lwc1        $f0, 0x284($s1)
    ctx->pc = 0x16ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cef0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x16cef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16cef4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16cef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16cef8: 0xe6200284  swc1        $f0, 0x284($s1)
    ctx->pc = 0x16cef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    ctx->pc = 0x16cefcu;
}
