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

// Function: entry_0010cd38
// Address: 0x10cd38 - 0x10cd44
void entry_0010cd38_0x10cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd38_0x10cd38");
#endif

    ctx->pc = 0x10cd38u;

    // 0x10cd38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x10cd44u;
}
