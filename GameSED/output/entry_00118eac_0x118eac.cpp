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

// Function: entry_00118eac
// Address: 0x118eac - 0x118eb0
void entry_00118eac_0x118eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118eac_0x118eac");
#endif

    ctx->pc = 0x118eacu;

    // 0x118eac: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x118eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x118eb0u;
}
