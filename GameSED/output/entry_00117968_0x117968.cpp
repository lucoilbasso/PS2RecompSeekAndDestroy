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

// Function: entry_00117968
// Address: 0x117968 - 0x117974
void entry_00117968_0x117968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117968_0x117968");
#endif

    ctx->pc = 0x117968u;

    // 0x117968: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x117968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x11796c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11796cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117970: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x117970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x117974u;
}
