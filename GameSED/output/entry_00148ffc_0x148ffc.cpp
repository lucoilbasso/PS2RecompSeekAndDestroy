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

// Function: entry_00148ffc
// Address: 0x148ffc - 0x149000
void entry_00148ffc_0x148ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ffc_0x148ffc");
#endif

    ctx->pc = 0x148ffcu;

    // 0x148ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x149000u;
}
