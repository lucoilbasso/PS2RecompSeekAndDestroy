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

// Function: entry_00179f44
// Address: 0x179f44 - 0x179f58
void entry_00179f44_0x179f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f44_0x179f44");
#endif

    ctx->pc = 0x179f44u;

    // 0x179f44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x179f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x179f48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x179f48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x179f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x179f50: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x179f50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x179f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    ctx->pc = 0x179f58u;
}
