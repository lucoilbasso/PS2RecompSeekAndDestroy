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

// Function: entry_00171818
// Address: 0x171818 - 0x171828
void entry_00171818_0x171818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171818_0x171818");
#endif

    ctx->pc = 0x171818u;

    // 0x171818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17181c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x17181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x171820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x171820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171824: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x171824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    ctx->pc = 0x171828u;
}
