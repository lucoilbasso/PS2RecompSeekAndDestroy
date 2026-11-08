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

// Function: entry_001899f0
// Address: 0x1899f0 - 0x189a08
void entry_001899f0_0x1899f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001899f0_0x1899f0");
#endif

    ctx->pc = 0x1899f0u;

    // 0x1899f0: 0x2403444e  addiu       $v1, $zero, 0x444E
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17486));
    // 0x1899f4: 0x3c024021  lui         $v0, 0x4021
    ctx->pc = 0x1899f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16417 << 16));
    // 0x1899f8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1899f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1899fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1899fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x189a00: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x189a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x189a04: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x189a04u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x189a08u;
}
