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

// Function: entry_001bcedc
// Address: 0x1bcedc - 0x1bcee0
void entry_001bcedc_0x1bcedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcedc_0x1bcedc");
#endif

    ctx->pc = 0x1bcedcu;

    // 0x1bcedc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bcedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x1bcee0u;
}
