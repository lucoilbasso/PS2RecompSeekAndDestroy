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

// Function: entry_0017a980
// Address: 0x17a980 - 0x17a990
void entry_0017a980_0x17a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a980_0x17a980");
#endif

    ctx->pc = 0x17a980u;

    // 0x17a980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a984: 0xae400280  sw          $zero, 0x280($s2)
    ctx->pc = 0x17a984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 640), GPR_U32(ctx, 0));
    // 0x17a988: 0xac520034  sw          $s2, 0x34($v0)
    ctx->pc = 0x17a988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
    // 0x17a98c: 0x0  nop
    ctx->pc = 0x17a98cu;
    // NOP
    ctx->pc = 0x17a990u;
}
