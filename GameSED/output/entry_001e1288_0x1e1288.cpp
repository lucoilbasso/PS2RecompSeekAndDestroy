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

// Function: entry_001e1288
// Address: 0x1e1288 - 0x1e1294
void entry_001e1288_0x1e1288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1288_0x1e1288");
#endif

    ctx->pc = 0x1e1288u;

    // 0x1e1288: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x1e1288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1e128c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e1290: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x1e1290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    ctx->pc = 0x1e1294u;
}
