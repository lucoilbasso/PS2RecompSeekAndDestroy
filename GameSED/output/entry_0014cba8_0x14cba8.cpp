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

// Function: entry_0014cba8
// Address: 0x14cba8 - 0x14cbb0
void entry_0014cba8_0x14cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cba8_0x14cba8");
#endif

    ctx->pc = 0x14cba8u;

    // 0x14cba8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CBA8u;
    {
        const bool branch_taken_0x14cba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cba8) {
            ctx->pc = 0x14CBBCu;
            return;
        }
    }
    ctx->pc = 0x14CBB0u;
}
