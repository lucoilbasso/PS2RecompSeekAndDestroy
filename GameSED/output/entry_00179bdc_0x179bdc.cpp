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

// Function: entry_00179bdc
// Address: 0x179bdc - 0x179be0
void entry_00179bdc_0x179bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179bdc_0x179bdc");
#endif

    ctx->pc = 0x179bdcu;

    // 0x179bdc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x179bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x179be0u;
}
