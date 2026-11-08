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

// Function: entry_00177038
// Address: 0x177038 - 0x177048
void entry_00177038_0x177038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177038_0x177038");
#endif

    ctx->pc = 0x177038u;

    // 0x177038: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x177038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17703c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17703cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177040: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x177040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177044: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x177044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x177048u;
}
