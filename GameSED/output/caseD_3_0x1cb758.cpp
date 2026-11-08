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

// Function: caseD_3
// Address: 0x1cb758 - 0x1cb774
void caseD_3_0x1cb758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1cb758");
#endif

    ctx->pc = 0x1cb758u;

    // 0x1cb758: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1cb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1cb75c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1cb75cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb760: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1cb764: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1cb764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1cb768: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb76c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1cb76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1cb770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1cb774u;
}
