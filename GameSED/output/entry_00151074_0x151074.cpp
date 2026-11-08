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

// Function: entry_00151074
// Address: 0x151074 - 0x15107c
void entry_00151074_0x151074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151074_0x151074");
#endif

    ctx->pc = 0x151074u;

    // 0x151074: 0xc602034c  lwc1        $f2, 0x34C($s0)
    ctx->pc = 0x151074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151078: 0xc6010350  lwc1        $f1, 0x350($s0)
    ctx->pc = 0x151078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x15107cu;
}
