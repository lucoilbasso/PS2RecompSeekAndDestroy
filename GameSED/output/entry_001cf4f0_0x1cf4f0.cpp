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

// Function: entry_001cf4f0
// Address: 0x1cf4f0 - 0x1cf50c
void entry_001cf4f0_0x1cf4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4f0_0x1cf4f0");
#endif

    ctx->pc = 0x1cf4f0u;

    // 0x1cf4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cf4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf4f8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1cf4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cf4fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf500: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1cf500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cf504: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1cf504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1cf508: 0xacb10008  sw          $s1, 0x8($a1)
    ctx->pc = 0x1cf508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
    ctx->pc = 0x1cf50cu;
}
