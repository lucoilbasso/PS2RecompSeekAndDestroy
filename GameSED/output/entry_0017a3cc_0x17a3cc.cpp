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

// Function: entry_0017a3cc
// Address: 0x17a3cc - 0x17a3d4
void entry_0017a3cc_0x17a3cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3cc_0x17a3cc");
#endif

    ctx->pc = 0x17a3ccu;

    // 0x17a3cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a3d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x17a3d4u;
}
