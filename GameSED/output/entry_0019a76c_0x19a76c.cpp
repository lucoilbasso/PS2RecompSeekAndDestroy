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

// Function: entry_0019a76c
// Address: 0x19a76c - 0x19a774
void entry_0019a76c_0x19a76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a76c_0x19a76c");
#endif

    ctx->pc = 0x19a76cu;

    // 0x19a76c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19a770: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19a770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x19a774u;
}
