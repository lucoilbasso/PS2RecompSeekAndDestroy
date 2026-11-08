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

// Function: entry_0019916c
// Address: 0x19916c - 0x199174
void entry_0019916c_0x19916c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019916c_0x19916c");
#endif

    ctx->pc = 0x19916cu;

    // 0x19916c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x199170: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x199170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    ctx->pc = 0x199174u;
}
