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

// Function: entry_00122524
// Address: 0x122524 - 0x12252c
void entry_00122524_0x122524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122524_0x122524");
#endif

    ctx->pc = 0x122524u;

    // 0x122524: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x122524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x122528: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x122528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    ctx->pc = 0x12252cu;
}
