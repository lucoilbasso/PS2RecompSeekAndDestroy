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

// Function: entry_0014c104
// Address: 0x14c104 - 0x14c110
void entry_0014c104_0x14c104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c104_0x14c104");
#endif

    ctx->pc = 0x14c104u;

    // 0x14c104: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x14c104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c108: 0x8c503584  lw          $s0, 0x3584($v0)
    ctx->pc = 0x14c108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13700)));
    // 0x14c10c: 0x0  nop
    ctx->pc = 0x14c10cu;
    // NOP
    ctx->pc = 0x14c110u;
}
