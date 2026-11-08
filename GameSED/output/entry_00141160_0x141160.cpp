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

// Function: entry_00141160
// Address: 0x141160 - 0x141168
void entry_00141160_0x141160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141160_0x141160");
#endif

    ctx->pc = 0x141160u;

    // 0x141160: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x141160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141164: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x141164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x141168u;
}
