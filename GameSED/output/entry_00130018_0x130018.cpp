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

// Function: entry_00130018
// Address: 0x130018 - 0x130028
void entry_00130018_0x130018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130018_0x130018");
#endif

    ctx->pc = 0x130018u;

    // 0x130018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13001c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13001cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130020: 0x3c140020  lui         $s4, 0x20
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32 << 16));
    // 0x130024: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x130024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130028u;
}
