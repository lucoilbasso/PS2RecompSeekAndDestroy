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

// Function: entry_0017bf18
// Address: 0x17bf18 - 0x17bf20
void entry_0017bf18_0x17bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf18_0x17bf18");
#endif

    ctx->pc = 0x17bf18u;

    // 0x17bf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bf1c: 0xac520038  sw          $s2, 0x38($v0)
    ctx->pc = 0x17bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 18));
    ctx->pc = 0x17bf20u;
}
