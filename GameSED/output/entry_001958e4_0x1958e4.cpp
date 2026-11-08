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

// Function: entry_001958e4
// Address: 0x1958e4 - 0x1958f8
void entry_001958e4_0x1958e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958e4_0x1958e4");
#endif

    ctx->pc = 0x1958e4u;

    // 0x1958e4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1958e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1958e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1958e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1958ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1958f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1958f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1958f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1958f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    ctx->pc = 0x1958f8u;
}
