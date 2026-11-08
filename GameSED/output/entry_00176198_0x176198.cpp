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

// Function: entry_00176198
// Address: 0x176198 - 0x1761a8
void entry_00176198_0x176198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176198_0x176198");
#endif

    ctx->pc = 0x176198u;

    // 0x176198: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x176198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x17619c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x17619cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1761a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1761a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761a4: 0x0  nop
    ctx->pc = 0x1761a4u;
    // NOP
    ctx->pc = 0x1761a8u;
}
