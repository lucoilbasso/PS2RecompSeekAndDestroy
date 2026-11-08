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

// Function: entry_00171fdc
// Address: 0x171fdc - 0x171fe0
void entry_00171fdc_0x171fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171fdc_0x171fdc");
#endif

    ctx->pc = 0x171fdcu;

    // 0x171fdc: 0x7b103  sra         $s6, $a3, 4
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), 4));
    ctx->pc = 0x171fe0u;
}
