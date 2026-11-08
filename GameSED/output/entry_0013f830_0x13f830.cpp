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

// Function: entry_0013f830
// Address: 0x13f830 - 0x13f838
void entry_0013f830_0x13f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f830_0x13f830");
#endif

    ctx->pc = 0x13f830u;

    // 0x13f830: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13f830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f834: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13f834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x13f838u;
}
