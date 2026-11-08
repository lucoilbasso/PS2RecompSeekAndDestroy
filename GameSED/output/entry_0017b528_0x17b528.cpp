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

// Function: entry_0017b528
// Address: 0x17b528 - 0x17b530
void entry_0017b528_0x17b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b528_0x17b528");
#endif

    ctx->pc = 0x17b528u;

    // 0x17b528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b52c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    ctx->pc = 0x17b530u;
}
