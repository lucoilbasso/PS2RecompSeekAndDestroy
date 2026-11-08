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

// Function: entry_001a5288
// Address: 0x1a5288 - 0x1a5298
void entry_001a5288_0x1a5288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5288_0x1a5288");
#endif

    ctx->pc = 0x1a5288u;

    // 0x1a5288: 0xa470001e  sh          $s0, 0x1E($v1)
    ctx->pc = 0x1a5288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 16));
    // 0x1a528c: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x1a528cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1a5290: 0xa4720018  sh          $s2, 0x18($v1)
    ctx->pc = 0x1a5290u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a5294: 0xa473001a  sh          $s3, 0x1A($v1)
    ctx->pc = 0x1a5294u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 19));
    ctx->pc = 0x1a5298u;
}
