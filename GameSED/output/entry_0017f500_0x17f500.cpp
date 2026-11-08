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

// Function: entry_0017f500
// Address: 0x17f500 - 0x17f520
void entry_0017f500_0x17f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f500_0x17f500");
#endif

    ctx->pc = 0x17f500u;

    // 0x17f500: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x17f500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x17f504: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17f504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17f508: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17f50c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f510: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x17f514: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x17f514u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17f518: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17f51c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    ctx->pc = 0x17f520u;
}
