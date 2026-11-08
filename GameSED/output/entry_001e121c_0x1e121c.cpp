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

// Function: entry_001e121c
// Address: 0x1e121c - 0x1e1228
void entry_001e121c_0x1e121c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e121c_0x1e121c");
#endif

    ctx->pc = 0x1e121cu;

    // 0x1e121c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1e121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1e1220: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e1224: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x1e1224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    ctx->pc = 0x1e1228u;
}
